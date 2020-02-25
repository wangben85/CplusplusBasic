#include "eventfilter.h"
#include <Qevent>
#include <Qdebug>
#include <QKeyEvent>

eventfilter::eventfilter(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    ui.textEdit->installEventFilter(this);
}

bool eventfilter::eventFilter(QObject *obj, QEvent *event)
{
    //An event filter is an object that receives all events that are sent to this object.
    //The filter can either stop the event or forward it to this object.
    //The event filter filterObj receives events via its eventFilter() function.
    //The eventFilter() function must return true if the event should be filtered, (i.e.stopped); 
    //otherwise it must return false.
    if (obj == ui.textEdit) {
        if (event->type() == QEvent::KeyPress) {
            QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
            qDebug() << "Ate key press" << keyEvent->key();
            return true;
        }
        else {
            return false;
        }
    }
    else {
        // pass the event on to the parent class
        return eventfilter::eventFilter(obj, event);
        //return false;
    }
}

void eventfilter::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        qDebug() << "mouse left button is released!" ;
    }
}

