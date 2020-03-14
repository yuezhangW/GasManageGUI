#ifndef INDEX_PASSWORDCH_H
#define INDEX_PASSWORDCH_H

#include <QDialog>

namespace Ui {
class Index_passwordCh;
}

class Index_passwordCh : public QDialog
{
    Q_OBJECT

public:
    explicit Index_passwordCh(QWidget *parent = nullptr);
    ~Index_passwordCh();

private slots:
    void on_OKButton_clicked();

private:
    Ui::Index_passwordCh *ui;
};

#endif // INDEX_PASSWORDCH_H
