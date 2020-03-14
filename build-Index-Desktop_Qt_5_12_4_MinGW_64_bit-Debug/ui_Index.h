/********************************************************************************
** Form generated from reading UI file 'Index.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_H
#define UI_INDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Index
{
public:
    QAction *loadGas;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QFrame *frame;
    QToolBox *toolBox;
    QWidget *userPage;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *basicInfoButton;
    QPushButton *dataChButton;
    QPushButton *passwordButton;
    QWidget *gasPage;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QPushButton *gasListButton;
    QPushButton *loadGasButton;
    QPushButton *gasCollectButton;
    QWidget *page;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QPushButton *statusListButton;
    QPushButton *getStatusButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Index)
    {
        if (Index->objectName().isEmpty())
            Index->setObjectName(QString::fromUtf8("Index"));
        Index->resize(900, 500);
        Index->setMinimumSize(QSize(900, 500));
        Index->setMaximumSize(QSize(900, 500));
        loadGas = new QAction(Index);
        loadGas->setObjectName(QString::fromUtf8("loadGas"));
        centralWidget = new QWidget(Index);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(320, 20, 411, 411));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        tabWidget->setTabBarAutoHide(false);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        tabWidget->addTab(tabWidgetPage1, QString());
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 191, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        toolBox = new QToolBox(frame);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(10, 0, 171, 421));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        toolBox->setFont(font);
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
        toolBox->setFrameShape(QFrame::Panel);
        toolBox->setFrameShadow(QFrame::Sunken);
        userPage = new QWidget();
        userPage->setObjectName(QString::fromUtf8("userPage"));
        userPage->setGeometry(QRect(0, 0, 169, 320));
        formLayoutWidget = new QWidget(userPage);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 161, 281));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        basicInfoButton = new QPushButton(formLayoutWidget);
        basicInfoButton->setObjectName(QString::fromUtf8("basicInfoButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        basicInfoButton->setFont(font1);

        formLayout->setWidget(0, QFormLayout::SpanningRole, basicInfoButton);

        dataChButton = new QPushButton(formLayoutWidget);
        dataChButton->setObjectName(QString::fromUtf8("dataChButton"));
        QFont font2;
        font2.setPointSize(12);
        dataChButton->setFont(font2);

        formLayout->setWidget(1, QFormLayout::SpanningRole, dataChButton);

        passwordButton = new QPushButton(formLayoutWidget);
        passwordButton->setObjectName(QString::fromUtf8("passwordButton"));
        passwordButton->setFont(font2);

        formLayout->setWidget(2, QFormLayout::SpanningRole, passwordButton);

        toolBox->addItem(userPage, QString::fromUtf8("\347\224\250\346\210\267\344\277\241\346\201\257(User)"));
        gasPage = new QWidget();
        gasPage->setObjectName(QString::fromUtf8("gasPage"));
        gasPage->setGeometry(QRect(0, 0, 169, 320));
        formLayoutWidget_2 = new QWidget(gasPage);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 0, 161, 341));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        gasListButton = new QPushButton(formLayoutWidget_2);
        gasListButton->setObjectName(QString::fromUtf8("gasListButton"));
        gasListButton->setFont(font2);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, gasListButton);

        loadGasButton = new QPushButton(formLayoutWidget_2);
        loadGasButton->setObjectName(QString::fromUtf8("loadGasButton"));
        loadGasButton->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, loadGasButton);

        gasCollectButton = new QPushButton(formLayoutWidget_2);
        gasCollectButton->setObjectName(QString::fromUtf8("gasCollectButton"));
        gasCollectButton->setFont(font2);

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, gasCollectButton);

        toolBox->addItem(gasPage, QString::fromUtf8("\346\260\224\344\275\223\347\256\241\347\220\206(Gas)"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 169, 320));
        formLayoutWidget_3 = new QWidget(page);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 0, 161, 311));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        statusListButton = new QPushButton(formLayoutWidget_3);
        statusListButton->setObjectName(QString::fromUtf8("statusListButton"));
        statusListButton->setFont(font2);

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, statusListButton);

        getStatusButton = new QPushButton(formLayoutWidget_3);
        getStatusButton->setObjectName(QString::fromUtf8("getStatusButton"));
        getStatusButton->setFont(font2);

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, getStatusButton);

        toolBox->addItem(page, QString::fromUtf8("\345\201\245\345\272\267\347\212\266\346\200\201(Status)"));
        Index->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Index);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Index->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Index);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Index->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Index);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Index->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addSeparator();
        mainToolBar->addAction(loadGas);

        retranslateUi(Index);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Index);
    } // setupUi

    void retranslateUi(QMainWindow *Index)
    {
        Index->setWindowTitle(QApplication::translate("Index", "\344\270\273\351\241\265\351\235\242", nullptr));
        loadGas->setText(QApplication::translate("Index", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QString());
        basicInfoButton->setText(QApplication::translate("Index", "\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        dataChButton->setText(QApplication::translate("Index", "\350\265\204\346\226\231\344\277\256\346\224\271", nullptr));
        passwordButton->setText(QApplication::translate("Index", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        toolBox->setItemText(toolBox->indexOf(userPage), QApplication::translate("Index", "\347\224\250\346\210\267\344\277\241\346\201\257(User)", nullptr));
        gasListButton->setText(QApplication::translate("Index", "\346\237\245\347\234\213\346\260\224\344\275\223\350\256\260\345\275\225", nullptr));
        loadGasButton->setText(QApplication::translate("Index", "\345\257\274\345\205\245\346\260\224\344\275\223\346\225\260\346\215\256", nullptr));
        gasCollectButton->setText(QApplication::translate("Index", "\346\260\224\344\275\223\351\207\207\351\233\206", nullptr));
        toolBox->setItemText(toolBox->indexOf(gasPage), QApplication::translate("Index", "\346\260\224\344\275\223\347\256\241\347\220\206(Gas)", nullptr));
        statusListButton->setText(QApplication::translate("Index", "\346\237\245\347\234\213\345\216\206\345\217\262\345\210\206\346\236\220\350\256\260\345\275\225", nullptr));
        getStatusButton->setText(QApplication::translate("Index", "\345\210\206\346\236\220\346\260\224\344\275\223\346\225\260\346\215\256", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Index", "\345\201\245\345\272\267\347\212\266\346\200\201(Status)", nullptr));
        menu->setTitle(QApplication::translate("Index", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index: public Ui_Index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_H
