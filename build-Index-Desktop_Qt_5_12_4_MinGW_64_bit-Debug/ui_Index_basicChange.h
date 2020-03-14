/********************************************************************************
** Form generated from reading UI file 'Index_basicChange.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_BASICCHANGE_H
#define UI_INDEX_BASICCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Index_basicChange
{
public:
    QGridLayout *gridLayout;
    QLineEdit *heightEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *weightEdit;
    QLabel *label_6;
    QLineEdit *nameEdit;
    QLineEdit *IDEdit;
    QPushButton *OKButton;
    QLineEdit *ageEdit;
    QLabel *label_4;
    QLabel *label;
    QRadioButton *maleRadio;
    QRadioButton *femaleRadio;

    void setupUi(QWidget *Index_basicChange)
    {
        if (Index_basicChange->objectName().isEmpty())
            Index_basicChange->setObjectName(QString::fromUtf8("Index_basicChange"));
        Index_basicChange->resize(678, 504);
        gridLayout = new QGridLayout(Index_basicChange);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(40, -1, 40, -1);
        heightEdit = new QLineEdit(Index_basicChange);
        heightEdit->setObjectName(QString::fromUtf8("heightEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(20);
        heightEdit->setFont(font);
        heightEdit->setMaxLength(3);
        heightEdit->setReadOnly(false);

        gridLayout->addWidget(heightEdit, 3, 1, 1, 1);

        label_2 = new QLabel(Index_basicChange);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(Index_basicChange);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        weightEdit = new QLineEdit(Index_basicChange);
        weightEdit->setObjectName(QString::fromUtf8("weightEdit"));
        weightEdit->setFont(font);
        weightEdit->setMaxLength(3);
        weightEdit->setReadOnly(false);

        gridLayout->addWidget(weightEdit, 2, 1, 1, 1);

        label_6 = new QLabel(Index_basicChange);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(20);
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        nameEdit = new QLineEdit(Index_basicChange);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setFont(font1);
        nameEdit->setMaxLength(5);
        nameEdit->setReadOnly(false);

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        IDEdit = new QLineEdit(Index_basicChange);
        IDEdit->setObjectName(QString::fromUtf8("IDEdit"));
        IDEdit->setFont(font);
        IDEdit->setReadOnly(true);

        gridLayout->addWidget(IDEdit, 4, 1, 1, 1);

        OKButton = new QPushButton(Index_basicChange);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(26);
        OKButton->setFont(font2);
        OKButton->setAutoDefault(false);

        gridLayout->addWidget(OKButton, 6, 1, 1, 1);

        ageEdit = new QLineEdit(Index_basicChange);
        ageEdit->setObjectName(QString::fromUtf8("ageEdit"));
        ageEdit->setFont(font);
        ageEdit->setMaxLength(3);
        ageEdit->setReadOnly(false);

        gridLayout->addWidget(ageEdit, 1, 1, 1, 1);

        label_4 = new QLabel(Index_basicChange);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(Index_basicChange);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        maleRadio = new QRadioButton(Index_basicChange);
        maleRadio->setObjectName(QString::fromUtf8("maleRadio"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(16);
        maleRadio->setFont(font3);
        maleRadio->setChecked(true);

        gridLayout->addWidget(maleRadio, 5, 0, 1, 1);

        femaleRadio = new QRadioButton(Index_basicChange);
        femaleRadio->setObjectName(QString::fromUtf8("femaleRadio"));
        femaleRadio->setFont(font3);
        femaleRadio->setChecked(false);

        gridLayout->addWidget(femaleRadio, 5, 1, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 4);
        gridLayout->setColumnMinimumWidth(0, 4);
        gridLayout->setColumnMinimumWidth(1, 3);

        retranslateUi(Index_basicChange);

        QMetaObject::connectSlotsByName(Index_basicChange);
    } // setupUi

    void retranslateUi(QWidget *Index_basicChange)
    {
        Index_basicChange->setWindowTitle(QApplication::translate("Index_basicChange", "Form", nullptr));
        label_2->setText(QApplication::translate("Index_basicChange", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\271\264\351\276\204</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Index_basicChange", "<html><head/><body><p><span style=\" font-size:20pt;\">\344\275\223\351\207\215</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Index_basicChange", "\350\264\246\345\217\267\345\220\215", nullptr));
        nameEdit->setText(QString());
        OKButton->setText(QApplication::translate("Index_basicChange", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_4->setText(QApplication::translate("Index_basicChange", "<html><head/><body><p><span style=\" font-size:20pt;\">\350\272\253\351\253\230</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Index_basicChange", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        maleRadio->setText(QApplication::translate("Index_basicChange", "\347\224\267(male)", nullptr));
        femaleRadio->setText(QApplication::translate("Index_basicChange", "\345\245\263(female)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index_basicChange: public Ui_Index_basicChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_BASICCHANGE_H
