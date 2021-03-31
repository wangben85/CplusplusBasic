/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpUsbAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_USB_ADDR_DEFINITIONS_H
#define DMP_USB_ADDR_DEFINITIONS_H


/**
 * @addtogroup DMP_defs    DMP address definitions
 * @{
 */


#ifdef __cplusplus
extern "C" {
#endif

// This is now the location of all non-dmp address variable definitions and structures
// that were found in the dmp header files
// @todo remove everything from this file and find an appropriate location
#include "DmpMiscDefinitions.h"




// Properties included by mask DMP_USB_ADDR_MASK
#define DMP_USB_ADDR_MASK                                          0x010220FF

#define DMP_USB_CONNECTION_STATUS                                  0x01022000
#define DMP_USB_RESET_REASON                                       0x01022001
#define DMP_USB_TEST_MODE_ENABLE                                   0x01022002
#define DMP_USB_IN_TOKENS_MISSING_EVENT                            0x01022003
#define DMP_USB_SOF_MISSING_EVENT                                  0x01022004
#define DMP_USB_AUDIO_TERMINAL_TYPE                                0x01022005
#define DMP_USB_NDIS_IP_ADDR                                       0x01022010
#define DMP_USB_NDIS_IP_SUBNET                                     0x01022011
#define DMP_USB_NETWORK_ENABLE                                     0x01022012
#define DMP_USB_MASS_STORAGE_ENABLE                                0x01022020
#define DMP_USB_SERIAL_ENABLE                                      0x01022021
#define DMP_USB_ON_HOOK_STATE                                      0x01022022


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_USB_ADDR_DEFINITIONS_H