from PyQt5.QtWidgets import QDialog, QMessageBox, QAbstractItemView
from PyQt5.QtCore import  pyqtSlot, Qt, QStringListModel, QMargins
from ui_Index_gasList import Ui_Index_gasList
from PyQt5.QtChart import QChart,QLineSeries,QValueAxis
from PyQt5.QtGui import QPainter,QPen,QColor,QBrush,QFont
import requests

#要在ui文件中from PyQt5.QtChart import QChartView

class QIndex_gasList(QDialog):
    username = ''
    person_id = ''
    url = ''
    gas = []
    def __init__(self, parent = None):
        super().__init__(parent)
        self.ui = Ui_Index_gasList()
        self.ui.setupUi(self)

        self.model=QStringListModel(self)
        self.ui.listView.setModel(self.model)
        self.ui.listView.setEditTriggers(QAbstractItemView.NoEditTriggers)
        #self.ui.listView.setEditTriggers(QAbstractItemView.DoubleClicked | QAbstractItemView.SelectedClicked)

        self.__createChart()

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

    def on_listView_clicked(self,index): #如果某条数据信息被点击，则向绘图框发送信息
        self.showGas(self.gas[self.ui.listView.currentIndex().row()])
        self.__prepareData()
    
    def showGas(self, gasData): #接收gas数据，并在页面右侧进行显示
        #首先向五个Edit设置数据
        sensor = self.ui.sensorBox.currentIndex()
        self.ui.timeEdit.setText(gasData["gas_time"])
        self.ui.maxEdit.setText(str(eval(gasData["gas_max"])[sensor]))
        self.ui.minEdit.setText(str(eval(gasData["gas_min"])[sensor]))
        self.ui.oriEdit.setText(str(eval(gasData["gas_ori"])[sensor]))
        self.ui.extrEdit.setText(str(eval(gasData["gas_extrTime"])[sensor]))

    def on_sensorBox_currentIndexChanged(self):
        gasData = self.gas[self.ui.listView.currentIndex().row()]
        sensor = self.ui.sensorBox.currentIndex()
        self.ui.timeEdit.setText(gasData["gas_time"])
        self.ui.maxEdit.setText(str(eval(gasData["gas_max"])[sensor]))
        self.ui.minEdit.setText(str(eval(gasData["gas_min"])[sensor]))
        self.ui.oriEdit.setText(str(eval(gasData["gas_ori"])[sensor]))
        self.ui.extrEdit.setText(str(eval(gasData["gas_extrTime"])[sensor]))
    
    def __createChart(self):
        self.__chart = QChart()
        self.ui.chartView.setChart(self.__chart)
        self.__chart.legend().setVisible(False) #隐藏图例
        self.__chart.setMargins(QMargins(0, 0, 0, 0)) #把间距设置到最小
        
        #初始化线条数组
        series = [QLineSeries() for _ in range(15)]
        color = ['#FF88C2', '#FF8888', '#FFA488', '#FFBB66', '#FFDD55', '#FFFF77', '#DDFF77', '#BBFF66', '#66FF66', '#77FFCC', '#77FFEE', '#66FFFF', '#77DDFF', '#99BBFF', '#9999FF']

        #设置线条颜色形状
        pen = QPen()
        pen.setStyle(Qt.SolidLine)
        pen.setWidth(2)
        for i in range(15):
            pen.setColor(QColor(color[i]))
            series[i].setPen(pen)

        #向表格添加线条
        for i in range(15):
            self.__chart.addSeries(series[i])
        
        #设置坐标轴
        axisX = QValueAxis()
        #self.__curAxis=axisX       #当前坐标轴
        axisX.setRange(0, 200)      #设置坐标轴范围
        axisX.setLabelFormat("%d")  #标签格式
        axisX.setTickCount(5)        #主分隔个数
        axisX.setMinorTickCount(4)
        axisX.setGridLineVisible(True)
        axisX.setMinorGridLineVisible(False)

        axisY = QValueAxis()
        axisY.setRange(0, 1024)
        axisY.setLabelFormat("%d")     #标签格式
        axisY.setTickCount(5)
        axisY.setMinorTickCount(4)
        axisY.setGridLineVisible(True)
        axisY.setMinorGridLineVisible(False)

        self.__chart.addAxis(axisX,Qt.AlignBottom) #坐标轴添加到图表，并指定方向
        self.__chart.addAxis(axisY,Qt.AlignLeft)

        for i in range(15):
            series[i].attachAxis(axisX)
            series[i].attachAxis(axisY)

    def __prepareData(self):  ##为序列设置数据点
        chart=self.ui.chartView.chart()  #获取chartView中的QChart对象
        series = [QLineSeries() for _ in range(15)]
        for i in range(15):
            series[i] = chart.series()[i]
            series[i].clear()

        gasData = self.gas[self.ui.listView.currentIndex().row()]

        sensors = ['' for _ in range(15)]
        for i in range(15):
            sensors[i] = eval(gasData['gas_sensors' + str(i + 1)])
            for j in range(len(sensors[i])):
                series[i].append(j, sensors[i][j])

    @pyqtSlot(bool)
    def on_refreshButton_clicked(self):#刷新列表
        #先清空所有的list
        self.model.removeRows(0, self.model.rowCount())

        #开始查询该用户的所有气体文件,用list变量gas保存
        list_gasInfo = requests.get(self.url + '/person/getGasInfo/' + str(self.person_id))
        self.gas = eval(list_gasInfo.text)

        #开始将数据添加进list中
        for i in self.gas:
            self.addItem(i["save_time"])
    
    @pyqtSlot(bool)
    def on_deleteButton_clicked(self):#删除某条气体数据
        #如果此时listview没有数据，则跳过
        if self.model.rowCount() == 0:
            pass
        else:
            #弹出确认删除的窗口
            result = QMessageBox.question(self, '删除', '是否要删除' + self.gas[self.ui.listView.currentIndex().row()]["save_time"], QMessageBox.Yes|QMessageBox.Cancel, QMessageBox.NoButton)
            if result == QMessageBox.Yes:
                delete_gasInfo = requests.get(self.url + '/person/deleteGas/' + str(self.gas[self.ui.listView.currentIndex().row()]["gas_id"]))
                #这个地方的删除实际上没有删除数据库中的表，是把gas的is_delete写为了True，显示的时候不做显示

                #先清空所有的list
                self.model.removeRows(0, self.model.rowCount())

                #开始查询该用户的所有气体文件,用list变量gas保存
                list_gasInfo = requests.get(self.url + '/person/getGasInfo/' + str(self.person_id))
                self.gas = eval(list_gasInfo.text)

                #开始将数据添加进list中
                for i in self.gas:
                    self.addItem(i["save_time"])
        