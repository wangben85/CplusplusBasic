/********************************************************************************
** Form generated from reading UI file 'eventfilter.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTFILTER_H
#define UI_EVENTFILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eventfilterClass
{
public:
    QTextEdit *textEdit;

    void setupUi(QWidget *eventfilterClass)
    {
        if (eventfilterClass->objectName().isEmpty())
            eventfilterClass->setObjectName(QStringLiteral("eventfilterClass"));
        eventfilterClass->resize(600, 400);
        textEdit = new QTextEdit(eventfilterClass);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 130, 241, 111));

        retranslateUi(eventfilterClass);

        QMetaObject::connectSlotsByName(eventfilterClass);
    } // setupUi

    void retranslateUi(QWidget *eventfilterClass)
    {
        eventfilterClass->setWindowTitle(QApplication::translate("eventfilterClass", "eventfilter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class eventfilterClass: public Ui_eventfilterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTFILTER_H
