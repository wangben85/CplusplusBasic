#include "DmpParser.hpp"
#include "DmpMessageHandle.hpp"
#include "RfChannelDefinitions.h"
#include "DmpAddrUtility.h"
#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>    // in order to use for_each, we have to include this
#include <iomanip>


/***************************************************************************//**
 * Creates a DMP PDU based on the given inputs
 *
 * @param[in]         dmpValue            pointer to the DMP payload data
 * @param[out]        DmpPayloadSize      DMP payload size(length)
 * @param[in]         address             DMP address
 * @param[in]         vector              DMP vector
 *
 * @return[out]       the generated DMP packet
 *
 * @note
 *    None
 ******************************************************************************/
uint8_t* DmpMsgGenerate( char * dmpValue, uint16_t* DmpPayloadSize, uint32_t address, unsigned char vector)
{
   uint8_t pPackBuffer[ 256 ];
   uint8_t* pReturnBuffer;
   uint32_t offset = 0;
   RfChannel_t channel = RF_CHANNEL_1;
   TypeSize ts = {DMPUnknown,0,false};// default and dummy for read
   uint32_t* dmpValueTemp = reinterpret_cast<uint32_t*>(dmpValue);
   
   if ( DMP_SET_PROPERTY == vector)
   {
     if (GetDmpChannelOffset(address, &channel, &offset))   // channel based dmp
     {
      switch (offset)
      {
         case DMP_CHANN_GENERIC_CHAN_NAME_OFFSET:
            {
               std::string chName = dmpValue;
               ts = {DMPvarBinOb, (int)chName.length(), false};
            }
            break;

         case DMP_CHANN_RF_PRIMARY_GROUP_CHAN_NAME_OFFSET:
         case DMP_CHANN_RF_SECONDARY_GROUP_CHAN_NAME_OFFSET:
            {
               std::string freq = dmpValue;
               ts = {DMPvarBinOb, (int)freq.length(), false};
            }
            break;

         case DMP_CHANN_AUDIO_MGMT_MUTE_BUTTON_MODE_OFFSET:
         case DMP_CHANN_AUDIO_MGMT_MUTE_OFFSET:
         case DMP_CHANN_AUDIO_MGMT_TALK_SWITCH_OFFSET:
         case DMP_CHANN_RF_MUTE_ALL_FREQS_OFFSET:
         case DMP_CHANN_SECONDARY_FREQ_STATUS_OFFSET:
            {
               ts = {DMPbool, 1, false};
               *dmpValueTemp = atoi(dmpValue);
            }
            break;

         case DMP_CHANN_AUDIO_MGMT_GAIN_OFFSET:
         case DMP_CHANN_AUDIO_MGMT_SENSITIVITY_OFFSET:
         case DMP_CHANN_AUDIO_MGMT_TONE_GEN_VOLUME_OFFSET:
            {
               ts = {DMPs1int, 1, false};
               *dmpValueTemp = atoi(dmpValue);
            }
            break;

         case DMP_CHANN_RF_TRANSMIT_LEVEL_OFFSET:
            {
               ts = {DMPs2int, 2, false};
               *dmpValueTemp = strtoul(dmpValue, NULL, 10) ;
            }
            break;

         case DMP_CHANN_AUDIO_MGMT_POLARITY_OFFSET:
         case DMP_CHANN_AUDIO_MGMT_TALK_SWITCH_BATTERY_STATUS_OFFSET:
         case DMP_CHANN_RF_COORDINATED_SWITCH_REQ_OFFSET:
         case DMP_CHANN_RF_TRANSMIT_LEVEL_MODE_OFFSET:
         case DMP_CHANN_SECURITY_ENCRYPTION_MODE_OFFSET:
         case DMP_CHANN_IR_SYNC_START_OFFSET:
         case DMP_CHANN_AUDIO_MGMT_PHANTOM_POWER_OFFSET:
         case DMP_CHANN_AUDIO_MGMT_HIGH_PASS_FILTER_FREQ_OFFSET:
         case DMP_CHANN_NUM_LNKDEV_OFFSET:
         case DMP_CHANN_LINKDEV_STATUS_OFFSET:
            {
               ts = {DMPu1int, 1, false};
               *dmpValueTemp = atoi(dmpValue);
            }
            break;

         case DMP_CHANN_AUDIO_MGMT_TONE_GEN_FREQUENCY_OFFSET:
            {
               ts = {DMPu2int, 2, false};
               *dmpValueTemp = strtoul(dmpValue, NULL, 10) ;
            }
            break;

         case DMP_CHANN_AUDIO_MGMT_COMPATIBILITY_VERSION:
         case DMP_CHANN_RF_PRIMARYFREQ_OFFSET:
         case DMP_CHANN_RF_SECONDARYFREQ_OFFSET:
         case DMP_CHANN_SECURITY_ENCRYPTION_KEY_TAG_OFFSET:
            {
               ts = {DMPu4int, 4, false};
               *dmpValueTemp = strtoul(dmpValue, NULL, 10) ;
            }
            break;

         case DMP_CHANN_LINKDEV_CID(LD_SLOT_1):
            {
               ts = {DMPfixBinOb, 16, false};
            }
            break;


         case DMP_CHANN_SECURITY_ENCRYPTION_SEED_1_A_OFFSET:
         case DMP_CHANN_SECURITY_ENCRYPTION_SEED_1_B_OFFSET:
         case DMP_CHANN_SECURITY_ENCRYPTION_SEED_1_C_OFFSET:
            {
               ts = {DMPfixBinOb, 32, false};
            }
            break;

         default:
            ts = {DMPUnknown, 0, false};
            break;      
        }
      }
     else    // Device DMP
     {
      switch( address )
      {
         case DMP_GEN_MODEL_NAME:
            {
               std::string modelName = dmpValue;
               ts = {DMPvarBinOb, (int)modelName.length(), false};
            }
            break;

         case DMP_BOARD_C_SN:
            {
               std::string serNum = dmpValue;
               ts = {DMPvarBinOb, (int)serNum.length(), false};

            }
            break;

         case DMP_GEN_SERIAL_NUM:
            {
               std::string uID = dmpValue;
               ts = {DMPvarBinOb, (int)uID.length(), false};
            }
            break;

         case DMP_GEN_DEVICE_NAME:
            {
               std::string devName = dmpValue;
               ts = {DMPvarBinOb, (int)devName.length(), false};
            }
            break;

         case DMP_RF_GENERIC_FREQ_BAND_NAME:
            {
               std::string bandName = dmpValue;
               ts = {DMPvarBinOb, (int)bandName.length(), false};
            }
            break;

         case DMP_GENERIC_ALLOWED_TX_POWER_LEVEL:
            {
               std::string txPwrLevel = dmpValue;
               ts = {DMPvarBinOb, (int)txPwrLevel.length(), false};
            }
            break;

         case DMP_PRODUCT_FIRMWARE_VALID:
         case DMP_USER_INTERFACE_BTNHELP:
            {
               ts = {DMPbool, 1, false};
               *dmpValueTemp = atoi(dmpValue);
            }
            break;
         

         case DMP_POWER_SOURCE_BATTERY_VOLTAGE:
            {
               ts = {DMPs2int, 2, false};
               *dmpValueTemp = strtoul(dmpValue, NULL, 10) ;
            }
            break;

         case DMP_BOARD_C_ID:
         case DMP_FRONT_PANEL_LOCK:
         case DMP_GEN_DROP_MARKER:
         case DMP_GEN_FLASH:
         case DMP_GEN_IDENTIFY_FLASH_STATUS:
         case DMP_GEN_REBOOT:
         case DMP_GEN_RESET_TO_FACTORY_DEFAULT:
         case DMP_POWER_SOURCE_BATTERY_BARS:
         case DMP_POWER_SOURCE_BATTERY_CHARGE:
         case DMP_POWER_SOURCE_BATTERY_HEALTH:
         case DMP_POWER_SOURCE_BATTERY_TYPE:
         case DMP_RF_GENERIC_HIGH_DENSITY_MODE:
         case DMP_ZIGBEE_CURRENT_CHANNEL:
         case DMP_ZIGBEE_NUMBER_IFACES:
         case DMP_ZIGBEE_RECEIVED_LINK_QUALITY:
         case DMP_ZIGBEE_RECEIVED_LINK_QUALITY_BARS:
         case DMP_ZIGBEE_TRANSMIT_POWER:
         case DMP_ZIGBEE_TRANSMIT_POWER_MODE:
         case DMP_POWER_SOURCE_STATUS:
         case DMP_POWER_SOURCE_CHARGING_STATUS:  
            {
               ts = {DMPu1int, 1, false};
               *dmpValueTemp = atoi(dmpValue);
            }
            break;

         case DMP_POWER_SOURCE_BATTERY_CAPACITY:
         case DMP_POWER_SOURCE_BATTERY_CYCLE_COUNT:
         case DMP_POWER_SOURCE_BATTERY_MAX_CAPACITY:
         case DMP_POWER_SOURCE_BATTERY_MAX_MFR_CAPACITY:
         case DMP_POWER_SOURCE_BATTERY_MINS:
         case DMP_POWER_SOURCE_BATTERY_TEMP_K:
         case DMP_ZIGBEE_PAN_ID:
         case DMP_POWER_SOURCE_BATTERY_TIME_TO_FULL:
            {
               ts = {DMPu2int, 2, false};
               *dmpValueTemp = strtoul(dmpValue, NULL, 10) ;
            }
            break;

         case DMP_RF_GENERIC_FREQ_BAND_LOWER_LIMIT:
         case DMP_RF_GENERIC_FREQ_BAND_UPPER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_1_LOWER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_1_UPPER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_2_LOWER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_2_UPPER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_3_LOWER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_3_UPPER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_4_LOWER_LIMIT:
         case DMP_RF_GENERIC_FREQ_SUBBAND_4_UPPER_LIMIT:
         case DMP_ACN_INTERFACE_ID:   
            {
               ts = {DMPu4int, 4, false};
               *dmpValueTemp = strtoul(dmpValue, NULL, 10) ;
            }
            break;

         case DMP_ACN_CURRENT_CID:
         case DMP_ACN_CURRENT_DCID:
            {
               ts = {DMPfixBinOb, 16, false};
            }
            break;


         case DMP_PRODUCT_FIRMWARE_VERSION:
         case DMP_ZIGBEE_EUI_64:
            {
               ts = {DMPfixBinOb, 8, false};
            }
            break;

         default:
            ts = {DMPUnknown,0,false};
            break;
      }
     }
   }

   *DmpPayloadSize  = DMPX::CreateDmpMsg( pPackBuffer, vector, address, reinterpret_cast<const uint8_t*>(dmpValueTemp), ts );
   pReturnBuffer = pPackBuffer;
   return pReturnBuffer;
}

const uint8_t* HandleDmpMsg( const uint8_t* pDmpMsg, uint8_t msgSize, uint16_t* DmpPayloadSize )
{
   const uint8_t* pPdu = pDmpMsg;
   const uint8_t* pPduEnd = pDmpMsg + msgSize;
   uint8_t vector;
   DMPAddress address;
   const uint8_t* dmpPayload = NULL;

   while( pPdu < pPduEnd )
   {
      const uint8_t* pInData = NULL;
      uint16_t inDataLen = 0;

      if( DMPX::ParseDmpMsg( pPdu, vector, address, pInData, inDataLen ) )
      {
         switch( vector )
         {
            case DMP_GET_PROPERTY:
            case DMP_SET_PROPERTY:
            case DMP_GET_PROP_REPLY:
               //NRF_LOG_DEBUG("Get the reply vector from remote: %d !", vector);
               // NRF_LOG_DEBUG("Get the reply DMP address: 0x%x", address.GetBaseAddr());
               // NRF_LOG_DEBUG("DMP layload length is %d",inDataLen);
               for( int i = 0; i < inDataLen; i++  )
               {
                  // NRF_LOG_DEBUG("DMP payload data buffer are 0x%x.", pInData[i]); 
                  // NRF_LOG_DEBUG("DMP payload data buffer are %d.", pInData[i]);
               }    
               dmpPayload = pInData;
               *DmpPayloadSize = inDataLen;

               break;

            default:
               // NRF_LOG_DEBUG("Incorrect vector received");
               break;
         }

         // go to the next PDU
         pPdu = pInData + inDataLen;
      }
      else
      {
         pPdu = pPduEnd;
      }
   }
   return dmpPayload;
}

