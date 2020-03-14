import sys
from PyQt5.QtWidgets import QApplication, QDialog, QMessageBox
from ui_DataInput import Ui_DataInput 
from PyQt5.QtCore import QRegExp, pyqtSlot, QRect, Qt
from PyQt5.QtGui import QRegExpValidator, QPainter, QPixmap
import requests

class QDataInput(QDialog):
    def __init__(self, parent = None):
        super().__init__()
        self.ui = Ui_DataInput()
        self.ui.setupUi(self)

        #为给定的模式字符串构造一个正则表达式对象,用来给账号和密码输入进行限制
        regx = QRegExp("[0-9]{10}$")
        #构造验证器，该父对象接受与正则表达式匹配的所有字符串。
        validator_age = QRegExpValidator(regx, self.ui.age_Edit)
        validator_weight = QRegExpValidator(regx, self.ui.weight_Edit)
        validator_height = QRegExpValidator(regx, self.ui.height_Edit)
        #给输入组件加上验证器，同时让密码输入编程原点输入
        self.ui.age_Edit.setValidator(validator_age)
        self.ui.weight_Edit.setValidator(validator_weight)
        self.ui.height_Edit.setValidator(validator_height)

        self.__pic = QPixmap("Login_back.jpg") #载入背景图片到内存，提高绘制速度
    
    def on_buttonBox_accepted(self):
        #点击确认后需要获取所有输入数据
        name = self.ui.name_Edit.text()
        age = self.ui.age_Edit.text()
        weight = self.ui.weight_Edit.text()
        height = self.ui.height_Edit.text()
        gender = 'male' if self.ui.male_radioButton.isChecked else 'female'

        if (bool(name) + bool(age) + bool(weight) + bool(height) + bool(gender)) == 5:
            #如果所有输入全部有值
            self.accept()
        else:
            #若有缺省值，则弹出提示窗
            QMessageBox.information(self, "存在缺省值", "请填写所有内容")

    def on_buttonBox_rejected(self):
        self.reject()
    
    def getBasicInfo(self):
        #返回当前输入栏所有的数据
        name = self.ui.name_Edit.text()
        age = self.ui.age_Edit.text()
        weight = self.ui.weight_Edit.text()
        height = self.ui.height_Edit.text()
        gender = 'male' if self.ui.male_radioButton.isChecked else 'female'
        return name, age, weight, height, gender
    
    def paintEvent(self, event):
        paint = QPainter(self)
        paint.drawPixmap(0, 0, self.width(), self.height(), self.__pic) #这个地方四个参数分别是x, y, width, height
        super().paintEvent(event)
