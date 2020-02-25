#include "vs2015_qt_hello_world.h"

vs2015_qt_hello_world::vs2015_qt_hello_world(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    ui.pushButton->setText("vs2015");
}
