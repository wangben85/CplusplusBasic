#include "crc16_dmp.h"
#include <string>

//CRC16
#include "Crc16IcProtocol.h"
#include "Crc16AppProtocol.h"
#include "Crc16IcPacket.h"

//DMP
#include "DmpMessageHandle.hpp"
#include "RfChannelDefinitions.h"
#include "DmpAddrUtility.h"
#include "DMPConstants.h"

using namespace std;

std::string Crc16MsgGenerateSend(uint8_t* CrcPayloadBuffer, uint16_t CrcPayloadSize);
std::string crc16Result;  
QByteArray bytes;

// test to audio gain DMP set crc16 packets
void crc16_dmp::test_againDmpSet()
{
  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff = NULL;
  uint16_t DmpPayloadSize = 0;
  std::string againcrc16;
  //char again[] = "1";    // 1 dB   crc16 packet "1122000308097009020202000102014f62"
  //char again[] = "6";       // 6 dB   crc16 packet "1122000308097009020202000102068d23"
  char again[] = "-2";      // -2 dB  crc16 packet "1122000308097009020202000102fe0f22"

  // DMP address for audio gain
  uint32_t address =  GetDmpChannelAddress ( RF_CHANNEL_1,  DMP_CHANN_AUDIO_MGMT_GAIN_OFFSET );
   
  //prepare DMP data, audio gain in dB
  pDmpFullPacketBuff = DmpMsgGenerate( again , &DmpPayloadSize, address, DMP_SET_PROPERTY );

  //prepare CRC16 data and print
  againcrc16 = Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );

  bytes = QByteArray::fromStdString(againcrc16);
  
  ui.textDmpCrc16Gen->setText(bytes.toHex());
} 

// test to device name DMP set crc16 packets
void crc16_dmp::test_devNameDmpSet()
{
    std::string devname;
    //DMP full packet buffer
    uint8_t* pDmpFullPacketBuff;
    uint16_t DmpPayloadSize = 0;
    char devName[] = "AD3";      // device name is "AD3", crc16 packets "11220003080d700d0202010000120005414433c9c2"
    //char devName[] = "TesT";      // device name is "TesT", crc16 packets "11220003080e700e0202010000120006546573546a2e"

                                  // DMP address for device name
    uint32_t address = DMP_GEN_DEVICE_NAME;

    //prepare DMP data, device name
    pDmpFullPacketBuff = DmpMsgGenerate(devName, &DmpPayloadSize, address, DMP_SET_PROPERTY);

    //prepare CRC16 data and print
    devname = Crc16MsgGenerateSend(pDmpFullPacketBuff, DmpPayloadSize);

    bytes = QByteArray::fromStdString(devname);

    ui.textDmpCrc16Gen->setText(bytes.toHex());
}


// test to generally get the crc16 packets according to DMP address, vector type and DMP value
void crc16_dmp::test_crc16PacketGenerate()
{
    //DMP full packet buffer
    uint8_t* pDmpFullPacketBuff;
    uint16_t DmpPayloadSize = 0;
    std::string dmpAddress;
    std::string dmpVector;
    std::string dmpSetValue;
    QByteArray addr;
    QByteArray vector;
    std::string crc16;
    const char* dmpSetValueStr;
    char dmpGetValue[] = ""; // dummy
    
    dmpAddress = (ui.textDmpAddress->toPlainText()).toStdString();
    addr = QByteArray::fromStdString(dmpAddress);

    dmpVector = (ui.textDmpVecType->toPlainText()).toStdString();
    vector = QByteArray::fromStdString(dmpVector);

    dmpSetValue = (ui.textDmpSetValue->toPlainText()).toStdString();
    dmpSetValueStr = dmpSetValue.c_str();

    // DMP address from dmpAddress input
    uint32_t address = strtoul(addr.data(), NULL, 16);

    // DMP address from vector input
    uint32_t vec = strtoul(vector.data(), NULL, 16);

    //prepare DMP data , get or set
    pDmpFullPacketBuff = DmpMsgGenerate((vec == 0x1) ? dmpGetValue : const_cast<char *>(dmpSetValueStr), &DmpPayloadSize, address, (vec == 0x1) ? DMP_GET_PROPERTY : DMP_SET_PROPERTY);

    //prepare CRC16 data
    crc16 = Crc16MsgGenerateSend(pDmpFullPacketBuff, DmpPayloadSize);

    bytes = QByteArray::fromStdString(crc16);
  
    ui.textDmpCrc16Gen->setText(bytes.toHex());
} 

crc16_dmp::crc16_dmp(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    // DMP addrss and vector type could be modified
    ui.textDmpAddress->setReadOnly(false);
    ui.textDmpVecType->setReadOnly(false);
    ui.textDmpSetValue->setReadOnly(false);

    // Connect signals and slots
    // signal: pushButton click()
    connect(ui.pushButtonCrc16Gen, SIGNAL(clicked()), this, SLOT(slotTextDmpCrc16Gen()));

}

// slot function
void crc16_dmp::slotTextDmpCrc16Gen()
{
    //test_againDmpSet();
    //test_devNameDmpSet();
    test_crc16PacketGenerate();
}

/**@brief Function for preparing CRC16 packet and send over BLE and Serial port.
/***************************************************************************//**
 * Prepare CRC16 DMP packet and send over BLE and Serial port
 *
 * @param[in]         CrcPayloadBuffer    DMP data buffer needs to send
 * @param[in]         CrcPayloadSize      DMP data buffer size
 *
 * @return[out]       none
 ******************************************************************************/
std::string crc16_dmp::Crc16MsgGenerateSend(uint8_t* CrcPayloadBuffer, uint16_t CrcPayloadSize)
{
    uint32_t err_code = 0;
    Crc16IpPacket_t crc16Msg = { 0 };
    uint16_t Crc16IpPacketSize = 0;
    char* pStrChar;
   
    //prepare CRC16 data
    crc16Msg.Command = DATA_WRITE_REQUEST;
    crc16Msg.SubCommand = SUBCMD_DMP_PARAMETER;
    crc16Msg.Length = CrcPayloadSize;

    //copy the DMP full packet buffer(including header, length, vector...) into CRC16 payload
    memcpy(crc16Msg.Payload, CrcPayloadBuffer, CrcPayloadSize);
    Crc16IpPacketSize = CrcPayloadSize + 6 + 2;
    Crc16IpPrepPacket(&crc16Msg);//calculate the CRC in the end

    if (sizeof(crc16Msg.Payload) >= crc16Msg.Length + 2)
    {
       crc16Msg.Payload[crc16Msg.Length] = crc16Msg.CrcHigh;
       crc16Msg.Payload[crc16Msg.Length + 1] = crc16Msg.CrcLow;
    }

    pStrChar = (char*)&crc16Msg;
    crc16Result.assign(pStrChar, &pStrChar[Crc16IpPacketSize]);

    return crc16Result;
}

