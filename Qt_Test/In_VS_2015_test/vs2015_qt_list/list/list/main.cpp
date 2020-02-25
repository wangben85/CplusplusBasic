#include "list.h"
#include <QtWidgets/QApplication>
#include <vld.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    list w;
    w.show();
    return a.exec();
}
