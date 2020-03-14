from PyQt5.QtWidgets import QDialog, QMessageBox, QLineEdit
from PyQt5.QtCore import  QRegExp, pyqtSlot, QRect, Qt
from ui_Index_passwordCh import Ui_Index_passwordCh
from PyQt5.QtGui import QRegExpValidator
import requests

class QIndex_passwordCh(QDialog):
    username = ''
    person_id = ''
    url = ''
    def __init__(self, parent = None):
        super().__init__(parent)
        self.ui = Ui_Index_passwordCh()
        self.ui.setupUi(self)

        #为给定的模式字符串构造一个正则表达式对象,用来给账号和密码输入进行限制
        regx = QRegExp("[0-9A-Za-z]{20}$")
        #构造验证器，该父对象接受与正则表达式匹配的所有字符串。
        validator_ID = QRegExpValidator(regx, self.ui.IDEdit)
        validator_OriPa = QRegExpValidator(regx, self.ui.OriPaEdit)
        validator_NewPa = QRegExpValidator(regx, self.ui.NewPaEdit)
        validator_NewPaAgain = QRegExpValidator(regx, self.ui.NewPaAgainEdit)
        #给输入组件加上验证器，同时让密码输入编程原点输入
        self.ui.IDEdit.setValidator(validator_ID)
        self.ui.OriPaEdit.setValidator(validator_OriPa)
        self.ui.NewPaEdit.setValidator(validator_NewPa)
        self.ui.NewPaAgainEdit.setValidator(validator_NewPaAgain)

        self.ui.OriPaEdit.setEchoMode(QLineEdit.Password)
        self.ui.NewPaEdit.setEchoMode(QLineEdit.Password)
        self.ui.NewPaAgainEdit.setEchoMode(QLineEdit.Password)
    
    def setInfo(self, username, person_id, url):
        self.username = username
        self.person_id = person_id
        self.url = url
        self.ui.IDEdit.setText(username)

    @pyqtSlot(bool)
    def on_OKButton_clicked(self):
        #step1 两次输入的密码是否一致
        data = {
            'username':self.username,
            'password':self.ui.OriPaEdit.text(),
            'new_password':self.ui.NewPaEdit.text()
        }
        #验证两次新密码输入是否一致
        if self.ui.NewPaEdit.text() == self.ui.NewPaAgainEdit.text(): #输入一致
            setPa_request = requests.post(self.url + '/user/setpassword/', data = data)
            if setPa_request.text == '"Successful"':#修改成功
                QMessageBox.information(self, "成功", "您的密码已经成功修改")
                self.accept()
            else:#原始密码错误
                QMessageBox.information(self, "错误", "原密码有误")
                self.ui.OriPaEdit.clear()
                self.ui.NewPaEdit.clear()
                self.ui.NewPaAgainEdit.clear()
        else: #两次输入的新密码不一致
            QMessageBox.information(self, "错误", "两次输入的新密码不一致")
            self.ui.NewPaEdit.clear()
            self.ui.NewPaAgainEdit.clear()

