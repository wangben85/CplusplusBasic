#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>    // in order to use for_each, we have to include this
#include <iomanip>

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

void Crc16MsgGenerateSend( uint8_t* CrcPayloadBuffer, uint16_t CrcPayloadSize );

/**@brief Function for preparing CRC16 packet and send over BLE and Serial port.
 */
 /***************************************************************************//**
 * Prepare CRC16 DMP packet and send over BLE and Serial port
 *
 * @param[in]         CrcPayloadBuffer    DMP data buffer needs to send
 * @param[in]         CrcPayloadSize      DMP data buffer size
 *
 * @return[out]       none
 *
 * @note
 *    None
 ******************************************************************************/
void Crc16MsgGenerateSend( uint8_t* CrcPayloadBuffer, uint16_t CrcPayloadSize )
{
   uint32_t err_code = 0;
   Crc16IpPacket_t crc16Msg;
   uint16_t Crc16IpPacketSize = 0;
   uint8_t* pUartPrint;
   uint8_t  dummy;
	//prepare CRC16 data
   crc16Msg.Command = DATA_WRITE_REQUEST;
   crc16Msg.SubCommand = SUBCMD_DMP_PARAMETER;
   crc16Msg.Length = CrcPayloadSize;

	//copy the DMP full packet buffer(including header, length, vector...) into CRC16 payload
   memcpy( crc16Msg.Payload, CrcPayloadBuffer, CrcPayloadSize );
   Crc16IpPacketSize = CrcPayloadSize + 6 + 2;
   Crc16IpPrepPacket( &crc16Msg );//calculate the CRC in the end
   
   if (sizeof(crc16Msg.Payload) >= crc16Msg.Length + 2)
   {
      crc16Msg.Payload[crc16Msg.Length]   = crc16Msg.CrcHigh;
      crc16Msg.Payload[crc16Msg.Length+1] = crc16Msg.CrcLow;
   }
   
   pUartPrint = (uint8_t*)&crc16Msg;
   
   //NRF_LOG_DEBUG("CRC16 packets are : \n");
   for (uint32_t i = 0; i < Crc16IpPacketSize; i++)
   {
     dummy =  pUartPrint[i];

     // cout print the crc16 packets
     cout << hex << setw(2) << setfill('0') <<  (int)dummy;
   }
     cout << endl;
}

// test to audio gain DMP set crc16 packets
void test_againDmpSet()
{
  cout << "Audio again set" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  // char again[] = "1";    // 1 dB   crc16 packet "1122000308097009020202000102014f62"
  // char again[] = "6";       // 6 dB   crc16 packet "1122000308097009020202000102068d23"
  char again[] = "-2";      // -2 dB  crc16 packet "1122000308097009020202000102fe0f22"

  // DMP address for audio gain
  uint32_t address =  GetDmpChannelAddress ( RF_CHANNEL_1,  DMP_CHANN_AUDIO_MGMT_GAIN_OFFSET );
   
  //prepare DMP data, audio gain in dB
  pDmpFullPacketBuff = DmpMsgGenerate( again , &DmpPayloadSize, address, DMP_SET_PROPERTY );

	//prepare CRC16 data and print
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );
}

// test to audio gain DMP get crc16 packets
void test_againDmpGet()
{
  cout << "Audio again get" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  char again[] = "";  // Note: In VSCode here, dont use "NULL" otherwise it occurs issue 
                      // get audio gain crc16 packets "112200030808700801020200010241f7"

  // DMP address for audio gain
  uint32_t address =  GetDmpChannelAddress ( RF_CHANNEL_1,  DMP_CHANN_AUDIO_MGMT_GAIN_OFFSET );
   
  //prepare DMP data, audio gain in dB
  pDmpFullPacketBuff = DmpMsgGenerate( again , &DmpPayloadSize, address, DMP_GET_PROPERTY );

	//prepare CRC16 data and print
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );
}


// test to audio high pass filter DMP set crc16 packets
void test_hpfilDmpSet()
{
  cout << "Audio high pass filter set" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  // char hpfil[] = "100" ;            // 100 Hz, crc16 packets "11220003080970090202020001076434a1"
  // char hpfil[] = "160" ;               // 160 Hz, crc16 packets "1122000308097009020202000107a0a7a0"
  char hpfil[] = "180" ;               // 180 Hz, crc16 packets "1122000308097009020202000107b4a8a0"

  // DMP address for audio high pass filter in Hz
  uint32_t address =  GetDmpChannelAddress ( RF_CHANNEL_1,  DMP_CHANN_AUDIO_MGMT_HIGH_PASS_FILTER_FREQ_OFFSET );
   
  //prepare DMP data, audio high pass filter in Hz
  pDmpFullPacketBuff = DmpMsgGenerate( hpfil , &DmpPayloadSize, address, DMP_SET_PROPERTY );

	//prepare CRC16 data and print
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );
}

// test to audio high pass filter DMP get crc16 packets
void test_hpfilDmpGet()
{
  cout << "Audio high pass filter Get" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  char hpfil[] = "";  // Note: In VSCode here, dont use "NULL" otherwise it occurs issue
                      // get audio high pass filter crc16 packets "11220003080870080102020001074237"
  // DMP address for audio high pass filter in Hz
  uint32_t address =  GetDmpChannelAddress ( RF_CHANNEL_1,  DMP_CHANN_AUDIO_MGMT_HIGH_PASS_FILTER_FREQ_OFFSET );
   
  //prepare DMP data, audio high pass filter in Hz
  pDmpFullPacketBuff = DmpMsgGenerate( hpfil , &DmpPayloadSize, address, DMP_GET_PROPERTY );

	//prepare CRC16 data and print
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );
}


// test to device name DMP set crc16 packets
void test_devNameDmpSet()
{
  cout << "Device Name set" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  // device name is "AD3", crc16 packets "11220003080d700d0202010000120005414433c9c2"
  // char devName[] = "AD3";  
  
  // device name is "TesT", crc16 packets "11220003080e700e0202010000120006546573546a2e"
    char devName[] = "TesT";      
  
  // DMP address for device name
  uint32_t address =  DMP_GEN_DEVICE_NAME;
   
  //prepare DMP data, device name
  pDmpFullPacketBuff = DmpMsgGenerate( devName , &DmpPayloadSize, address, DMP_SET_PROPERTY );

	//prepare CRC16 data and print
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );
}

// test to device name DMP get crc16 packets
void test_devNameDmpGet()
{
  cout << "Device Name Get" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  char devName[] = "";     // Note: In VSCode here, dont use "NULL" otherwise it occurs issue
                           // get device name crc16 packets "112200030808700801020100001259f7"

  // DMP address for device name
  uint32_t address =  DMP_GEN_DEVICE_NAME;
   
  //prepare DMP data, device name
  pDmpFullPacketBuff = DmpMsgGenerate( devName, &DmpPayloadSize, address, DMP_GET_PROPERTY );

	//prepare CRC16 data and print
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );
}

// test to generally get the crc16 packets according to DMP address, vector type and DMP value
void test_crc16PacketGenerate()
{
  cout << "Get the crc16 packet generally" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  char dmpAddress[] = "";
  int dmpVector;
  char dmpSetValue[] = "";
  char dmpGetValue[] = ""; // dummy
  uint32_t address = 0;    // dmp address

  cout << "1. Intput the DMP address first: " << endl;  
  cin  >> dmpAddress;
  cout << "1. The DMP address is : " << endl;  
  cout << dmpAddress << endl;

  // DMP address from terminal input dmpAddress
  address = strtoul(dmpAddress, NULL, 16) ;

  cout << "2. Intput the DMP property vector, get(1) or set(2): " << endl;  
  cin  >> dmpVector;
  cout << "2. The DMP vector is : " << endl;  
  cout << dmpVector << endl;

  if ( dmpVector == 2) // set DMP
  {
    cout << "3. Intput the DMP property value when the vector is 'set'(2) : " << endl;  
    cin  >> dmpSetValue;
    cout << "3. The DMP set value is : " << endl;  
    cout << dmpSetValue << endl;
  }
  
  //prepare DMP data , get or set
  pDmpFullPacketBuff = DmpMsgGenerate( (dmpVector == 1)? dmpGetValue: dmpSetValue , &DmpPayloadSize, address, (dmpVector == 1)? DMP_GET_PROPERTY: DMP_SET_PROPERTY );

  //prepare CRC16 data
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );
}



int main()
{
  cout << "Main" << endl;
 
  // set DMP
  // test_againDmpSet();   // set audio gain
  // test_hpfilDmpSet();      // set audio high pass fitler
  // test_devNameDmpSet();    // set device name

  // get DMP
  // test_againDmpGet();   // get audio gain
  // test_hpfilDmpGet();   // get audio high pass filter
  // test_devNameDmpGet();    // get device name

  // general test
  test_crc16PacketGenerate();

  return 0;
}