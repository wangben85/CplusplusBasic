/***************************************************************************//**
 * @file
 *    Header file for sample CRC-16 implementation. 
 *
 * @note    None
 *
 * @warning None
 ******************************************************************************/


#ifndef CRC16_H
#define CRC16_H

#ifdef __ICCAVR__
#include "BspStdTypes.h"
#else
#include <stdint.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif

uint16_t    Crc16( uint16_t crc, uint8_t data8 );

#ifdef __cplusplus
}
#endif

#endif   /* CRC16_H */


