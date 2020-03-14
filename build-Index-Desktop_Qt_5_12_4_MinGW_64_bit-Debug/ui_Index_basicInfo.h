/********************************************************************************
** Form generated from reading UI file 'Index_basicInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_BASICINFO_H
#define UI_INDEX_BASICINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Index_basicInfo
{
public:
    QGridLayout *gridLayout;
    QLineEdit *nameEdit;
    QLineEdit *heightEdit;
    QLabel *label_2;
    QLineEdit *weightEdit;
    QLabel *label_5;
    QLineEdit *genderEdit;
    QLineEdit *ageEdit;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *IDEdit;
    QLabel *label_6;

    void setupUi(QWidget *Index_basicInfo)
    {
        if (Index_basicInfo->objectName().isEmpty())
            Index_basicInfo->setObjectName(QString::fromUtf8("Index_basicInfo"));
        Index_basicInfo->resize(642, 400);
        gridLayout = new QGridLayout(Index_basicInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(40, -1, 40, -1);
        nameEdit = new QLineEdit(Index_basicInfo);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        nameEdit->setFont(font);
        nameEdit->setReadOnly(true);

        gridLayout->addWidget(nameEdit, 0, 2, 1, 1);

        heightEdit = new QLineEdit(Index_basicInfo);
        heightEdit->setObjectName(QString::fromUtf8("heightEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(20);
        heightEdit->setFont(font1);
        heightEdit->setReadOnly(true);

        gridLayout->addWidget(heightEdit, 3, 2, 1, 1);

        label_2 = new QLabel(Index_basicInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        weightEdit = new QLineEdit(Index_basicInfo);
        weightEdit->setObjectName(QString::fromUtf8("weightEdit"));
        weightEdit->setFont(font1);
        weightEdit->setReadOnly(true);

        gridLayout->addWidget(weightEdit, 2, 2, 1, 1);

        label_5 = new QLabel(Index_basicInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        genderEdit = new QLineEdit(Index_basicInfo);
        genderEdit->setObjectName(QString::fromUtf8("genderEdit"));
        genderEdit->setFont(font);
        genderEdit->setReadOnly(true);

        gridLayout->addWidget(genderEdit, 4, 2, 1, 1);

        ageEdit = new QLineEdit(Index_basicInfo);
        ageEdit->setObjectName(QString::fromUtf8("ageEdit"));
        ageEdit->setFont(font1);
        ageEdit->setReadOnly(true);

        gridLayout->addWidget(ageEdit, 1, 2, 1, 1);

        label_4 = new QLabel(Index_basicInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        label_3 = new QLabel(Index_basicInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label = new QLabel(Index_basicInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        IDEdit = new QLineEdit(Index_basicInfo);
        IDEdit->setObjectName(QString::fromUtf8("IDEdit"));
        IDEdit->setFont(font1);
        IDEdit->setReadOnly(true);

        gridLayout->addWidget(IDEdit, 5, 2, 1, 1);

        label_6 = new QLabel(Index_basicInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 3);

        retranslateUi(Index_basicInfo);

        QMetaObject::connectSlotsByName(Index_basicInfo);
    } // setupUi

    void retranslateUi(QWidget *Index_basicInfo)
    {
        Index_basicInfo->setWindowTitle(QApplication::translate("Index_basicInfo", "Form", nullptr));
        nameEdit->setText(QString());
        label_2->setText(QApplication::translate("Index_basicInfo", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\271\264\351\276\204</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Index_basicInfo", "<html><head/><body><p><span style=\" font-size:20pt;\">\346\200\247\345\210\253</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Index_basicInfo", "<html><head/><body><p><span style=\" font-size:20pt;\">\350\272\253\351\253\230</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Index_basicInfo", "<html><head/><body><p><span style=\" font-size:20pt;\">\344\275\223\351\207\215</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Index_basicInfo", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Index_basicInfo", "\350\264\246\345\217\267ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index_basicInfo: public Ui_Index_basicInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_BASICINFO_H
