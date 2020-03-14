#ifndef INDEX_BASICINFO_H
#define INDEX_BASICINFO_H

#include <QWidget>

namespace Ui {
class Index_basicInfo;
}

class Index_basicInfo : public QWidget
{
    Q_OBJECT

public:
    explicit Index_basicInfo(QWidget *parent = nullptr);
    ~Index_basicInfo();

private:
    Ui::Index_basicInfo *ui;
};

#endif // INDEX_BASICINFO_H
