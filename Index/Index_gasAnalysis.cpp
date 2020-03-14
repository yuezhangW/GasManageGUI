#include "Index_gasAnalysis.h"
#include "ui_Index_gasAnalysis.h"

Index_gasAnalysis::Index_gasAnalysis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Index_gasAnalysis)
{
    ui->setupUi(this);
}

Index_gasAnalysis::~Index_gasAnalysis()
{
    delete ui;
}

void Index_gasAnalysis::on_OKButton_clicked()
{

}
