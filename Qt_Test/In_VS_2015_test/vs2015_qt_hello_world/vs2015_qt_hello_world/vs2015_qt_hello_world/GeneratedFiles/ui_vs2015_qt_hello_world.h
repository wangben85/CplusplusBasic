/********************************************************************************
** Form generated from reading UI file 'vs2015_qt_hello_world.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VS2015_QT_HELLO_WORLD_H
#define UI_VS2015_QT_HELLO_WORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vs2015_qt_hello_worldClass
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *vs2015_qt_hello_worldClass)
    {
        if (vs2015_qt_hello_worldClass->objectName().isEmpty())
            vs2015_qt_hello_worldClass->setObjectName(QStringLiteral("vs2015_qt_hello_worldClass"));
        vs2015_qt_hello_worldClass->resize(600, 400);
        plainTextEdit = new QPlainTextEdit(vs2015_qt_hello_worldClass);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(110, 170, 191, 71));
        pushButton = new QPushButton(vs2015_qt_hello_worldClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 40, 191, 91));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        retranslateUi(vs2015_qt_hello_worldClass);

        QMetaObject::connectSlotsByName(vs2015_qt_hello_worldClass);
    } // setupUi

    void retranslateUi(QWidget *vs2015_qt_hello_worldClass)
    {
        vs2015_qt_hello_worldClass->setWindowTitle(QApplication::translate("vs2015_qt_hello_worldClass", "vs2015_qt_hello_world", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("vs2015_qt_hello_worldClass", "visual studio hello world\n"
"", nullptr));
        pushButton->setText(QApplication::translate("vs2015_qt_hello_worldClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vs2015_qt_hello_worldClass: public Ui_vs2015_qt_hello_worldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VS2015_QT_HELLO_WORLD_H
