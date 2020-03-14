import sys, os, requests, re
from PyQt5.QtWidgets import QApplication, QMainWindow, QFileDialog, QMessageBox
from ui_Index import Ui_Index

from Index_basicInfo import QIndex_basicInfo
from Index_basicCh import QIndex_basicCh
from Index_passwordCh import QIndex_passwordCh
from Index_gasList import QIndex_gasList
from Index_gasAnalysis import QIndex_gasAnalysis
from Index_statusInfo import QIndex_statusInfo

from DataInput import QDataInput
from PyQt5.QtCore import pyqtSlot, QCoreApplication, Qt
from PyQt5.QtGui import QPainter, QPixmap
import datetime

class QIndex(QMainWindow):
    urlDatabase = ''
    username = ''
    basicInfo = {}

    def __init__(self, parent = None):
        super().__init__()
        self.ui = Ui_Index()
        self.ui.setupUi(self)

        self.ui.tabWidget.clear()
        #self.ui.tabWidget.setTabsClosable(True)    #Page有关闭按钮
        #self.ui.tabWidget.setDocumentMode(True)
        #self.ui.tabWidget.setTabBarAutoHide(True)
        self.ui.toolBox.setCurrentIndex(0)#设置显示toolbox第一页
        self.__pic = QPixmap("Index_back.jpg") #载入背景图片到内存，提高绘制速度
    
    def paintEvent(self, event):
        paint = QPainter(self)
        paint.drawPixmap(0, 0,
         self.width(), self.height(), self.__pic) #这个地方四个参数分别是x, y, width, height
        super().paintEvent(event)
        
    def setInit(self, url, username):
        self.urlDatabase = url
        self.username = username
        #查询此用户是否填写了个人基本信息
        is_basicInfo = requests.get(self.urlDatabase + '/person/getBasicInfo/' + username)
        #如果没有填写，则弹出个人信息填写窗口        
        if is_basicInfo.text == '[]':
            dataInputDialog = QDataInput()
            ret = dataInputDialog.exec()
            if ret == dataInputDialog.Accepted:
                name, age, weight, height, gender = dataInputDialog.getBasicInfo()
                data = {
                    'person_name':name,
                    'person_age':age,
                    'person_gender':gender,
                    'person_weight':weight,
                    'person_height':height,
                    'username_user':username,
                }
                #将数据存储至数据库，也同时存储一份到basicInfo变量中
                save_basicInfo = requests.post(self.urlDatabase + '/person/getBasicInfo/' + username, data=data)
                self.basicInfo = eval(save_basicInfo.text)
            else:
                #如果用户没有完成基本信息的填写，则强制关闭所有窗口
                QCoreApplication.instance().quit()
        #如果填写过资料，则将资料存储到basicInfo中
        else:
            self.basicInfo = eval(is_basicInfo.text)[0]
        print(self.basicInfo)
    
    def loadGastxt(self, fileURL):
        #打开目标文件
        with open(fileURL) as f:
            gas_data_ori = f.read()
        #使用正则表达式提取有效信息，并转化为int
        gas_data_ori = re.findall(r'\d* ', gas_data_ori)
        gas_data_ori = list(map(int, gas_data_ori))
        #确定数据二维尺寸
        row = 15
        col = int(len(gas_data_ori) / row)
        #预分配内存，将数据进行二维存储
        gas_data = [[0] * col for _ in range(row)]
        for i in range(row):
            for j in range(col):
                gas_data[i][j] = gas_data_ori[j * row + i]

        #按照数据库格式设置变量

        #gas_time
        gas_time = col

        #gas_sensors1-15
        gas_sensors = gas_data

        #gas_max
        gas_max = [max(i) for i in gas_data]
        gas_max_index = [i.index(max(i)) for i in gas_data]

        #gas_min
        gas_min = [min(i) for i in gas_data]
        gas_min_index = [i.index(min(i)) for i in gas_data]

        #gas_ori
        gas_ori = [i[0] for i in gas_data]

        #gas_extrTime
        gas_extrTime = [0 for _ in range(len(gas_ori))]
        for i in range(len(gas_extrTime)):
            gas_extrTime[i] = gas_max_index[i] if abs(gas_max[i] - gas_ori[i]) >= abs(gas_min[i] - gas_ori[i]) else gas_min_index[i]
        
        return gas_time, gas_sensors, gas_max, gas_min, gas_ori, gas_extrTime
    
    def moveGas2Database(self, gas_time, gas_sensors, gas_max, gas_min, gas_ori, gas_extrTime, save_time):
        data = {
            'gas_time':str(gas_time),
            'gas_sensors1':str(gas_sensors[0]),
            'gas_sensors2':str(gas_sensors[1]),
            'gas_sensors3':str(gas_sensors[2]),
            'gas_sensors4':str(gas_sensors[3]),
            'gas_sensors5':str(gas_sensors[4]),
            'gas_sensors6':str(gas_sensors[5]),
            'gas_sensors7':str(gas_sensors[6]),
            'gas_sensors8':str(gas_sensors[7]),
            'gas_sensors9':str(gas_sensors[8]),
            'gas_sensors10':str(gas_sensors[9]),
            'gas_sensors11':str(gas_sensors[10]),
            'gas_sensors12':str(gas_sensors[11]),
            'gas_sensors13':str(gas_sensors[12]),
            'gas_sensors14':str(gas_sensors[13]),
            'gas_sensors15':str(gas_sensors[14]),
            'gas_max':str(gas_max),
            'gas_min':str(gas_min),
            'gas_ori':str(gas_ori),
            'gas_extrTime':str(gas_extrTime),
            'save_time':save_time,
            'is_delete':'False',
            'person_id':self.basicInfo["person_id"],
        }
        save_gas = requests.post(self.urlDatabase + '/person/getGasInfo/' + str(self.basicInfo["person_id"]), data = data)
        #any_gasInfo = requests.get(self.urlDatabase + '/person/getGasInfo/' + str(self.basicInfo["person_id"]))
        #print(eval(any_gasInfo.text))

    @pyqtSlot(bool)
    def on_loadGasButton_clicked(self):
        #获取当前的时间，作为存储气体数据的文件名
        now_time = datetime.datetime.now()
        now_time = datetime.datetime.strftime(now_time, '%Y-%m-%d %H:%M:%S')
        #弹出加载文件的窗口，返回参数中fileName是完整文件路径，flt是文件类型
        fileName, flt = QFileDialog.getOpenFileNames(self, "打开气体文本文件", os.getcwd(), "文本文件(*.txt)")
        if fileName:
            gas_time, gas_sensors, gas_max, gas_min, gas_ori, gas_extrTime = self.loadGastxt(fileName[0])
            #将文件导入数据库中
            self.moveGas2Database(gas_time, gas_sensors, gas_max, gas_min, gas_ori, gas_extrTime, now_time)
            QMessageBox.information(self, "成功", "数据已导入")

    def on_tabWidget_tabCloseRequested(self,index):  #分页关闭时关闭窗体
        if (index<0):
            return
        aForm=self.ui.tabWidget.widget(index)
        aForm.close()

    @pyqtSlot(bool)
    def on_basicInfoButton_clicked(self): #基本信息按钮 
        Index_basicInfo = QIndex_basicInfo(self)
        Index_basicInfo.setAttribute(Qt.WA_DeleteOnClose)
        tabTitle = "基本信息%d"%self.ui.tabWidget.count()
        curIndex = self.ui.tabWidget.addTab(Index_basicInfo, tabTitle)
        self.ui.tabWidget.setCurrentIndex(curIndex)
        self.ui.tabWidget.setTabBarAutoHide(False)
        Index_basicInfo.setInfo(
            self.basicInfo["person_name"], 
            self.basicInfo["person_age"], 
            self.basicInfo["person_gender"], 
            self.basicInfo["person_weight"], 
            self.basicInfo["person_height"], 
            self.basicInfo["username_user"]
        )

    @pyqtSlot(bool)
    def on_dataChButton_clicked(self): #修改个人信息按钮
        Index_basicCh = QIndex_basicCh(self)
        Index_basicCh.setAttribute(Qt.WA_DeleteOnClose)
        tabTitle = "资料修改%d"%self.ui.tabWidget.count()
        curIndex = self.ui.tabWidget.addTab(Index_basicCh, tabTitle)
        self.ui.tabWidget.setCurrentIndex(curIndex)
        self.ui.tabWidget.setTabBarAutoHide(False)
        Index_basicCh.setInfo(
            self.basicInfo["person_name"], 
            self.basicInfo["person_age"], 
            self.basicInfo["person_gender"], 
            self.basicInfo["person_weight"], 
            self.basicInfo["person_height"], 
            self.basicInfo["username_user"],
            self.basicInfo["person_id"],
            self.urlDatabase
        )
        ret = Index_basicCh.exec()
        if ret == Index_basicCh.Accepted:
            get_basicInfo = requests.get(self.urlDatabase + '/person/getBasicInfo/' + self.username)
            self.basicInfo = eval(get_basicInfo.text)[0]

    @pyqtSlot(bool)       
    def on_passwordButton_clicked(self):
        Index_passwordCh = QIndex_passwordCh(self)
        Index_passwordCh.setAttribute(Qt.WA_DeleteOnClose)
        tabTitle = "修改密码%d"%self.ui.tabWidget.count()
        curIndex = self.ui.tabWidget.addTab(Index_passwordCh, tabTitle)
        self.ui.tabWidget.setCurrentIndex(curIndex)
        self.ui.tabWidget.setTabBarAutoHide(False)
        Index_passwordCh.setInfo(
            self.basicInfo["username_user"],
            self.basicInfo["person_id"],
            self.urlDatabase
        )

    @pyqtSlot(bool)
    def on_gasListButton_clicked(self):
        Index_gasList = QIndex_gasList(self)
        Index_gasList.setAttribute(Qt.WA_DeleteOnClose)
        tabTitle = "气体管理%d"%self.ui.tabWidget.count()
        curIndex = self.ui.tabWidget.addTab(Index_gasList, tabTitle)
        self.ui.tabWidget.setCurrentIndex(curIndex)
        self.ui.tabWidget.setTabBarAutoHide(False)
        Index_gasList.setInfo(
            self.basicInfo["username_user"],
            self.basicInfo["person_id"],
            self.urlDatabase
        )

    @pyqtSlot(bool)
    def on_getStatusButton_clicked(self):
        Index_gasAnalysis = QIndex_gasAnalysis(self)
        Index_gasAnalysis.setAttribute(Qt.WA_DeleteOnClose)
        tabTitle = "气体分析%d"%self.ui.tabWidget.count()
        curIndex = self.ui.tabWidget.addTab(Index_gasAnalysis, tabTitle)
        self.ui.tabWidget.setCurrentIndex(curIndex)
        self.ui.tabWidget.setTabBarAutoHide(False)
        Index_gasAnalysis.setInfo(
            self.basicInfo["username_user"],
            self.basicInfo["person_id"],
            self.urlDatabase
        )
    
    @pyqtSlot(bool)
    def on_statusListButton_clicked(self):
        Index_statusInfo = QIndex_statusInfo(self)
        Index_statusInfo.setAttribute(Qt.WA_DeleteOnClose)
        tabTitle = "气体分析记录%d"%self.ui.tabWidget.count()
        curIndex = self.ui.tabWidget.addTab(Index_statusInfo, tabTitle)
        self.ui.tabWidget.setCurrentIndex(curIndex)
        self.ui.tabWidget.setTabBarAutoHide(False)
        Index_statusInfo.setInfo(
            self.basicInfo["username_user"],
            self.basicInfo["person_id"],
            self.urlDatabase
        )

    @pyqtSlot(bool)
    def on_action_triggered(self):
        QMessageBox.about(self, '关于', '本系统为V1.0测试版，需要网络支持\nOcto保有版权')
    
    @pyqtSlot(bool)
    def on_loadGas_triggered(self):
        #获取当前的时间，作为存储气体数据的文件名
        now_time = datetime.datetime.now()
        now_time = datetime.datetime.strftime(now_time, '%Y-%m-%d %H:%M:%S')
        #弹出加载文件的窗口，返回参数中fileName是完整文件路径，flt是文件类型
        fileName, flt = QFileDialog.getOpenFileNames(self, "打开气体文本文件", os.getcwd(), "文本文件(*.txt)")
        if fileName:
            gas_time, gas_sensors, gas_max, gas_min, gas_ori, gas_extrTime = self.loadGastxt(fileName[0])
            #将文件导入数据库中
            self.moveGas2Database(gas_time, gas_sensors, gas_max, gas_min, gas_ori, gas_extrTime, now_time)
            QMessageBox.information(self, "成功", "数据已导入")
        