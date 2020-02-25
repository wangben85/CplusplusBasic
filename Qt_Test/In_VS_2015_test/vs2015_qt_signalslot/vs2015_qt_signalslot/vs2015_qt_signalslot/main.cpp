#include "vs2015_qt_signalslot.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vs2015_qt_signalslot w;
    w.show();
    return a.exec();
}
