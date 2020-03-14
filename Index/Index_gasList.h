#ifndef INDEX_GASLIST_H
#define INDEX_GASLIST_H

#include <QDialog>

namespace Ui {
class Index_gasList;
}

class Index_gasList : public QDialog
{
    Q_OBJECT

public:
    explicit Index_gasList(QWidget *parent = nullptr);
    ~Index_gasList();

private slots:
    void on_sensorBox_currentIndexChanged(int index);

    void on_refreshButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::Index_gasList *ui;
};

#endif // INDEX_GASLIST_H
