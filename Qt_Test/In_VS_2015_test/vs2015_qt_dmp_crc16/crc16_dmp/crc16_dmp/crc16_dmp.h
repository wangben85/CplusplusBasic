#pragma once

#include <QtWidgets/QWidget>
#include "ui_crc16_dmp.h"

class crc16_dmp : public QWidget
{
    Q_OBJECT

public:
    crc16_dmp(QWidget *parent = Q_NULLPTR);
    void test_againDmpSet();
    void test_devNameDmpSet();
    void test_crc16PacketGenerate();
    std::string Crc16MsgGenerateSend(uint8_t* CrcPayloadBuffer, uint16_t CrcPayloadSize);

private:
    Ui::crc16_dmpClass ui;

private slots:
    void slotTextDmpCrc16Gen();
};
