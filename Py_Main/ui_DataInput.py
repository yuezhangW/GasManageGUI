# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'DataInput.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_DataInput(object):
    def setupUi(self, DataInput):
        DataInput.setObjectName("DataInput")
        DataInput.resize(400, 300)
        DataInput.setMinimumSize(QtCore.QSize(400, 300))
        DataInput.setMaximumSize(QtCore.QSize(400, 300))
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/icons/icons/food/145.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        DataInput.setWindowIcon(icon)
        self.message_label = QtWidgets.QLabel(DataInput)
        self.message_label.setGeometry(QtCore.QRect(10, 10, 251, 31))
        self.message_label.setObjectName("message_label")
        self.name_Edit = QtWidgets.QLineEdit(DataInput)
        self.name_Edit.setGeometry(QtCore.QRect(180, 50, 181, 31))
        self.name_Edit.setText("")
        self.name_Edit.setMaxLength(5)
        self.name_Edit.setObjectName("name_Edit")
        self.name_label = QtWidgets.QLabel(DataInput)
        self.name_label.setGeometry(QtCore.QRect(30, 50, 121, 31))
        self.name_label.setObjectName("name_label")
        self.age_label = QtWidgets.QLabel(DataInput)
        self.age_label.setGeometry(QtCore.QRect(30, 90, 121, 31))
        self.age_label.setObjectName("age_label")
        self.age_Edit = QtWidgets.QLineEdit(DataInput)
        self.age_Edit.setGeometry(QtCore.QRect(180, 90, 181, 31))
        self.age_Edit.setMaxLength(3)
        self.age_Edit.setObjectName("age_Edit")
        self.wight_label = QtWidgets.QLabel(DataInput)
        self.wight_label.setGeometry(QtCore.QRect(30, 130, 141, 31))
        self.wight_label.setObjectName("wight_label")
        self.weight_Edit = QtWidgets.QLineEdit(DataInput)
        self.weight_Edit.setGeometry(QtCore.QRect(180, 130, 71, 31))
        self.weight_Edit.setMaxLength(3)
        self.weight_Edit.setObjectName("weight_Edit")
        self.height_label = QtWidgets.QLabel(DataInput)
        self.height_label.setGeometry(QtCore.QRect(30, 170, 141, 31))
        self.height_label.setObjectName("height_label")
        self.height_Edit = QtWidgets.QLineEdit(DataInput)
        self.height_Edit.setGeometry(QtCore.QRect(180, 170, 71, 31))
        self.height_Edit.setMaxLength(3)
        self.height_Edit.setObjectName("height_Edit")
        self.male_radioButton = QtWidgets.QRadioButton(DataInput)
        self.male_radioButton.setGeometry(QtCore.QRect(180, 210, 81, 31))
        self.male_radioButton.setChecked(True)
        self.male_radioButton.setObjectName("male_radioButton")
        self.gender_label = QtWidgets.QLabel(DataInput)
        self.gender_label.setGeometry(QtCore.QRect(30, 210, 141, 31))
        self.gender_label.setObjectName("gender_label")
        self.female_radioButton = QtWidgets.QRadioButton(DataInput)
        self.female_radioButton.setGeometry(QtCore.QRect(280, 210, 81, 31))
        self.female_radioButton.setObjectName("female_radioButton")
        self.buttonBox = QtWidgets.QDialogButtonBox(DataInput)
        self.buttonBox.setGeometry(QtCore.QRect(210, 250, 156, 23))
        self.buttonBox.setStandardButtons(QtWidgets.QDialogButtonBox.Cancel|QtWidgets.QDialogButtonBox.Ok)
        self.buttonBox.setObjectName("buttonBox")
        self.kg_label = QtWidgets.QLabel(DataInput)
        self.kg_label.setGeometry(QtCore.QRect(260, 130, 31, 31))
        self.kg_label.setObjectName("kg_label")
        self.cm_label = QtWidgets.QLabel(DataInput)
        self.cm_label.setGeometry(QtCore.QRect(260, 170, 31, 31))
        self.cm_label.setObjectName("cm_label")

        self.retranslateUi(DataInput)
        QtCore.QMetaObject.connectSlotsByName(DataInput)

    def retranslateUi(self, DataInput):
        _translate = QtCore.QCoreApplication.translate
        DataInput.setWindowTitle(_translate("DataInput", "基础数据录入"))
        self.message_label.setText(_translate("DataInput", "<html><head/><body><p>您需要完善个人信息后才可以继续使用本软件！</p></body></html>"))
        self.name_label.setText(_translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">姓名(Name)</span></p></body></html>"))
        self.age_label.setText(_translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">年龄(Age)</span></p></body></html>"))
        self.wight_label.setText(_translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">体重(Weight)</span></p></body></html>"))
        self.weight_Edit.setPlaceholderText(_translate("DataInput", "输入整数"))
        self.height_label.setText(_translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">身高(Height)</span></p></body></html>"))
        self.height_Edit.setPlaceholderText(_translate("DataInput", "输入整数"))
        self.male_radioButton.setText(_translate("DataInput", "男(male)"))
        self.gender_label.setText(_translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">性别(Gender)</span></p></body></html>"))
        self.female_radioButton.setText(_translate("DataInput", "女(female)"))
        self.kg_label.setText(_translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Kg</span></p></body></html>"))
        self.cm_label.setText(_translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">CM</span></p></body></html>"))
import res_DataInput_rc
