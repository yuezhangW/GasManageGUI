from PyQt5.QtWidgets import QDialog, QMessageBox, QAbstractItemView
from PyQt5.QtCore import  pyqtSlot, Qt, QStringListModel
from ui_Index_gasAnalysis import Ui_Index_gasAnalysis
import requests, os

import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.svm import SVC, LinearSVC
from sklearn.ensemble import RandomForestClassifier
from sklearn.neighbors import KNeighborsClassifier
from sklearn.naive_bayes import GaussianNB
from sklearn.linear_model import Perceptron
from sklearn.preprocessing import StandardScaler
import joblib


class QIndex_gasAnalysis(QDialog):
    username = ''
    person_id = ''
    url = ''
    gas = []
    def __init__(self, parent = None):
        super().__init__(parent)
        self.ui = Ui_Index_gasAnalysis()
        self.ui.setupUi(self)

        self.model=QStringListModel(self)
        self.ui.listView.setModel(self.model)
        self.ui.listView.setEditTriggers(QAbstractItemView.NoEditTriggers)
    
    def setInfo(self, username, person_id, url):
        self.username = username
        self.person_id = person_id
        self.url = url

        #开始查询该用户的所有气体文件,用list变量gas保存
        list_gasInfo = requests.get(self.url + '/person/getGasInfo/' + str(self.person_id))
        self.gas = eval(list_gasInfo.text)

        #开始将数据添加进list中
        for i in self.gas:
            self.addItem(i["save_time"])
    
    def addItem(self, name): #向list添加数据
        #在尾部插入一空行 
        lastRow = self.model.rowCount()
        self.model.insertRow(lastRow)
        #给该空行设置显示
        index = self.model.index(lastRow, 0)
        self.model.setData(index, name, Qt.DisplayRole)
        #选中该行
        self.ui.listView.setCurrentIndex(index)

    @pyqtSlot(bool)
    def on_OKButton_clicked(self):
        if self.model.rowCount() == 0:#如果当前列表框没有数据，则不做出响应
            pass
        else:
            #(1)选中的气体数据
            gasData = self.gas[self.ui.listView.currentIndex().row()]
            #(2)选择哪些分类器
            classifierlist = []
            if self.ui.LogisticBox.isChecked():
                classifierlist.append('Logistic')
            if self.ui.SVCBox.isChecked():
                classifierlist.append('SVC')
            if self.ui.Linear_SVCBox.isChecked():
                classifierlist.append('LinearSVC')
            if self.ui.PerceptronBox.isChecked():
                classifierlist.append('Perceptron')
            if self.ui.gaussianBox.isChecked():
                classifierlist.append('Gaussian')
            if self.ui.kNNBox.isChecked():
                classifierlist.append('Knn')
            if self.ui.ForestBox.isChecked():
                classifierlist.append('Forest')
            #(3)给此条分析记录命名
            name = self.ui.nameEdit.text()

            #(4)需要对哪种类别进行分析
            statusType = self.ui.typeBox.currentText()

            #数据获取完毕后需要确认数据完整性
            if len(classifierlist) == 0:#如果一个分类器都没有选
                QMessageBox.information(self, "错误", "请至少选择一个分类器")
            elif name == '':#如果没有命名
                QMessageBox.information(self, "错误", "请对此条分析进行命名")
            else:
                #确认完毕后，可以开始进行分析
                self.gasAnalysisStart(gasData, classifierlist, name, statusType)
    
    def gasAnalysisStart(self, gasData, classifierList, name, statusType):
        #首先需要将最大值和最小值与初始值做相减处理,同时进行拼接
        gas_max, gas_min, gas_ori, gas_extrTime = eval(gasData["gas_max"]), eval(gasData["gas_min"]), eval(gasData["gas_ori"]), eval(gasData["gas_extrTime"])
        for i in range(len(gas_ori)):
            gas_max[i], gas_min[i] = gas_max[i] - gas_ori[i], gas_min[i] - gas_ori[i]
        X_test = gas_max + gas_min + gas_extrTime
        X_test = np.array(X_test)

        #对数据进行标准化处理,需要加载事先保存好的标准化模型
        sc = joblib.load(os.getcwd() + '\classifier\sc')
        X_test = sc.transform(X_test.reshape(1, -1)) #这个地方由于标准化仅支持二维Array，所以需要reshape一下

        #这个地方需要根据不同的选择，做不同种类的数据分析
        if statusType == '呼气者性别':

            #加载分类器，根据需求依次进行训练
            statusData = {
                'status_type':statusType,
                'status_Logistic':'None',
                'status_SVC':'None',
                'status_LinearSVC':'None',
                'status_Gaussian':'None',
                'status_Knn':'None',
                'status_Forest':'None',
                'status_Perceptron':'None',
                'save_name':name,
                'person_id':self.person_id,
                'is_delete':'False',
                'gas_save_time':gasData['save_time']
            }#初始化data
            for i in classifierList:
                classifier = joblib.load(os.getcwd() + '\classifier\classifier_' + i + '.m')
                Y_test = classifier.predict(X_test).tolist()
                statusData['status_' + i] = Y_test[0]
            #向云端服务器发送存储请求
            save_status = requests.post(self.url + '/person/getStatusInfo/' + str(self.person_id), data = statusData)
            #print(save_status.text)

            #保存成功后弹出窗口，并关闭此页面
            QMessageBox.information(self, "保存成功", "请在'查看历史分析记录'中查看")
        
        self.accept()

            
