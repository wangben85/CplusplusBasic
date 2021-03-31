/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpNfcAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_NFC_ADDR_DEFINITIONS_H
#define DMP_NFC_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_NFC_MASK
#define DMP_NFC_MASK                                                0x010A10FF

#define DMP_NFC_DEV_DETECTED                                        0x010A1000
#define DMP_NFC_ENABLE                                              0x010A1001
#define DMP_NFC_CARD_DETECTED                                       0x010A1002
#define DMP_NFC_CARD_ERROR                                          0x010A1003
#define DMP_NFC_DATA                                                0x010A1004
#define DMP_NFC_CHIP_CARD_AUTH_LEVEL                                0x010A1005
#define DMP_NFC_CHIP_CARD_LOCATION_ID                               0x010A1006
#define DMP_NFC_CHIP_CARD_REQUIRED                                  0x010A1007
#define DMP_NFC_LOGIN_STATE                                         0x010A1008
#define DMP_NFC_READ_CARD                                           0x010A1009
#define DMP_NFC_REMOVE_CARD                                         0x010A100A
#define DMP_NFC_RETRANSMIT_CARD_DATA                                0x010A100B
#define DMP_NFC_CHIP_CARD_DATA                                      0x010A100C
#define DMP_NFC_HW_FAULT                                            0x010A100D
#define DMP_NFC_CHIP_CARD_IDENTIFICATION                            0x010A100E
#define DMP_NFC_UID                                                 0x010A100F


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_NFC_ADDR_DEFINITIONS_H