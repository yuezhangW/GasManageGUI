#ifndef INDEX_STATUSINFO_H
#define INDEX_STATUSINFO_H

#include <QDialog>

namespace Ui {
class Index_statusInfo;
}

class Index_statusInfo : public QDialog
{
    Q_OBJECT

public:
    explicit Index_statusInfo(QWidget *parent = nullptr);
    ~Index_statusInfo();

private slots:
    void on_refreshButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::Index_statusInfo *ui;
};

#endif // INDEX_STATUSINFO_H
