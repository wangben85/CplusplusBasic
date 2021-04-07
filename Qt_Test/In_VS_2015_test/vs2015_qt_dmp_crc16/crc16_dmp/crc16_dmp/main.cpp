#include "crc16_dmp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    crc16_dmp w;
    w.show();
    return a.exec();
}
