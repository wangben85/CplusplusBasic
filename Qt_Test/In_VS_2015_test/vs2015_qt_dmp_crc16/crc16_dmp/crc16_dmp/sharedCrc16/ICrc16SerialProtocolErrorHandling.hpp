/***************************************************************************//**
 * @file
 *
 * Provides an abstracted error handling interface for Crc16SerialProtocol.
 *
 * @note
 *    None
 *
 * @warning
 *    None
 ******************************************************************************
 */


#ifndef  ICRC16SERIALPROTOCOLERRORHANDLING_HPP
#define  ICRC16SERIALPROTOCOLERRORHANDLING_HPP


#include <stdint.h>
#include "Crc16IcProtocol.h"
#include "Crc16IcPacket.h"


/**
 * @addtogroup BSP_Module
 * @{
 *    @addtogroup Device_Drivers
 *    @{
 */


class ICrc16SerialProtocolErrorHandling
{
public:
   virtual void OnSendMsgError( const Crc16IpPacket_t* pPacket ) = 0;
   virtual void OnSendPacketError( const Crc16IpPacket_t* pPacket ) = 0;
   virtual void OnReceivePacketError( const Crc16IpStateMachine_t* pSm ) = 0;
   virtual void OnNoHandlerRegistered( uint8_t cmd, uint8_t subCmd ) = 0;

protected:
   ~ICrc16SerialProtocolErrorHandling( ) {}
};


/*! @} */
/*! @} */

#endif   // ICRC16SERIALPROTOCOLERRORHANDLING_HPP


