#include "Index_gasList.h"
#include "ui_Index_gasList.h"

Index_gasList::Index_gasList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Index_gasList)
{
    ui->setupUi(this);
}

Index_gasList::~Index_gasList()
{
    delete ui;
}

void Index_gasList::on_sensorBox_currentIndexChanged(int index)
{

}

void Index_gasList::on_refreshButton_clicked()
{

}

void Index_gasList::on_deleteButton_clicked()
{

}
