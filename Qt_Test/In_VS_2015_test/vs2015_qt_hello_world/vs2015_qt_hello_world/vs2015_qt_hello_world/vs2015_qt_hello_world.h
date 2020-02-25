#pragma once

#include <QtWidgets/QWidget>
#include "ui_vs2015_qt_hello_world.h"

class vs2015_qt_hello_world : public QWidget
{
    Q_OBJECT

public:
    vs2015_qt_hello_world(QWidget *parent = Q_NULLPTR);

private:
    Ui::vs2015_qt_hello_worldClass ui;
};
