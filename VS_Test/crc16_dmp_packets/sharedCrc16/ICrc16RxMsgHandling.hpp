/***************************************************************************//**
 * @file
 *
 * This file contains definition of the IFpMsgCallback and
 * IFpMsgRegistry interface which are used in handling messages
 * recieved from the Front Panel processor.
 *
 * @note
 *    None
 *
 * @warning
 *    None
 ******************************************************************************/


#ifndef ICRC16RXMSGHANDLING_HPP
#define ICRC16RXMSGHANDLING_HPP


#include <stdint.h>


class ICrc16RxMsgCallback
{
public:
   //! Override this function to handle message recieved from Front Panel
   virtual void OnCrc16MsgReceived( uint8_t cmd, uint8_t subCmd, const uint8_t* pPayload, uint8_t payloadSize ) = 0;

protected:
   virtual ~ICrc16RxMsgCallback( ) { }
};


class ICrc16RxMsgRegistry
{
public:
   virtual bool RegisterCrc16RxMsgHandler( uint8_t cmd, uint8_t subCmd, ICrc16RxMsgCallback* pCallback ) = 0;

protected:
   virtual ~ICrc16RxMsgRegistry( ) { }
};


#endif // ICRC16RXMSGHANDLING_HPP


