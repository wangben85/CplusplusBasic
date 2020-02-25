#pragma once

#include <QtWidgets/QWidget>
#include "ui_eventfilter.h"
#include "QMouseEvent"

class eventfilter : public QWidget
{
    Q_OBJECT

public:
    eventfilter(QWidget *parent = Q_NULLPTR);

private:
    Ui::eventfilterClass ui;
    bool eventFilter(QObject *obj, QEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
};

