#-------------------------------------------------
#
# Project created by QtCreator 2020-03-11T13:50:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Index
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        Index_basicCh.cpp \
        Index_basicChange.cpp \
        Index_basicInfo.cpp \
        Index_gasAnalysis.cpp \
        Index_gasList.cpp \
        Index_passwordCh.cpp \
        Index_statusInfo.cpp \
        main.cpp \
        Index.cpp

HEADERS += \
        Index.h \
        Index_basicCh.h \
        Index_basicChange.h \
        Index_basicInfo.h \
        Index_gasAnalysis.h \
        Index_gasList.h \
        Index_passwordCh.h \
        Index_statusInfo.h

FORMS += \
        Index.ui \
        Index_basicCh.ui \
        Index_basicChange.ui \
        Index_basicInfo.ui \
        Index_gasAnalysis.ui \
        Index_gasList.ui \
        Index_passwordCh.ui \
        Index_statusInfo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res_Index.qrc
