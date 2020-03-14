#include "Index_passwordCh.h"
#include "ui_Index_passwordCh.h"

Index_passwordCh::Index_passwordCh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Index_passwordCh)
{
    ui->setupUi(this);
}

Index_passwordCh::~Index_passwordCh()
{
    delete ui;
}

void Index_passwordCh::on_OKButton_clicked()
{

}
