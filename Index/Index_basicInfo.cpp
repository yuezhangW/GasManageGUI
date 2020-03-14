#include "Index_basicInfo.h"
#include "ui_Index_basicInfo.h"

Index_basicInfo::Index_basicInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Index_basicInfo)
{
    ui->setupUi(this);
}

Index_basicInfo::~Index_basicInfo()
{
    delete ui;
}
