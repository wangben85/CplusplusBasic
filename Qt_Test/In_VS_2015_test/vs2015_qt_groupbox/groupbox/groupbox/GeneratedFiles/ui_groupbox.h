/********************************************************************************
** Form generated from reading UI file 'groupbox.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBOX_H
#define UI_GROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_groupboxClass
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton3;
    QRadioButton *radioButton4;

    void setupUi(QWidget *groupboxClass)
    {
        if (groupboxClass->objectName().isEmpty())
            groupboxClass->setObjectName(QStringLiteral("groupboxClass"));
        groupboxClass->resize(600, 400);
        groupBox = new QGroupBox(groupboxClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 70, 191, 201));
        groupBox->setFlat(true);
        groupBox->setCheckable(true);
        radioButton1 = new QRadioButton(groupBox);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setGeometry(QRect(40, 50, 101, 31));
        radioButton2 = new QRadioButton(groupBox);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        radioButton2->setGeometry(QRect(40, 120, 91, 21));
        groupBox_2 = new QGroupBox(groupboxClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 70, 161, 201));
        groupBox_2->setFlat(true);
        groupBox_2->setCheckable(true);
        radioButton3 = new QRadioButton(groupBox_2);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));
        radioButton3->setGeometry(QRect(30, 50, 101, 21));
        radioButton4 = new QRadioButton(groupBox_2);
        radioButton4->setObjectName(QStringLiteral("radioButton4"));
        radioButton4->setGeometry(QRect(30, 120, 111, 21));

        retranslateUi(groupboxClass);

        QMetaObject::connectSlotsByName(groupboxClass);
    } // setupUi

    void retranslateUi(QWidget *groupboxClass)
    {
        groupboxClass->setWindowTitle(QApplication::translate("groupboxClass", "groupbox", nullptr));
        groupBox->setTitle(QApplication::translate("groupboxClass", "GroupBox", nullptr));
        radioButton1->setText(QApplication::translate("groupboxClass", "RadioButton1", nullptr));
        radioButton2->setText(QApplication::translate("groupboxClass", "RadioButton2", nullptr));
        groupBox_2->setTitle(QApplication::translate("groupboxClass", "GroupBox", nullptr));
        radioButton3->setText(QApplication::translate("groupboxClass", "RadioButton3", nullptr));
        radioButton4->setText(QApplication::translate("groupboxClass", "RadioButton4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class groupboxClass: public Ui_groupboxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBOX_H
