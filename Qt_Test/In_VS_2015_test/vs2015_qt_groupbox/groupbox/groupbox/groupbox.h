#pragma once

#include <QtWidgets/QWidget>
#include "ui_groupbox.h"

class groupbox : public QWidget
{
    Q_OBJECT

public:
    groupbox(QWidget *parent = Q_NULLPTR);

private:
    Ui::groupboxClass ui;

private slots:
    void slotgroupboxchecked();
    void slotgroupboxtoggled(bool);
};
