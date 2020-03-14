#ifndef INDEX_BASICCHANGE_H
#define INDEX_BASICCHANGE_H

#include <QWidget>

namespace Ui {
class Index_basicChange;
}

class Index_basicChange : public QWidget
{
    Q_OBJECT

public:
    explicit Index_basicChange(QWidget *parent = nullptr);
    ~Index_basicChange();

private slots:
    void on_OKButton_clicked();

private:
    Ui::Index_basicChange *ui;
};

#endif // INDEX_BASICCHANGE_H
