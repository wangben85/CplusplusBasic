/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpZigbeeAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_ZIGBEE_ADDR_DEFINITIONS_H
#define DMP_ZIGBEE_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_ZIGBEE_ADDR_MASK
#define DMP_ZIGBEE_ADDR_MASK                                                       0x010200FF

#define DMP_ZIGBEE_NUMBER_IFACES                                                   0x01020000


// Properties included by mask DMP_ZIGBEE_FIRST_IFACE_ADDR_MASK
#define DMP_ZIGBEE_FIRST_IFACE_ADDR_MASK                                           0x010201FF

#define DMP_ZIGBEE_EUI_64                                                          0x01020100
#define DMP_ZIGBEE_PAN_ID                                                          0x01020101
#define DMP_ZIGBEE_ENABLE_NWK                                                      0x01020102
#define DMP_ZIGBEE_CURRENT_CHANNEL_MASK                                            0x01020103
#define DMP_ZIGBEE_CHANNEL_SELECTION_MODE                                          0x01020108
#define DMP_ZIGBEE_CURRENT_CHANNEL                                                 0x01020109
#define DMP_ZIGBEE_MANUAL_CHANNEL                                                  0x0102010A
#define DMP_ZIGBEE_PA_LNA_MODE                                                     0x0102010B
#define DMP_ZIGBEE_TRANSMIT_POWER                                                  0x0102010C
#define DMP_ZIGBEE_TRANSMIT_POWER_MODE                                             0x0102010D
#define DMP_ZIGBEE_RECEIVED_LINK_QUALITY                                           0x01020110
#define DMP_ZIGBEE_RECEIVED_LINK_QUALITY_BARS                                      0x01020111
#define DMP_ZIGBEE_REMOTE_ASSOCIATION_CHANGED                                      0x010201EE
#define DMP_ZIGBEE_ASSOCIATION_CHANGED                                             0x010201EF


// Properties included by mask DMP_ZIGBEE_CALIBRATION_ADDR_MASK
#define DMP_ZIGBEE_CALIBRATION_ADDR_MASK                                           0x010202FF

#define DMP_ZIGBEE_CALIBRATION_COARSE_POWER_LEVELS_LOW                             0x01020200
#define DMP_ZIGBEE_CALIBRATION_FINE_POWER_LEVELS_LOW                               0x01020201
#define DMP_ZIGBEE_CALIBRATION_COARSE_POWER_LEVELS_MID                             0x01020202
#define DMP_ZIGBEE_CALIBRATION_FINE_POWER_LEVELS_MID                               0x01020203
#define DMP_ZIGBEE_CALIBRATION_COARSE_POWER_LEVELS_HIGH                            0x01020204
#define DMP_ZIGBEE_CALIBRATION_FINE_POWER_LEVELS_HIGH                              0x01020205
#define DMP_ZIGBEE_CALIBRATION_COARSE_TEMPERATURE                                  0x01020206
#define DMP_ZIGBEE_CALIBRATION_FINE_TEMPERATURE                                    0x01020207


// Properties included by mask DMP_ZIGBEE_ACN_PROXY_ADDR_MASK
#define DMP_ZIGBEE_ACN_PROXY_ADDR_MASK                                             0x010210FF

#define DMP_ZIGBEE_NUM_ASSOCIATED_DEVICES                                          0x01021000
#define DMP_ZIGBEE_LIST_ASSOCIATED_DEVICES                                         0x01021001
#define DMP_ZIGBEE_MAX_NUMBER_ASSOCIATED_DEVICES                                   0x01021003
#define DMP_ZIGBEE_MODE                                                            0x01021004
#define DMP_ZIGBEE_ALLOWED_MODES                                                   0x01021005
#define DMP_ZIGBEE_ASSOCIATED_COORDINATOR                                          0x0102100A
#define DMP_ZIGBEE_HANDOFF_NOTIFICATION                                            0x01021010
#define DMP_ZIGBEE_ENABLE_CID_PERMISSIONS                                          0x01021020
#define DMP_ZIGBEE_ADD_CID_TO_PERMISSION                                           0x01021021
#define DMP_ZIGBEE_REMOVE_CID_FROM_PERMISSION                                      0x01021022
#define DMP_ZIGBEE_NUM_DEVICE_IN_PERMISSION                                        0x01021023
#define DMP_ZIGBEE_LIST_DEVICE_IN_PERMISSION                                       0x01021024
#define DMP_ZIGBEE_NETWORK_ID_HOST                                                 0x01021025
#define DMP_ZIGBEE_NETWORK_ID_CLIENT                                               0x01021026


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_ZIGBEE_ADDR_DEFINITIONS_H