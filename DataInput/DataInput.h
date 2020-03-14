#ifndef DATAINPUT_H
#define DATAINPUT_H

#include <QDialog>

namespace Ui {
class DataInput;
}

class DataInput : public QDialog
{
    Q_OBJECT

public:
    explicit DataInput(QWidget *parent = nullptr);
    ~DataInput();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DataInput *ui;
};

#endif // DATAINPUT_H
