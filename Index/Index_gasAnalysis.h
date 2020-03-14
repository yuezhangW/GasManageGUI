#ifndef INDEX_GASANALYSIS_H
#define INDEX_GASANALYSIS_H

#include <QDialog>

namespace Ui {
class Index_gasAnalysis;
}

class Index_gasAnalysis : public QDialog
{
    Q_OBJECT

public:
    explicit Index_gasAnalysis(QWidget *parent = nullptr);
    ~Index_gasAnalysis();

private slots:
    void on_OKButton_clicked();

private:
    Ui::Index_gasAnalysis *ui;
};

#endif // INDEX_GASANALYSIS_H
