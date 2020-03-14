#include "Index_statusInfo.h"
#include "ui_Index_statusInfo.h"

Index_statusInfo::Index_statusInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Index_statusInfo)
{
    ui->setupUi(this);
}

Index_statusInfo::~Index_statusInfo()
{
    delete ui;
}

void Index_statusInfo::on_refreshButton_clicked()
{

}

void Index_statusInfo::on_deleteButton_clicked()
{

}
