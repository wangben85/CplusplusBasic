/***************************************************************************//**
 * @file
 *
 * This file contains definition of the ICrc16FlowCtrl 
 * interface which are used in implementing software flow control
 *
 * @note
 *    None
 *
 * @warning
 *    None
 ******************************************************************************/


#ifndef I_CRC16_FLOW_CTRL_HPP
#define I_CRC16_FLOW_CTRL_HPP


#include <stdint.h>

class ICrc16FlowCtrl
{
public:
   virtual void XOn( ) = 0;
   virtual void XOff( ) = 0;
protected:
   virtual ~ICrc16FlowCtrl( ) { }
};


#endif // I_CRC16_FLOW_CTRL_HPP


