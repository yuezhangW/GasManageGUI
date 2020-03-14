echo off

pyuic5 -o ui_Index.py Index.ui
pyuic5 -o ui_Index_basicInfo.py Index_basicInfo.ui
pyuic5 -o ui_Index_basicCh.py Index_basicCh.ui
pyuic5 -o ui_Index_passwordCh.py Index_passwordCh.ui
pyuic5 -o ui_Index_gasList.py Index_gasList.ui
pyuic5 -o ui_Index_gasAnalysis.py Index_gasAnalysis.ui
pyuic5 -o ui_Index_statusInfo.py Index_statusInfo.ui

pyrcc5 res_Index.qrc -o res_Index_rc.py