echo off

pyuic5 -o ui_LoginWidget.py LoginWidget.ui

pyrcc5 res_Login.qrc -o res_Login_rc.py