#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

private slots:
    void on_Button_left_clicked();

    void on_Button_right_clicked();

private:
    Ui::LoginWidget *ui;
};

#endif // LOGINWIDGET_H
