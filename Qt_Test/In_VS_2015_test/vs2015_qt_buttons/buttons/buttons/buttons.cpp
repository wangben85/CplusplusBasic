#include "buttons.h"
#include <QMenu>
#include <qdebug.h>

buttons::buttons(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    

    //QMenu
    QMenu *pMenu = new QMenu(this);
    pMenu->addAction("test1");
    pMenu->addAction("test2");
    pMenu->addSeparator();
    pMenu->addAction("test3");
    
    //pushbutton 
    ui.pushButton->setMenu(pMenu);
    ui.pushButton->setText("test");

    //toolbutton 
    ui.toolButton->setMenu(pMenu);
    ui.toolButton->setText("Tool Button");
    ui.toolButton->setPopupMode(QToolButton::InstantPopup);
    ui.toolButton->setArrowType(Qt::DownArrow);
    ui.toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    //Checkbox
    ui.checkBox->setText("Not checked");
    ui.checkBox->setCheckState(Qt::Unchecked);
    if (ui.checkBox->checkState() == Qt::Unchecked)
    {
        qDebug() << "Checkbox start unchecked";
    }
     connect(ui.checkBox, SIGNAL(stateChanged(int)), this, SLOT(slotCheckBoxStateChanged(int)));

     //radio button
     connect(ui.radioButton, SIGNAL(clicked(bool)), this, SLOT(slotRadioButtonClicked(bool)));
     connect(ui.radioButton_2, SIGNAL(clicked(bool)), this, SLOT(slotRadioButton_2Clicked(bool)));

}

void buttons::slotCheckBoxStateChanged(int state)
{
    if (state == Qt::Unchecked)
    {
        ui.checkBox->setText("Not checked");
    }
    else
    {
        ui.checkBox->setText("checked");
    }
}

void buttons::slotRadioButtonClicked(bool)
{
    if (ui.radioButton->isCheckable() == true)
    {
        ui.radioButton->setText("radio checked");
        ui.radioButton_2->setText("radio unchecked");
    }
}

void buttons::slotRadioButton_2Clicked(bool)
{
    if (ui.radioButton_2->isCheckable() == true)
    {
        ui.radioButton_2->setText("radio checked");
        ui.radioButton->setText("radio unchecked");
    }

}
