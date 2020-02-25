/********************************************************************************
** Form generated from reading UI file 'buttons.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONS_H
#define UI_BUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buttonsClass
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QWidget *buttonsClass)
    {
        if (buttonsClass->objectName().isEmpty())
            buttonsClass->setObjectName(QStringLiteral("buttonsClass"));
        buttonsClass->resize(600, 400);
        pushButton = new QPushButton(buttonsClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 80, 211, 81));
        toolButton = new QToolButton(buttonsClass);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(90, 210, 201, 51));
        checkBox = new QCheckBox(buttonsClass);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(90, 290, 101, 31));
        checkBox_2 = new QCheckBox(buttonsClass);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(90, 330, 91, 21));
        radioButton = new QRadioButton(buttonsClass);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(260, 290, 111, 41));
        radioButton_2 = new QRadioButton(buttonsClass);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(260, 340, 121, 41));

        retranslateUi(buttonsClass);

        QMetaObject::connectSlotsByName(buttonsClass);
    } // setupUi

    void retranslateUi(QWidget *buttonsClass)
    {
        buttonsClass->setWindowTitle(QApplication::translate("buttonsClass", "buttons", nullptr));
        pushButton->setText(QApplication::translate("buttonsClass", "PushButton", nullptr));
        toolButton->setText(QApplication::translate("buttonsClass", "...", nullptr));
        checkBox->setText(QApplication::translate("buttonsClass", "CheckBox", nullptr));
        checkBox_2->setText(QApplication::translate("buttonsClass", "CheckBox", nullptr));
        radioButton->setText(QApplication::translate("buttonsClass", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("buttonsClass", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buttonsClass: public Ui_buttonsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONS_H
