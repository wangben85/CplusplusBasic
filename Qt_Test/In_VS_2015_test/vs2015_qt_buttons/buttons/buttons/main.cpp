#include "buttons.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    buttons w;
    w.show();
    return a.exec();
}
