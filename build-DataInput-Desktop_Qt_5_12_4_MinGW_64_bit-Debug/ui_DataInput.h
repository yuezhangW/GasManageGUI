/********************************************************************************
** Form generated from reading UI file 'DataInput.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAINPUT_H
#define UI_DATAINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_DataInput
{
public:
    QLabel *message_label;
    QLineEdit *name_Edit;
    QLabel *name_label;
    QLabel *age_label;
    QLineEdit *age_Edit;
    QLabel *wight_label;
    QLineEdit *weight_Edit;
    QLabel *height_label;
    QLineEdit *height_Edit;
    QRadioButton *male_radioButton;
    QLabel *gender_label;
    QRadioButton *female_radioButton;
    QDialogButtonBox *buttonBox;
    QLabel *kg_label;
    QLabel *cm_label;

    void setupUi(QDialog *DataInput)
    {
        if (DataInput->objectName().isEmpty())
            DataInput->setObjectName(QString::fromUtf8("DataInput"));
        DataInput->resize(400, 300);
        DataInput->setMinimumSize(QSize(400, 300));
        DataInput->setMaximumSize(QSize(400, 300));
        message_label = new QLabel(DataInput);
        message_label->setObjectName(QString::fromUtf8("message_label"));
        message_label->setGeometry(QRect(10, 10, 251, 31));
        name_Edit = new QLineEdit(DataInput);
        name_Edit->setObjectName(QString::fromUtf8("name_Edit"));
        name_Edit->setGeometry(QRect(180, 50, 181, 31));
        name_Edit->setMaxLength(5);
        name_label = new QLabel(DataInput);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(30, 50, 121, 31));
        age_label = new QLabel(DataInput);
        age_label->setObjectName(QString::fromUtf8("age_label"));
        age_label->setGeometry(QRect(30, 90, 121, 31));
        age_Edit = new QLineEdit(DataInput);
        age_Edit->setObjectName(QString::fromUtf8("age_Edit"));
        age_Edit->setGeometry(QRect(180, 90, 181, 31));
        age_Edit->setMaxLength(3);
        wight_label = new QLabel(DataInput);
        wight_label->setObjectName(QString::fromUtf8("wight_label"));
        wight_label->setGeometry(QRect(30, 130, 141, 31));
        weight_Edit = new QLineEdit(DataInput);
        weight_Edit->setObjectName(QString::fromUtf8("weight_Edit"));
        weight_Edit->setGeometry(QRect(180, 130, 71, 31));
        weight_Edit->setMaxLength(3);
        height_label = new QLabel(DataInput);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        height_label->setGeometry(QRect(30, 170, 141, 31));
        height_Edit = new QLineEdit(DataInput);
        height_Edit->setObjectName(QString::fromUtf8("height_Edit"));
        height_Edit->setGeometry(QRect(180, 170, 71, 31));
        height_Edit->setMaxLength(3);
        male_radioButton = new QRadioButton(DataInput);
        male_radioButton->setObjectName(QString::fromUtf8("male_radioButton"));
        male_radioButton->setGeometry(QRect(180, 210, 81, 31));
        male_radioButton->setChecked(true);
        gender_label = new QLabel(DataInput);
        gender_label->setObjectName(QString::fromUtf8("gender_label"));
        gender_label->setGeometry(QRect(30, 210, 141, 31));
        female_radioButton = new QRadioButton(DataInput);
        female_radioButton->setObjectName(QString::fromUtf8("female_radioButton"));
        female_radioButton->setGeometry(QRect(280, 210, 81, 31));
        buttonBox = new QDialogButtonBox(DataInput);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 250, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        kg_label = new QLabel(DataInput);
        kg_label->setObjectName(QString::fromUtf8("kg_label"));
        kg_label->setGeometry(QRect(260, 130, 31, 31));
        cm_label = new QLabel(DataInput);
        cm_label->setObjectName(QString::fromUtf8("cm_label"));
        cm_label->setGeometry(QRect(260, 170, 31, 31));

        retranslateUi(DataInput);

        QMetaObject::connectSlotsByName(DataInput);
    } // setupUi

    void retranslateUi(QDialog *DataInput)
    {
        DataInput->setWindowTitle(QApplication::translate("DataInput", "\345\237\272\347\241\200\346\225\260\346\215\256\345\275\225\345\205\245", nullptr));
        message_label->setText(QApplication::translate("DataInput", "<html><head/><body><p>\346\202\250\351\234\200\350\246\201\345\256\214\345\226\204\344\270\252\344\272\272\344\277\241\346\201\257\345\220\216\346\211\215\345\217\257\344\273\245\347\273\247\347\273\255\344\275\277\347\224\250\346\234\254\350\275\257\344\273\266\357\274\201</p></body></html>", nullptr));
        name_Edit->setText(QString());
        name_label->setText(QApplication::translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">\345\247\223\345\220\215(Name)</span></p></body></html>", nullptr));
        age_label->setText(QApplication::translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">\345\271\264\351\276\204(Age)</span></p></body></html>", nullptr));
        wight_label->setText(QApplication::translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">\344\275\223\351\207\215(Weight)</span></p></body></html>", nullptr));
        weight_Edit->setPlaceholderText(QApplication::translate("DataInput", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        height_label->setText(QApplication::translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">\350\272\253\351\253\230(Height)</span></p></body></html>", nullptr));
        height_Edit->setPlaceholderText(QApplication::translate("DataInput", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        male_radioButton->setText(QApplication::translate("DataInput", "\347\224\267(male)", nullptr));
        gender_label->setText(QApplication::translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt;\">\346\200\247\345\210\253(Gender)</span></p></body></html>", nullptr));
        female_radioButton->setText(QApplication::translate("DataInput", "\345\245\263(female)", nullptr));
        kg_label->setText(QApplication::translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Kg</span></p></body></html>", nullptr));
        cm_label->setText(QApplication::translate("DataInput", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">CM</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataInput: public Ui_DataInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAINPUT_H
