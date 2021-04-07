/***************************************************************************//**
 * @file
 *    Sample CRC-16 implementation optimized for space rather than for time.
 *
 * @details
 *    Local modifications by Norm Bartek to remove unneeded code, to make the
 *    code more portable, to make it reentrant, and to conform to local coding
 *    conventions.
 *
 * @note
 *    See copyright notice below.
 *
 * @warning
 *    None
 ******************************************************************************
 */

//---------------------------------------------------------------------------
// Copyright (C) 1999 Dallas Semiconductor Corporation, All Rights Reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY,  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL DALLAS SEMICONDUCTOR BE LIABLE FOR ANY CLAIM, DAMAGES
// OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//
// Except as contained in this notice, the name of Dallas Semiconductor
// shall not be used except as stated in the Dallas Semiconductor
// Branding Policy.
//---------------------------------------------------------------------------
//
//  MLanTran.C - Transport functions for MicroLAN 1-Wire devices.
//
//  Version: 1.03
//
//

#include "Crc16.h"

#define LOWER_BYTE( x )    ( x & 0xff )
#define UPPER_BYTE( x )    (( x >> 8 ) & 0xff )
#define LOWER_NIBBLE( x )  ( x & 0xf )
#define UPPER_NIBBLE( x )  ( ( x >> 4 ) & 0xf )


static const uint8_t  oddparity[16] =
   { 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0 };


/***************************************************************************//**
 * Calculates a new CRC-16 from the input data byte.
 *
 * @param [in]    crc      caller's saved CRC
 * @param [in]    data8    character to be incorporated into the CRC.
 *
 * @return        Calculated CRC16 value.
 *
 * @note          None.
 *
 * @warning       None.
 ******************************************************************************
 */
uint16_t
Crc16( uint16_t crc, uint8_t data8 )
{
   uint16_t data = (uint16_t) data8;

   data = LOWER_BYTE((data ^ LOWER_BYTE(crc)));
   crc = UPPER_BYTE(crc);

   if ( oddparity[ LOWER_NIBBLE(data) ] ^ oddparity[ UPPER_NIBBLE(data) ] )
   {
      crc ^= 0xc001;
   }

   data <<= 6;
   crc ^= data;
   data <<= 1;
   crc ^= data;

   return crc;
}


