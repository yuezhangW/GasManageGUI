/********************************************************************************
** Form generated from reading UI file 'Index_basicCh.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_BASICCH_H
#define UI_INDEX_BASICCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Index_basicCh
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QLineEdit *ageEdit;
    QLabel *label_3;
    QLineEdit *weightEdit;
    QLabel *label_4;
    QLineEdit *heightEdit;
    QLabel *label_6;
    QLineEdit *IDEdit;
    QRadioButton *maleRadio;
    QRadioButton *femaleRadio;
    QPushButton *OKButton;

    void setupUi(QDialog *Index_basicCh)
    {
        if (Index_basicCh->objectName().isEmpty())
            Index_basicCh->setObjectName(QString::fromUtf8("Index_basicCh"));
        Index_basicCh->resize(696, 513);
        gridLayout = new QGridLayout(Index_basicCh);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(40, -1, 40, -1);
        label = new QLabel(Index_basicCh);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameEdit = new QLineEdit(Index_basicCh);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        nameEdit->setFont(font);
        nameEdit->setMaxLength(5);
        nameEdit->setReadOnly(false);

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(Index_basicCh);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        ageEdit = new QLineEdit(Index_basicCh);
        ageEdit->setObjectName(QString::fromUtf8("ageEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(20);
        ageEdit->setFont(font1);
        ageEdit->setMaxLength(3);
        ageEdit->setReadOnly(false);

        gridLayout->addWidget(ageEdit, 1, 1, 1, 1);

        label_3 = new QLabel(Index_basicCh);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        weightEdit = new QLineEdit(Index_basicCh);
        weightEdit->setObjectName(QString::fromUtf8("weightEdit"));
        weightEdit->setFont(font1);
        weightEdit->setMaxLength(3);
        weightEdit->setReadOnly(false);

        gridLayout->addWidget(weightEdit, 2, 1, 1, 1);

        label_4 = new QLabel(Index_basicCh);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        heightEdit = new QLineEdit(Index_basicCh);
        heightEdit->setObjectName(QString::fromUtf8("heightEdit"));
        heightEdit->setFont(font1);
        heightEdit->setMaxLength(3);
        heightEdit->setReadOnly(false);

        gridLayout->addWidget(heightEdit, 3, 1, 1, 1);

        label_6 = new QLabel(Index_basicCh);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        IDEdit = new QLineEdit(Index_basicCh);
        IDEdit->setObjectName(QString::fromUtf8("IDEdit"));
        IDEdit->setFont(font1);
        IDEdit->setReadOnly(true);

        gridLayout->addWidget(IDEdit, 4, 1, 1, 1);

        maleRadio = new QRadioButton(Index_basicCh);
        maleRadio->setObjectName(QString::fromUtf8("maleRadio"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(16);
        maleRadio->setFont(font2);
        maleRadio->setChecked(true);

        gridLayout->addWidget(maleRadio, 5, 0, 1, 1);

        femaleRadio = new QRadioButton(Index_basicCh);
        femaleRadio->setObjectName(QString::fromUtf8("femaleRadio"));
        femaleRadio->setFont(font2);
        femaleRadio->setChecked(false);

        gridLayout->addWidget(femaleRadio, 5, 1, 1, 1);

        OKButton = new QPushButton(Index_basicCh);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(26);
        OKButton->setFont(font3);
        OKButton->setAutoDefault(false);

        gridLayout->addWidget(OKButton, 6, 1, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 4);
        gridLayout->setColumnMinimumWidth(0, 4);
        gridLayout->setColumnMinimumWidth(1, 3);

        retranslateUi(Index_basicCh);

        QMetaObject::connectSlotsByName(Index_basicCh);
    } // setupUi

    void retranslateUi(QDialog *Index_basicCh)
    {
        Index_basicCh->setWindowTitle(QApplication::translate("Index_basicCh", "Dialog", nullptr));
        label->setText(QApplication::translate("Index_basicCh", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        nameEdit->setText(QString());
        label_2->setText(QApplication::translate("Index_basicCh", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\271\264\351\276\204</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Index_basicCh", "<html><head/><body><p><span style=\" font-size:20pt;\">\344\275\223\351\207\215</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Index_basicCh", "<html><head/><body><p><span style=\" font-size:20pt;\">\350\272\253\351\253\230</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Index_basicCh", "\350\264\246\345\217\267\345\220\215", nullptr));
        maleRadio->setText(QApplication::translate("Index_basicCh", "\347\224\267(male)", nullptr));
        femaleRadio->setText(QApplication::translate("Index_basicCh", "\345\245\263(female)", nullptr));
        OKButton->setText(QApplication::translate("Index_basicCh", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index_basicCh: public Ui_Index_basicCh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_BASICCH_H
