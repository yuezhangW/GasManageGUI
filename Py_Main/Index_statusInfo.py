from PyQt5.QtWidgets import QDialog, QMessageBox, QAbstractItemView
from PyQt5.QtCore import  pyqtSlot, Qt, QStringListModel
from ui_Index_statusInfo import Ui_Index_statusInfo
import requests
from collections import Counter

class QIndex_statusInfo(QDialog):
    username = ''
    person_id = ''
    url = ''
    status = []
    def __init__(self, parent = None):
        super().__init__(parent)
        self.ui = Ui_Index_statusInfo()
        self.ui.setupUi(self)

        self.model=QStringListModel(self)
        self.ui.listView.setModel(self.model)
        self.ui.listView.setEditTriggers(QAbstractItemView.NoEditTriggers)
    
    def setInfo(self, username, person_id, url):
        self.username = username
        self.person_id = person_id
        self.url = url

        #开始查询该用户的所有气体文件,用list变量gas保存
        list_statusInfo = requests.get(self.url + '/person/getStatusInfo/' + str(self.person_id))
        self.status = eval(list_statusInfo.text)

        #开始将数据添加进list中
        for i in self.status:
            self.addItem(i["save_name"])
    
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
        index = index.row()
        status = self.status[index]
        self.ui.saveTimeEdit.setText(status['gas_save_time'])
        self.ui.preTypeEdit.setText(status['status_type'])
        self.ui.preLogisticEdit.setText(status['status_Logistic'])
        self.ui.preSVCEdit.setText(status['status_SVC'])
        self.ui.preLinearSVCEdit.setText(status['status_LinearSVC'])
        self.ui.prePerceptronEdit.setText(status['status_Perceptron'])
        self.ui.preKNNEdit.setText(status['status_Knn'])
        self.ui.preForestEdit.setText(status['status_Forest'])
        self.ui.preGaussianEdit.setText(status['status_Gaussian'])
        self.ui.preVoteEdit.setText(self.vote(status))

    def vote(self, status):
        res = []
        if status['status_Logistic'] != 'None':
            res.append(status['status_Logistic'])
        if status['status_SVC'] != 'None':
            res.append(status['status_SVC'])
        if status['status_LinearSVC'] != 'None':
            res.append(status['status_LinearSVC'])
        if status['status_Perceptron'] != 'None':
            res.append(status['status_Perceptron'])
        if status['status_Knn'] != 'None':
            res.append(status['status_Knn'])
        if status['status_Forest'] != 'None':
            res.append(status['status_Forest'])
        if status['status_Gaussian'] != 'None':
            res.append(status['status_Gaussian'])
        return Counter(res).most_common(1)[0][0]
    
    @pyqtSlot(bool)
    def on_refreshButton_clicked(self):
        #先清空所有的list
        self.model.removeRows(0, self.model.rowCount())

        #开始查询该用户的所有气体文件,用list变量status保存
        list_statusInfo = requests.get(self.url + '/person/getStatusInfo/' + str(self.person_id))
        self.status = eval(list_statusInfo.text)

        #开始将数据添加进list中
        for i in self.status:
            self.addItem(i["save_name"])


    @pyqtSlot(bool)
    def on_deleteButton_clicked(self):
        #如果此时listview没有数据，则跳过
        if self.model.rowCount() == 0:
            pass
        else:
            #弹出确认删除的窗口
            result = QMessageBox.question(self, '删除', '是否要删除' + self.status[self.ui.listView.currentIndex().row()]["save_name"], QMessageBox.Yes|QMessageBox.Cancel, QMessageBox.NoButton)
            if result == QMessageBox.Yes:
                delete_statusInfo = requests.get(self.url + '/person/deleteStatus/' + str(self.status[self.ui.listView.currentIndex().row()]["status_id"]))
                #这个地方的删除实际上没有删除数据库中的表，是把status的is_delete写为了True，显示的时候不做显示

                #先清空所有的list
                self.model.removeRows(0, self.model.rowCount())

                #开始查询该用户的所有气体文件,用list变量status保存
                list_statusInfo = requests.get(self.url + '/person/getStatusInfo/' + str(self.person_id))
                self.status = eval(list_statusInfo.text)

                #开始将数据添加进list中
                for i in self.status:
                    self.addItem(i["save_name"])
        