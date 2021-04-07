/***************************************************************************//**
* @file
*
*     This file contains utilites to convert between link addresses 
*     and their meanings such as channel.
*
* @note    None
*
* @warning None
*******************************************************************************/


#ifndef DMPLINKADDRUTIL_H
#define DMPLINKADDRUTIL_H


#include "DmpAddrUtility.h"


/**
 * @addtogroup DMP_defs    DMP address definitions.
 * @{
 */


#define GetLinkedDevAddress(chan,slot,offset) (GetDmpChannelAddress(chan, offset)+ slot)
// This MACRO only works for up to 16 linked devices according to the current definition 
#define GetLinkedSlot(offset)  static_cast<LinkedSlotNum_t>(offset & 0xf)

#define DMP_CHANN_LINKDEV_CID(slot)     (DMP_CHANN_LINKDEV_CID_OFFSET    + slot)
#define DMP_CHANN_LINKDEV_DCID(slot)    (DMP_CHANN_LINKDEV_DCID_OFFSET   + slot)
#define DMP_CHANN_LINKDEV_STATUS(slot)  (DMP_CHANN_LINKDEV_STATUS_OFFSET + slot)
#define DMP_CHANN_LINKDEV_NAME(slot)    (DMP_CHANN_LINKDEV_NAME_OFFSET   + slot)
#define DMP_CHANN_LINKDEV_TEST(slot)    (DMP_CHANN_LINKDEV_TEST_OFFSET   + slot)
#define DMP_CHANN_LINKDEV_DUAL_CH_STATUS(slot)   (DMP_CHANN_LINKDEV_DUAL_CH_STATUS_OFFSET   + slot)
#define DMP_CHANN_LINKDEV_DUAL_MASTER_CHAN(slot) (DMP_CHANN_LINKDEV_DUAL_MASTER_CHAN_OFFSET + slot)
#define DMP_CHANN_LINKDEV_DUAL_SLAVE_CHAN(slot)  (DMP_CHANN_LINKDEV_DUAL_SLAVE_CHAN_OFFSET  + slot)


#define DMP_CHANN_RF_REGISTERED_TX_CID(slot)    (DMP_CHANN_RF_REGISTERED_TX_CID_OFFSET + slot)
#define DMP_CHANN_RF_REGISTERED_TX_DCID(slot)   (DMP_CHANN_RF_REGISTERED_TX_DCID_OFFSET + slot)
#define DMP_CHANN_RF_REGISTERED_TX_NAME(slot)   (DMP_CHANN_RF_REGISTERED_TX_NAME_OFFSET + slot)



/*! @} */


#endif   // DMPLINKADDRUTIL_H


