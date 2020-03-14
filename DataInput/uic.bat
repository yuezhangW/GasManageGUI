echo off

pyuic5 -o ui_DataInput.py DataInput.ui

pyrcc5 res_DataInput.qrc -o res_DataInput_rc.py