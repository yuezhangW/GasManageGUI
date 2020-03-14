#include "DataInput.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataInput w;
    w.show();

    return a.exec();
}
