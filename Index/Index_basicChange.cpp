#include "Index_basicChange.h"
#include "ui_Index_basicChange.h"

Index_basicChange::Index_basicChange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Index_basicChange)
{
    ui->setupUi(this);
}

Index_basicChange::~Index_basicChange()
{
    delete ui;
}

void Index_basicChange::on_OKButton_clicked()
{

}
