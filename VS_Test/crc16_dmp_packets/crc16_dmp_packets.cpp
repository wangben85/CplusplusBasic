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
    //  cout << hex << pUartPrint[i] << endl;
     cout << hex << setw(2) << setfill('0') <<  (int)dummy;
   }
     cout << endl;
}

int main()
{
  cout << "Hello World!" << endl;
  cout << "Hello Ben!" << endl;

  //DMP full packet buffer
  uint8_t* pDmpFullPacketBuff;
  uint16_t DmpPayloadSize = 0;
  // char again[] = "6";  // 6dB
  // char again[] = "-2";    // -2dB
  char again[] = "1";    // 1dB

  // cout << "intput str: " << endl;  
  // cin  >> (char *)str;
  // cout << "output str: " << endl;  
  // cout << str << endl;

  // DMP address for audio gain
  uint32_t address =  GetDmpChannelAddress ( RF_CHANNEL_1,  DMP_CHANN_AUDIO_MGMT_GAIN_OFFSET );
   
  //prepare DMP data, audio gain in dB
  pDmpFullPacketBuff = DmpMsgGenerate( again , &DmpPayloadSize, address, DMP_SET_PROPERTY );

	//prepare CRC16 data
	Crc16MsgGenerateSend( pDmpFullPacketBuff, DmpPayloadSize );

  return 0;
}