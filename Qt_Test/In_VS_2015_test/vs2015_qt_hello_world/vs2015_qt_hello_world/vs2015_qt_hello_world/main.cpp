#include "vs2015_qt_hello_world.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    int i = 0;
    i = i + 1;
    i = 100;
    QApplication a(argc, argv);
    vs2015_qt_hello_world w;
    w.show();
    return a.exec();
}
