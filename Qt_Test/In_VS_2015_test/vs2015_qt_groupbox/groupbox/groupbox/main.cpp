#include "groupbox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    groupbox w;
    w.show();
    return a.exec();
}
