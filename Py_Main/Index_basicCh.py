from PyQt5.QtWidgets import QDialog, QMessageBox
from PyQt5.QtCore import  QRegExp, pyqtSlot, QRect, Qt
from ui_Index_basicCh import Ui_Index_basicCh
from PyQt5.QtGui import QRegExpValidator
import requests

class QIndex_basicCh(QDialog):
    person_id = ''
    url = ''
    def __init__(self, parent = None):
        super().__init__(parent)
        self.ui = Ui_Index_basicCh()
        self.ui.setupUi(self)

        #为给定的模式字符串构造一个正则表达式对象,用来给账号和密码输入进行限制
        regx = QRegExp("[0-9]{10}$")
        #构造验证器，该父对象接受与正则表达式匹配的所有字符串。
        validator_age = QRegExpValidator(regx, self.ui.ageEdit)
        validator_weight = QRegExpValidator(regx, self.ui.weightEdit)
        validator_height = QRegExpValidator(regx, self.ui.heightEdit)
        #给输入组件加上验证器，同时让密码输入编程原点输入
        self.ui.ageEdit.setValidator(validator_age)
        self.ui.weightEdit.setValidator(validator_weight)
        self.ui.heightEdit.setValidator(validator_height)


    
    def setInfo(self, name, age, gender, weight, height, username, person_id, url):
        self.ui.nameEdit.setText(name)
        self.ui.ageEdit.setText(age)
        self.ui.weightEdit.setText(weight)
        self.ui.heightEdit.setText(height)
        self.ui.IDEdit.setText(username)
        self.ui.maleRadio.setChecked(True) if gender == 'male' else self.ui.femaleRadio.setChecked(True)
        self.person_id = person_id
        self.url = url
    
    @pyqtSlot(bool)
    def on_OKButton_clicked(self):
        #点击确认后需要获取所有输入数据
        name = self.ui.nameEdit.text()
        age = self.ui.ageEdit.text()
        weight = self.ui.weightEdit.text()
        height = self.ui.heightEdit.text()
        gender = 'male' if self.ui.maleRadio.isChecked else 'female'
        username = self.ui.IDEdit.text()

        if (bool(name) + bool(age) + bool(weight) + bool(height) + bool(gender)) == 5:
            #如果所有输入全部有值
            data = {
                'person_name':name,
                'person_age':age,
                'person_gender':gender,
                'person_weight':weight,
                'person_height':height,
                'username_user':username
            }
            update_person = requests.post(self.url + '/person/chPersonInfo/' + str(self.person_id), data = data)
            QMessageBox.information(self, "成功！", "基本资料已修改")
            self.accept()
        else:
            #若有缺省值，则弹出提示窗
            QMessageBox.information(self, "存在缺省值", "请填写所有内容")
