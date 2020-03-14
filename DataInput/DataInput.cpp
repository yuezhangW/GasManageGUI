#include "DataInput.h"
#include "ui_DataInput.h"

DataInput::DataInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataInput)
{
    ui->setupUi(this);
}

DataInput::~DataInput()
{
    delete ui;
}

void DataInput::on_buttonBox_accepted()
{

}

void DataInput::on_buttonBox_rejected()
{

}
