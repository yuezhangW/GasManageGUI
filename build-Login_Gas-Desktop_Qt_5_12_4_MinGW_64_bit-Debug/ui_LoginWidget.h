/********************************************************************************
** Form generated from reading UI file 'LoginWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QPushButton *Button_left;
    QPushButton *Button_right;
    QLineEdit *ID_Edit;
    QLineEdit *Password_Edit;
    QLineEdit *PAagin_Edit;
    QLineEdit *Mobile_Edit;
    QLabel *ID_label;
    QLabel *Password_label;
    QLabel *Mobile_label;
    QLabel *PAagin_label_CN;
    QLabel *PAagin_label_EN;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        LoginWidget->resize(750, 500);
        LoginWidget->setMinimumSize(QSize(750, 500));
        LoginWidget->setMaximumSize(QSize(750, 500));
        Button_left = new QPushButton(LoginWidget);
        Button_left->setObjectName(QString::fromUtf8("Button_left"));
        Button_left->setGeometry(QRect(250, 320, 121, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        Button_left->setFont(font);
        Button_left->setAutoFillBackground(false);
        Button_right = new QPushButton(LoginWidget);
        Button_right->setObjectName(QString::fromUtf8("Button_right"));
        Button_right->setGeometry(QRect(380, 320, 121, 41));
        Button_right->setFont(font);
        Button_right->setAutoFillBackground(false);
        ID_Edit = new QLineEdit(LoginWidget);
        ID_Edit->setObjectName(QString::fromUtf8("ID_Edit"));
        ID_Edit->setGeometry(QRect(330, 160, 231, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        ID_Edit->setFont(font1);
        ID_Edit->setMaxLength(20);
        Password_Edit = new QLineEdit(LoginWidget);
        Password_Edit->setObjectName(QString::fromUtf8("Password_Edit"));
        Password_Edit->setGeometry(QRect(330, 200, 231, 31));
        Password_Edit->setFont(font1);
        Password_Edit->setMaxLength(20);
        Password_Edit->setCursorPosition(0);
        Password_Edit->setDragEnabled(false);
        PAagin_Edit = new QLineEdit(LoginWidget);
        PAagin_Edit->setObjectName(QString::fromUtf8("PAagin_Edit"));
        PAagin_Edit->setGeometry(QRect(330, 240, 231, 31));
        PAagin_Edit->setFont(font1);
        PAagin_Edit->setMaxLength(20);
        Mobile_Edit = new QLineEdit(LoginWidget);
        Mobile_Edit->setObjectName(QString::fromUtf8("Mobile_Edit"));
        Mobile_Edit->setGeometry(QRect(330, 280, 231, 31));
        Mobile_Edit->setFont(font1);
        Mobile_Edit->setMaxLength(12);
        ID_label = new QLabel(LoginWidget);
        ID_label->setObjectName(QString::fromUtf8("ID_label"));
        ID_label->setGeometry(QRect(200, 160, 101, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(12);
        ID_label->setFont(font2);
        Password_label = new QLabel(LoginWidget);
        Password_label->setObjectName(QString::fromUtf8("Password_label"));
        Password_label->setGeometry(QRect(200, 200, 111, 31));
        Password_label->setFont(font2);
        Mobile_label = new QLabel(LoginWidget);
        Mobile_label->setObjectName(QString::fromUtf8("Mobile_label"));
        Mobile_label->setGeometry(QRect(200, 280, 111, 31));
        Mobile_label->setFont(font2);
        PAagin_label_CN = new QLabel(LoginWidget);
        PAagin_label_CN->setObjectName(QString::fromUtf8("PAagin_label_CN"));
        PAagin_label_CN->setGeometry(QRect(200, 240, 101, 16));
        PAagin_label_CN->setFont(font2);
        PAagin_label_EN = new QLabel(LoginWidget);
        PAagin_label_EN->setObjectName(QString::fromUtf8("PAagin_label_EN"));
        PAagin_label_EN->setGeometry(QRect(190, 260, 131, 16));
        PAagin_label_EN->setFont(font2);

        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        Button_left->setText(QApplication::translate("LoginWidget", "\347\231\273 \345\275\225", nullptr));
        Button_right->setText(QApplication::translate("LoginWidget", "\346\263\250 \345\206\214", nullptr));
        ID_Edit->setText(QString());
        ID_Edit->setPlaceholderText(QApplication::translate("LoginWidget", "6~20\344\275\215", nullptr));
        Password_Edit->setText(QString());
        Password_Edit->setPlaceholderText(QApplication::translate("LoginWidget", "6~20\344\275\215", nullptr));
        PAagin_Edit->setText(QString());
        PAagin_Edit->setPlaceholderText(QApplication::translate("LoginWidget", "6~20\344\275\215", nullptr));
        Mobile_Edit->setText(QString());
        ID_label->setText(QApplication::translate("LoginWidget", "\350\264\246\345\217\267(ID)", nullptr));
        Password_label->setText(QApplication::translate("LoginWidget", "\345\257\206\347\240\201(Password)", nullptr));
        Mobile_label->setText(QApplication::translate("LoginWidget", "\347\224\265\350\257\235(Mobile)", nullptr));
        PAagin_label_CN->setText(QApplication::translate("LoginWidget", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        PAagin_label_EN->setText(QApplication::translate("LoginWidget", "(Password Again)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
