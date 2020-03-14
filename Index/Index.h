#ifndef INDEX_H
#define INDEX_H

#include <QMainWindow>

namespace Ui {
class Index;
}

class Index : public QMainWindow
{
    Q_OBJECT

public:
    explicit Index(QWidget *parent = nullptr);
    ~Index();

private slots:
    void on_loadGasButton_clicked();

    void on_basicInfoButton_clicked();

    void on_dataChButton_clicked();

    void on_passwordButton_clicked();

    void on_gasListButton_clicked();

    void on_getStatusButton_clicked();

    void on_statusListButton_clicked();

    void on_action_triggered();

    void on_loadGas_triggered();

private:
    Ui::Index *ui;
};

#endif // INDEX_H
