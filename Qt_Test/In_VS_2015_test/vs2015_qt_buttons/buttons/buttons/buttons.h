#pragma once

#include <QtWidgets/QWidget>
#include "ui_buttons.h"

class buttons : public QWidget
{
    Q_OBJECT

public:
    buttons(QWidget *parent = Q_NULLPTR);

private:
    Ui::buttonsClass ui;

private slots:
    void slotCheckBoxStateChanged(int state);
    void slotRadioButtonClicked(bool);
    void slotRadioButton_2Clicked(bool);

};
