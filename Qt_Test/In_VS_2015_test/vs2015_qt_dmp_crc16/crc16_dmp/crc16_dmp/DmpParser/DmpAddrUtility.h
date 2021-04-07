/***************************************************************************//**
* @file
*
*     This file contains utilites to convert between addresses and their meanings
*     such as channel.
*
* @note    None
*
* @warning None
*******************************************************************************/


#ifndef DMPADDRUTIL_H
#define DMPADDRUTIL_H


#ifdef __ICCAVR__
#include "BspStdTypes.h"
#else
#include <stdint.h>
#endif
#include "RfChannelDefinitions.h"


/**
 * @addtogroup DMP_defs    DMP address definitions.
 * @{
 */


// The address for channel specific properties always starts with 02 (MSB).
// The second most significant byte of the address represents the
// channel number, where '00' is channel 1, '01' is channel 2 and so forth.
#define DMP_CHANNEL_BASED_ADDRESS 0x02000000
#define DMP_CHANNEL_BASED_MASK    0xFF000000

#define DMP_CHANNEL_MASK          0x00FF0000
#define DMP_CHANNEL_SHIFT         16

#define DMP_CHANNEL_OFFSET_MASK   0x0000FFFF

#define DMP_BOXCHAN_BASED_ADDRESS 0x06000000
#define DMP_BOXCHAN_BOX_MASK      0x00F80000
#define DMP_BOXCHAN_BOX_SHIFT     19
#define DMP_BOXCHAN_CHAN_MASK     0x00070000
#define DMP_BOXCHAN_CHAN_SHIFT    16

#ifdef __cplusplus
extern "C" {
#endif


uint8_t  GetDmpChannelOffset( uint32_t dmpAddress, RfChannel_t *channel, uint32_t *offset );
uint32_t GetDmpChannelAddress( RfChannel_t channel, uint32_t offset );
uint8_t  GetDmpBoxChannelOffset( uint32_t dmpAddress, uint32_t *box, RfChannel_t *channel, uint32_t *offset );
uint32_t GetDmpBoxChannelAddress( uint32_t box, RfChannel_t channel, uint32_t offset );

#ifdef __cplusplus
}
#endif


/*! @} */


#endif   // DMPADDRUTIL_H


