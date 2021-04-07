/********************************************************************************
** Form generated from reading UI file 'crc16_dmp.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRC16_DMP_H
#define UI_CRC16_DMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crc16_dmpClass
{
public:
    QTextBrowser *textDmpAddress;
    QLabel *labelDmpAddress;
    QLabel *labelDmpVecType;
    QTextEdit *textDmpVecType;
    QPushButton *pushButtonCrc16Gen;
    QTextBrowser *textDmpCrc16Gen;
    QLabel *labelDmpSetValue;
    QTextBrowser *textDmpSetValue;

    void setupUi(QWidget *crc16_dmpClass)
    {
        if (crc16_dmpClass->objectName().isEmpty())
            crc16_dmpClass->setObjectName(QStringLiteral("crc16_dmpClass"));
        crc16_dmpClass->resize(1097, 617);
        textDmpAddress = new QTextBrowser(crc16_dmpClass);
        textDmpAddress->setObjectName(QStringLiteral("textDmpAddress"));
        textDmpAddress->setGeometry(QRect(520, 80, 371, 81));
        QFont font;
        font.setPointSize(16);
        textDmpAddress->setFont(font);
        labelDmpAddress = new QLabel(crc16_dmpClass);
        labelDmpAddress->setObjectName(QStringLiteral("labelDmpAddress"));
        labelDmpAddress->setGeometry(QRect(230, 90, 221, 51));
        QFont font1;
        font1.setPointSize(20);
        labelDmpAddress->setFont(font1);
        labelDmpVecType = new QLabel(crc16_dmpClass);
        labelDmpVecType->setObjectName(QStringLiteral("labelDmpVecType"));
        labelDmpVecType->setGeometry(QRect(170, 200, 271, 91));
        labelDmpVecType->setFont(font1);
        textDmpVecType = new QTextEdit(crc16_dmpClass);
        textDmpVecType->setObjectName(QStringLiteral("textDmpVecType"));
        textDmpVecType->setGeometry(QRect(520, 200, 371, 91));
        textDmpVecType->setFont(font);
        pushButtonCrc16Gen = new QPushButton(crc16_dmpClass);
        pushButtonCrc16Gen->setObjectName(QStringLiteral("pushButtonCrc16Gen"));
        pushButtonCrc16Gen->setGeometry(QRect(70, 450, 381, 111));
        pushButtonCrc16Gen->setFont(font1);
        textDmpCrc16Gen = new QTextBrowser(crc16_dmpClass);
        textDmpCrc16Gen->setObjectName(QStringLiteral("textDmpCrc16Gen"));
        textDmpCrc16Gen->setGeometry(QRect(520, 450, 381, 101));
        textDmpCrc16Gen->setFont(font);
        labelDmpSetValue = new QLabel(crc16_dmpClass);
        labelDmpSetValue->setObjectName(QStringLiteral("labelDmpSetValue"));
        labelDmpSetValue->setGeometry(QRect(200, 320, 241, 81));
        labelDmpSetValue->setFont(font1);
        textDmpSetValue = new QTextBrowser(crc16_dmpClass);
        textDmpSetValue->setObjectName(QStringLiteral("textDmpSetValue"));
        textDmpSetValue->setGeometry(QRect(520, 320, 371, 101));
        textDmpSetValue->setFont(font);

        retranslateUi(crc16_dmpClass);

        QMetaObject::connectSlotsByName(crc16_dmpClass);
    } // setupUi

    void retranslateUi(QWidget *crc16_dmpClass)
    {
        crc16_dmpClass->setWindowTitle(QApplication::translate("crc16_dmpClass", "crc16_dmp", nullptr));
        textDmpAddress->setHtml(QApplication::translate("crc16_dmpClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Input the DMP address here</p></body></html>", nullptr));
        labelDmpAddress->setText(QApplication::translate("crc16_dmpClass", "DMP Address:", nullptr));
        labelDmpVecType->setText(QApplication::translate("crc16_dmpClass", "DMP Vector Type:", nullptr));
        textDmpVecType->setHtml(QApplication::translate("crc16_dmpClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Input '1' for get property and '2' for set property</p></body></html>", nullptr));
        pushButtonCrc16Gen->setText(QApplication::translate("crc16_dmpClass", "CRC16 Packet Generate:", nullptr));
        labelDmpSetValue->setText(QApplication::translate("crc16_dmpClass", "DMP Set Value:", nullptr));
        textDmpSetValue->setHtml(QApplication::translate("crc16_dmpClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Input the value for set property </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crc16_dmpClass: public Ui_crc16_dmpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRC16_DMP_H
