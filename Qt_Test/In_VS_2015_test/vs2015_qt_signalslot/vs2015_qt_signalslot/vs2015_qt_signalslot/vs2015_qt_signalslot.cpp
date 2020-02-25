#include "vs2015_qt_signalslot.h"

vs2015_qt_signalslot::vs2015_qt_signalslot(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    // Connect signals and slots
    connect(ui.pushButtonTextChange, SIGNAL(clicked()), this, SLOT(slotLabelTextChange()));
    connect(ui.pushButtonTextClearShow, SIGNAL(clicked()), this, SLOT(slotLabelTextClearShow()));
}


void vs2015_qt_signalslot::slotLabelTextChange()
{
    ui.labelTextChange->setText("Text change for button!");
}

void vs2015_qt_signalslot::slotLabelTextClearShow()
{
    if (ui.labelTextClearShow->text() == NULL)
    {
        ui.labelTextClearShow->setText("Set the Text!");
    }
    else
    {
        ui.labelTextClearShow->clear();
    }
}