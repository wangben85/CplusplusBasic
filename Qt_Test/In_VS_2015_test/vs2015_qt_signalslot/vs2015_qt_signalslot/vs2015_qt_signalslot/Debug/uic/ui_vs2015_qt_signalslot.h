/********************************************************************************
** Form generated from reading UI file 'vs2015_qt_signalslot.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VS2015_QT_SIGNALSLOT_H
#define UI_VS2015_QT_SIGNALSLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vs2015_qt_signalslotClass
{
public:
    QPushButton *pushButtonTextChange;
    QPushButton *pushButtonTextClearShow;
    QLabel *labelTextChange;
    QLabel *labelTextClearShow;

    void setupUi(QWidget *vs2015_qt_signalslotClass)
    {
        if (vs2015_qt_signalslotClass->objectName().isEmpty())
            vs2015_qt_signalslotClass->setObjectName(QStringLiteral("vs2015_qt_signalslotClass"));
        vs2015_qt_signalslotClass->resize(600, 400);
        pushButtonTextChange = new QPushButton(vs2015_qt_signalslotClass);
        pushButtonTextChange->setObjectName(QStringLiteral("pushButtonTextChange"));
        pushButtonTextChange->setGeometry(QRect(90, 220, 75, 23));
        pushButtonTextClearShow = new QPushButton(vs2015_qt_signalslotClass);
        pushButtonTextClearShow->setObjectName(QStringLiteral("pushButtonTextClearShow"));
        pushButtonTextClearShow->setGeometry(QRect(90, 290, 75, 23));
        labelTextChange = new QLabel(vs2015_qt_signalslotClass);
        labelTextChange->setObjectName(QStringLiteral("labelTextChange"));
        labelTextChange->setGeometry(QRect(270, 220, 111, 51));
        labelTextClearShow = new QLabel(vs2015_qt_signalslotClass);
        labelTextClearShow->setObjectName(QStringLiteral("labelTextClearShow"));
        labelTextClearShow->setGeometry(QRect(260, 300, 101, 41));

        retranslateUi(vs2015_qt_signalslotClass);

        QMetaObject::connectSlotsByName(vs2015_qt_signalslotClass);
    } // setupUi

    void retranslateUi(QWidget *vs2015_qt_signalslotClass)
    {
        vs2015_qt_signalslotClass->setWindowTitle(QApplication::translate("vs2015_qt_signalslotClass", "vs2015_qt_signalslot", nullptr));
        pushButtonTextChange->setText(QApplication::translate("vs2015_qt_signalslotClass", "PushButton", nullptr));
        pushButtonTextClearShow->setText(QApplication::translate("vs2015_qt_signalslotClass", "PushButton", nullptr));
        labelTextChange->setText(QApplication::translate("vs2015_qt_signalslotClass", "TextLabel", nullptr));
        labelTextClearShow->setText(QApplication::translate("vs2015_qt_signalslotClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vs2015_qt_signalslotClass: public Ui_vs2015_qt_signalslotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VS2015_QT_SIGNALSLOT_H
