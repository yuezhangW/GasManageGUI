#include "Index_basicCh.h"
#include "ui_Index_basicCh.h"

Index_basicCh::Index_basicCh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Index_basicCh)
{
    ui->setupUi(this);
}

Index_basicCh::~Index_basicCh()
{
    delete ui;
}
