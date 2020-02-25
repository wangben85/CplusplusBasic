/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listClass
{
public:
    QLabel *label;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonTopAdd;
    QPushButton *pushButtonDelete;
    QListWidget *listWidget;
    QLineEdit *lineEdit;

    void setupUi(QWidget *listClass)
    {
        if (listClass->objectName().isEmpty())
            listClass->setObjectName(QStringLiteral("listClass"));
        listClass->resize(600, 400);
        label = new QLabel(listClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 110, 91, 41));
        pushButtonAdd = new QPushButton(listClass);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(150, 180, 111, 41));
        pushButtonTopAdd = new QPushButton(listClass);
        pushButtonTopAdd->setObjectName(QStringLiteral("pushButtonTopAdd"));
        pushButtonTopAdd->setGeometry(QRect(150, 240, 111, 41));
        pushButtonDelete = new QPushButton(listClass);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(150, 310, 111, 41));
        listWidget = new QListWidget(listClass);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(310, 10, 261, 351));
        lineEdit = new QLineEdit(listClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 120, 121, 31));

        retranslateUi(listClass);

        QMetaObject::connectSlotsByName(listClass);
    } // setupUi

    void retranslateUi(QWidget *listClass)
    {
        listClass->setWindowTitle(QApplication::translate("listClass", "list", nullptr));
        label->setText(QApplication::translate("listClass", "Item content", nullptr));
        pushButtonAdd->setText(QApplication::translate("listClass", "Add item", nullptr));
        pushButtonTopAdd->setText(QApplication::translate("listClass", "Add item on Top", nullptr));
        pushButtonDelete->setText(QApplication::translate("listClass", "Delete item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listClass: public Ui_listClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
