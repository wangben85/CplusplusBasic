/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpAntennaAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_ANTENNA_ADDR_DEFINITIONS_H
#define DMP_ANTENNA_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_ANTENNA_GENERIC_ADDR_MASK
#define DMP_ANTENNA_GENERIC_ADDR_MASK                                            0x010704FF

#define DMP_ANTENNA_GENERIC_NUMBER_ANT_SUPPORTED                                 0x01070400
#define DMP_ANTENNA_GENERIC_ANT_CASCADE_MODE                                     0x01070401
#define DMP_ANTENNA_GENERIC_ANT_CASCADE_STATUS                                   0x01070402
#define DMP_ANTENNA_GENERIC_ANT_DC_FAULT_DETECTED                                0x01070404
#define DMP_ANTENNA_GENERIC_ANT_DC_POWER                                         0x01070405
#define DMP_ANTENNA_GENERIC_ANT_DC_FAULT_PORT_A                                  0x01070406
#define DMP_ANTENNA_GENERIC_ANT_DC_FAULT_PORT_B                                  0x01070407
#define DMP_ANTENNA_GENERIC_ANT_DC_FAULT_PORT_C                                  0x01070408
#define DMP_ANTENNA_GENERIC_ANT_DC_FAULT_PORT_D                                  0x01070409
#define DMP_ANTENNA_GENERIC_ANT_A_DISC                                           0x01070410
#define DMP_ANTENNA_GENERIC_ANT_A_MOD_DETECTED                                   0x01070411
#define DMP_ANTENNA_GENERIC_ANT_B_DISC                                           0x01070412
#define DMP_ANTENNA_GENERIC_ANT_B_MOD_DETECTED                                   0x01070413
#define DMP_ANTENNA_GENERIC_ANT_C_DISC                                           0x01070414
#define DMP_ANTENNA_GENERIC_ANT_C_MOD_DETECTED                                   0x01070415
#define DMP_ANTENNA_GENERIC_ANT_D_DISC                                           0x01070416
#define DMP_ANTENNA_GENERIC_ANT_D_MOD_DETECTED                                   0x01070417
#define DMP_ANTENNA_GENERIC_PRESET_NAME                                          0x01070420
#define DMP_ANTENNA_GENERIC_PRESET_RANGE                                         0x01070430
#define DMP_ANTENNA_GENERIC_RANGE                                                0x01070440
#define DMP_ANTENNA_GENERIC_RSSI_OFFSET                                          0x01070460
#define DMP_ANTENNA_GENERIC_DC_POWER_ENABLE                                      0x01070470
#define DMP_ANTENNA_GENERIC_DC_FAULT_DETECTED                                    0x01070480
#define DMP_ANTENNA_GENERIC_SCAN_RANGE                                           0x01070490
#define DMP_ANTENNA_GENERIC_LISTEN_RANGE                                         0x010704A0
#define DMP_ANTENNA_GENERIC_SEND_DISCOVERY_MODULATION                            0x010704B0
#define DMP_ANTENNA_GENERIC_ACTIVE_PRESET                                        0x010704C0
#define DMP_ANTENNA_GENERIC_MODE                                                 0x010704D0
#define DMP_ANTENNA_GENERIC_CURRENT_DRAW                                         0x010704E0
#define DMP_ANTENNA_GENERIC_CONFIG_LOWER_LIMIT                                   0x010704F0
#define DMP_ANTENNA_GENERIC_CONFIG_UPPER_LIMIT                                   0x010704F1
#define DMP_ANTENNA_GENERIC_SCAN_CONSTRAINTS                                     0x010704F2
#define DMP_ANTENNA_GENERIC_LISTEN_CONSTRAINTS                                   0x010704F3
#define DMP_ANTENNA_GENERIC_PAIRED                                               0x010704F4
#define DMP_ANTENNA_GENERIC_TOTAL_CURRENT_DRAW                                   0x010704F5


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_ANTENNA_ADDR_DEFINITIONS_H