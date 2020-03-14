from PyQt5.QtWidgets import QWidget
from PyQt5.QtCore import pyqtSlot
from ui_Index_basicInfo import Ui_Index_basicInfo

class QIndex_basicInfo(QWidget):
    def __init__(self, parent = None):
        super().__init__(parent)
        self.ui = Ui_Index_basicInfo()
        self.ui.setupUi(self)
    
    def setInfo(self, name, age, gender, weight, height, username):
        self.ui.nameEdit.setText(name)
        self.ui.ageEdit.setText(age)
        self.ui.weightEdit.setText(weight + 'Kg')
        self.ui.heightEdit.setText(height + 'CM')
        self.ui.IDEdit.setText(username)
        self.ui.genderEdit.setText('男' if gender == 'male' else '女')