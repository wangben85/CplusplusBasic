/***************************************************************************//**
* @file     Define RF channel type for use with DMP property addressing.
*
* @note     None
*
* @warning  This file is located in BSP only to be consistent with other projects.
*           The RfChannel_t type is NOT to be used in lower level BSP code. Use
*           BSP::RfCarrier_t when referring to primary or secondary RF carrier.
*******************************************************************************/

#ifndef RFCHANNELDEFINITIONS_H
#define RFCHANNELDEFINITIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************************************************************//**
* This type defines channels for use with DMP channel properties. TX has only
* 1 channel for property addressing. Here, channel refers to concept of
* an "audio" channel with all its associated properties. This has nothing to do
* with frequency diversity nor the number of RF carriers a transmitter may have.
*
* @note     None
*
* @warning  DO NOT use this type where BSP::RfCarrier_t in BspBoardDefs.hpp will
*           suffice.
*******************************************************************************/
typedef enum
{
   RF_CHANNEL_1 = 0,
   NUM_RF_CHANNELS
} RfChannel_t;

#ifdef __cplusplus
}

/***************************************************************************//**
* Prefix unary addition
*
* @param [in]  c        Reference to this type according to C++ standard
*
* @note        None
*
* @warning     None
*******************************************************************************/
inline RfChannel_t & operator++( RfChannel_t &c )
{
   return c = RfChannel_t( c + 1 );
}

#endif

#endif

