/********************************************************************************
** Form generated from reading UI file 'Index_gasAnalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_GASANALYSIS_H
#define UI_INDEX_GASANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Index_gasAnalysis
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *LogisticBox;
    QCheckBox *SVCBox;
    QCheckBox *PerceptronBox;
    QCheckBox *kNNBox;
    QCheckBox *ForestBox;
    QCheckBox *gaussianBox;
    QCheckBox *Linear_SVCBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *typeBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *nameEdit;
    QPushButton *OKButton;

    void setupUi(QDialog *Index_gasAnalysis)
    {
        if (Index_gasAnalysis->objectName().isEmpty())
            Index_gasAnalysis->setObjectName(QString::fromUtf8("Index_gasAnalysis"));
        Index_gasAnalysis->resize(679, 424);
        horizontalLayout = new QHBoxLayout(Index_gasAnalysis);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Index_gasAnalysis);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Index_gasAnalysis);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LogisticBox = new QCheckBox(groupBox_2);
        LogisticBox->setObjectName(QString::fromUtf8("LogisticBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(16);
        LogisticBox->setFont(font1);

        verticalLayout_2->addWidget(LogisticBox);

        SVCBox = new QCheckBox(groupBox_2);
        SVCBox->setObjectName(QString::fromUtf8("SVCBox"));
        QFont font2;
        font2.setPointSize(16);
        SVCBox->setFont(font2);

        verticalLayout_2->addWidget(SVCBox);

        PerceptronBox = new QCheckBox(groupBox_2);
        PerceptronBox->setObjectName(QString::fromUtf8("PerceptronBox"));
        PerceptronBox->setFont(font2);

        verticalLayout_2->addWidget(PerceptronBox);

        kNNBox = new QCheckBox(groupBox_2);
        kNNBox->setObjectName(QString::fromUtf8("kNNBox"));
        kNNBox->setFont(font2);

        verticalLayout_2->addWidget(kNNBox);

        ForestBox = new QCheckBox(groupBox_2);
        ForestBox->setObjectName(QString::fromUtf8("ForestBox"));
        ForestBox->setFont(font2);

        verticalLayout_2->addWidget(ForestBox);

        gaussianBox = new QCheckBox(groupBox_2);
        gaussianBox->setObjectName(QString::fromUtf8("gaussianBox"));
        gaussianBox->setFont(font2);

        verticalLayout_2->addWidget(gaussianBox);

        Linear_SVCBox = new QCheckBox(groupBox_2);
        Linear_SVCBox->setObjectName(QString::fromUtf8("Linear_SVCBox"));
        Linear_SVCBox->setFont(font2);

        verticalLayout_2->addWidget(Linear_SVCBox);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Index_gasAnalysis);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(10, -1, 10, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        typeBox = new QComboBox(groupBox_3);
        typeBox->addItem(QString());
        typeBox->setObjectName(QString::fromUtf8("typeBox"));
        QFont font3;
        font3.setPointSize(12);
        typeBox->setFont(font3);

        horizontalLayout_3->addWidget(typeBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        nameEdit = new QLineEdit(groupBox_3);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QFont font4;
        font4.setPointSize(10);
        nameEdit->setFont(font4);
        nameEdit->setMaxLength(10);

        horizontalLayout_2->addWidget(nameEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        OKButton = new QPushButton(groupBox_3);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));

        verticalLayout_3->addWidget(OKButton);

        verticalLayout_3->setStretch(2, 2);

        horizontalLayout->addWidget(groupBox_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(Index_gasAnalysis);

        QMetaObject::connectSlotsByName(Index_gasAnalysis);
    } // setupUi

    void retranslateUi(QDialog *Index_gasAnalysis)
    {
        Index_gasAnalysis->setWindowTitle(QApplication::translate("Index_gasAnalysis", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Index_gasAnalysis", "Step1 \351\200\211\346\213\251\346\260\224\344\275\223\346\225\260\346\215\256 ", nullptr));
        groupBox_2->setTitle(QApplication::translate("Index_gasAnalysis", "Step2 \351\200\211\346\213\251\345\210\206\347\261\273\345\231\250", nullptr));
        LogisticBox->setText(QApplication::translate("Index_gasAnalysis", "\351\200\273\350\276\221\345\233\236\345\275\222", nullptr));
        SVCBox->setText(QApplication::translate("Index_gasAnalysis", "\346\224\257\346\214\201\345\220\221\351\207\217\346\234\272", nullptr));
        PerceptronBox->setText(QApplication::translate("Index_gasAnalysis", "\346\204\237\347\237\245\346\234\272", nullptr));
        kNNBox->setText(QApplication::translate("Index_gasAnalysis", "kNN\350\201\232\347\261\273", nullptr));
        ForestBox->setText(QApplication::translate("Index_gasAnalysis", "\351\232\217\346\234\272\346\243\256\346\236\227", nullptr));
        gaussianBox->setText(QApplication::translate("Index_gasAnalysis", "\346\234\264\347\264\240\350\264\235\345\217\266\346\226\257", nullptr));
        Linear_SVCBox->setText(QApplication::translate("Index_gasAnalysis", "\347\272\277\346\200\247\346\224\257\346\214\201\345\220\221\351\207\217\346\234\272", nullptr));
        groupBox_3->setTitle(QApplication::translate("Index_gasAnalysis", "Step3 \345\221\275\345\220\215\345\271\266\347\241\256\350\256\244", nullptr));
        label_2->setText(QApplication::translate("Index_gasAnalysis", "\347\261\273\345\210\253", nullptr));
        typeBox->setItemText(0, QApplication::translate("Index_gasAnalysis", "\345\221\274\346\260\224\350\200\205\346\200\247\345\210\253", nullptr));

        label->setText(QApplication::translate("Index_gasAnalysis", "\345\221\275\345\220\215", nullptr));
        OKButton->setText(QApplication::translate("Index_gasAnalysis", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index_gasAnalysis: public Ui_Index_gasAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_GASANALYSIS_H
