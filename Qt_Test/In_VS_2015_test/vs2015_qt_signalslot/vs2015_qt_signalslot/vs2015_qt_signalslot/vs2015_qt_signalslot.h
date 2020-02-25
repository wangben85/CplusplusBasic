#pragma once

#include <QtWidgets/QWidget>
#include "ui_vs2015_qt_signalslot.h"

class vs2015_qt_signalslot : public QWidget
{
    Q_OBJECT

public:
    vs2015_qt_signalslot(QWidget *parent = Q_NULLPTR);

private:
    Ui::vs2015_qt_signalslotClass ui;

private slots:
   void slotLabelTextChange();
   void slotLabelTextClearShow();
};
