/***************************************************************************//**
 * @file
 *    Crc16SerialProtocol class definition.
 *
 * @details
 *    None
 *
 * @note
 *    None
 *
 * @warning
 *    None
 *******************************************************************************
 */


#ifndef  ICRC16SERIALPROTOCOL_HPP
#define  ICRC16SERIALPROTOCOL_HPP


#include "Crc16AppProtocol.h"
#include "Crc16IcProtocol.h"


class ICrc16RxMsgRegistry;
class ICrc16FlowCtrl;
class ICrc16SerialProtocolErrorHandling;


class ICrc16SerialProtocol
{
public:
   virtual bool                     SendMsg( Crc16IpPacket_t *msg, bool bSuspend = false ) = 0;
   virtual ICrc16RxMsgRegistry*     GetCrc16RxRegistryInterface( void ) = 0;
   virtual ICrc16FlowCtrl*          GetCrc16FlowCtrlInterface( void ) = 0;
   virtual void                     SetErrorInterface( ICrc16SerialProtocolErrorHandling* pErrorHandler ) = 0;
   
#if ENABLE_CRC16_DIAGNOSTICS
   virtual void                     EnableDiags( bool send, bool receive ) = 0;
#endif

protected:
   virtual ~ICrc16SerialProtocol( ) { }
};

#endif   // ICRC16SERIALPROTOCOL_HPP


