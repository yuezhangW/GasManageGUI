#ifndef INDEX_BASICCH_H
#define INDEX_BASICCH_H

#include <QDialog>

namespace Ui {
class Index_basicCh;
}

class Index_basicCh : public QDialog
{
    Q_OBJECT

public:
    explicit Index_basicCh(QWidget *parent = nullptr);
    ~Index_basicCh();

private:
    Ui::Index_basicCh *ui;
};

#endif // INDEX_BASICCH_H
