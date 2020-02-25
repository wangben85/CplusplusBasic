#include "groupbox.h"
#include <QDEBUG>

groupbox::groupbox(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    //connect(ui.groupBox, SIGNAL(clicked()), this, SLOT(slotgroupboxchecked()));
    connect(ui.groupBox, SIGNAL(toggled(bool)), this, SLOT(slotgroupboxtoggled(bool)));
}

void groupbox::slotgroupboxchecked()
{
    qDebug() << "Groupbox Clicked!";
}

void groupbox::slotgroupboxtoggled(bool toggled)
{
    if (true == toggled)   //if (true == ui.groupBox->isChecked())
    {
        qDebug() << "Groupbox is checked!";
    }
    else
    {
        qDebug() << "Groupbox is unchecked!";
    }
}
