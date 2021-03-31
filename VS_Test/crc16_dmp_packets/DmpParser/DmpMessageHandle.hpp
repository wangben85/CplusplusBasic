#ifndef DMP_MESSAGE_HANDLE_HPP
#define DMP_MESSAGE_HANDLE_HPP

#include "DmpChannelAddrDefinitions.h"
#include "DmpGenericAddrDefinitions.h"
#include "DmpAcnAddrDefinitions.h"
#include "DmpGenericAddrDefinitions.h"
#include "DmpPowerSrcAddrDefinitions.h"
#include "DmpRfGenericAddrDefinitions.h"
#include "DmpUserInterfaceAddrDefinitions.h"
#include "DmpZigbeeAddrDefinitions.h"
#include "DmpLinkAddrUtility.h"

#ifdef __cplusplus
extern "C"
{
#endif
typedef enum
{
   LD_SLOT_1 = 0,
   // add additional slots here
   NUM_LINKED_DEV_SLOTS, // MUST be after the last valid slot number
} LinkedSlotNum_t;


const uint8_t* HandleDmpMsg( const uint8_t* pDmpMsg, uint8_t msgSize, uint16_t* DmpPayloadSize );
uint8_t* DmpMsgGenerate( char* dmpValue, uint16_t* DmpPayloadSize, uint32_t address, unsigned char vector);

#ifdef __cplusplus
}        /* extern "C" */
#endif


#endif // DMP_PARSER_HPP

