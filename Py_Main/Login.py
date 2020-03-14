import sys
from PyQt5.QtWidgets import QApplication, QWidget, QLineEdit, QGraphicsOpacityEffect
from ui_LoginWidget import Ui_LoginWidget
from Index import QIndex
from PyQt5.QtCore import QRegExp, pyqtSlot, QRect, Qt
from PyQt5.QtGui import QRegExpValidator, QPainter, QPixmap
import requests

class QLogin(QWidget):
    isLogin = True
    windowList = []
    #urlDatabase = 'http://127.0.0.1:8000'
    urlDatabase = 'http://122.51.56.65'

    data = {
        'username': '', 'password': ''
    }
    def __init__(self, parent = None):
        super().__init__(parent)
        self.ui = Ui_LoginWidget()
        self.ui.setupUi(self)

        #为给定的模式字符串构造一个正则表达式对象,用来给账号和密码输入进行限制
        regx1 = QRegExp("[0-9A-Za-z]{20}$")
        regx2 = QRegExp("[0-9]{12}$")
        #构造验证器，该父对象接受与正则表达式匹配的所有字符串。
        validator_ID = QRegExpValidator(regx1, self.ui.ID_Edit)
        validator_Pa = QRegExpValidator(regx1, self.ui.Password_Edit)
        validator_PaAgain = QRegExpValidator(regx1, self.ui.PAagin_Edit)
        validator_Mobile = QRegExpValidator(regx2, self.ui.Mobile_Edit)
        #给输入组件加上验证器，同时让密码输入编程原点输入
        self.ui.ID_Edit.setValidator(validator_ID)
        self.ui.Password_Edit.setValidator(validator_Pa)
        self.ui.PAagin_Edit.setValidator(validator_PaAgain)
        self.ui.Mobile_Edit.setValidator(validator_Mobile)
        self.ui.Password_Edit.setEchoMode(QLineEdit.Password)
        self.ui.PAagin_Edit.setEchoMode(QLineEdit.Password)

        #登录界面时，需要对部分组件进行隐藏
        self.ui.PAagin_Edit.setVisible(False)
        self.ui.PAagin_label_CN.setVisible(False)
        self.ui.PAagin_label_EN.setVisible(False)
        self.ui.Mobile_Edit.setVisible(False)
        self.ui.Mobile_label.setVisible(False)
        self.ui.Notice_label.setVisible(False)

        self.__pic = QPixmap("Login_back.jpg") #载入背景图片到内存，提高绘制速度
        op = QGraphicsOpacityEffect()
        op.setOpacity(0.4)
        self.ui.ID_Edit.setGraphicsEffect(op)
        op = QGraphicsOpacityEffect()
        op.setOpacity(0.4)
        self.ui.PAagin_Edit.setGraphicsEffect(op)
        op = QGraphicsOpacityEffect()
        op.setOpacity(0.4)
        self.ui.Mobile_Edit.setGraphicsEffect(op)
        op = QGraphicsOpacityEffect()
        op.setOpacity(0.4)
        self.ui.Password_Edit.setGraphicsEffect(op)
        op = QGraphicsOpacityEffect()
        op.setOpacity(0.8)
        self.ui.Button_left.setGraphicsEffect(op)
        op = QGraphicsOpacityEffect()
        op.setOpacity(0.8)
        self.ui.Button_right.setGraphicsEffect(op)
    
    def paintEvent(self, event):
        paint = QPainter(self)
        paint.drawPixmap(0, 0, self.width(), self.height(), self.__pic) #这个地方四个参数分别是x, y, width, height
        super().paintEvent(event)

    @pyqtSlot(bool)
    def on_Button_left_clicked(self): #左侧按钮回调函数
        if self.isLogin:
            #获取输入框数据
            username = self.ui.ID_Edit.text()
            password = self.ui.Password_Edit.text()
            self.data['username'] = username
            self.data['password'] = password
            #向云端发送登录请求
            r_login = requests.post(self.urlDatabase + '/user/login/', data = self.data)
            if r_login.text == '"Successful"':
                #成功登录，打开主页面
                indexMainWindow = QIndex()
                indexMainWindow.setInit(self.urlDatabase, username)
                self.windowList.append(indexMainWindow)
                self.close()
                indexMainWindow.show()
            elif r_login.text == '"WrongUsername"':
                #未找到该用户，做出提示
                self.ui.Notice_label.setText('此用户名不存在')
                self.ui.Notice_label.setStyleSheet("color:red;")
                self.ui.Notice_label.setAlignment(Qt.AlignHCenter)
                self.ui.Notice_label.setVisible(True)
            elif r_login.text == '"WrongPassword"':
                #用户存在，密码错误
                self.ui.Notice_label.setText('密码错误')
                self.ui.Notice_label.setStyleSheet("color:red;")
                self.ui.Notice_label.setAlignment(Qt.AlignHCenter)
                self.ui.Notice_label.setVisible(True)       
        else:
            #获取输入框数据
            username = self.ui.ID_Edit.text()
            password = self.ui.Password_Edit.text()
            self.data['username'] = username
            self.data['password'] = password
            if self.ui.Password_Edit.text() == self.ui.PAagin_Edit.text():
                #确认两次输入的密码是否一致
                #向云端发送注册请求
                r_login = requests.post(self.urlDatabase + '/user/register/', data = self.data)
                if r_login.text == '"Successful"':
                    #注册成功，打开主页面
                    indexMainWindow = QIndex()
                    indexMainWindow.setInit(self.urlDatabase, username)
                    self.windowList.append(indexMainWindow)
                    self.close()
                    indexMainWindow.show()
                elif r_login.text == '"WrongUsername"':
                    #用户名已经存在了，错误提示
                    self.ui.Notice_label.setText('此用户名已被注册')
                    self.ui.Notice_label.setStyleSheet("color:red;")
                    self.ui.Notice_label.setAlignment(Qt.AlignHCenter)
                    self.ui.Notice_label.setVisible(True)
            else:
                self.ui.Notice_label.setText('两次输入密码不一致')
                self.ui.Notice_label.setStyleSheet("color:red;")
                self.ui.Notice_label.setAlignment(Qt.AlignHCenter)
                self.ui.Notice_label.setVisible(True) 
                self.ui.Password_Edit.clear()
                self.ui.PAagin_Edit.clear()
 
    @pyqtSlot(bool)
    def on_Button_right_clicked(self): #右侧按钮回调函数
        if self.isLogin: #转变为注册界面
            #显示隐藏组件
            self.ui.PAagin_Edit.setVisible(True)
            self.ui.PAagin_label_CN.setVisible(True)
            self.ui.PAagin_label_EN.setVisible(True)
            self.ui.Mobile_Edit.setVisible(True)
            self.ui.Mobile_label.setVisible(True)
            self.ui.Notice_label.setVisible(False)
            #按钮更名
            self.ui.Button_left.setText('完成注册')
            self.ui.Button_right.setText('取 消')
            #清空输入框
            self.ui.ID_Edit.clear()
            self.ui.Password_Edit.clear()
            self.ui.PAagin_Edit.clear()
            self.ui.Mobile_Edit.clear()  

            self.isLogin = False 
        else:
            #隐藏组件
            self.ui.PAagin_Edit.setVisible(False)
            self.ui.PAagin_label_CN.setVisible(False)
            self.ui.PAagin_label_EN.setVisible(False)
            self.ui.Mobile_Edit.setVisible(False)
            self.ui.Mobile_label.setVisible(False)
            self.ui.Notice_label.setVisible(False)
            #按钮更名
            self.ui.Button_left.setText('登 录')
            self.ui.Button_right.setText('注 册')
            #清空输入框
            self.ui.ID_Edit.clear()
            self.ui.Password_Edit.clear()
            self.ui.PAagin_Edit.clear()
            self.ui.Mobile_Edit.clear()

            self.isLogin = True





if __name__ == "__main__":
    app = QApplication(sys.argv)
    form = QLogin()
    form.show()
    sys.exit(app.exec_())