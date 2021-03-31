/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpPowerSrcAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_POWER_SRC_ADDR_DEFINITIONS_H
#define DMP_POWER_SRC_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_POWER_SOURCE_ADDR_MASK
#define DMP_POWER_SOURCE_ADDR_MASK                                              0x010F00FF

#define DMP_POWER_SOURCE_OPTIONS                                                0x010F0000
#define DMP_POWER_SOURCE_STATUS                                                 0x010F0001
#define DMP_POWER_SOURCE_BATTERY_TYPE                                           0x010F0002
#define DMP_POWER_SOURCE_BATTERY_BARS                                           0x010F0003
#define DMP_POWER_SOURCE_BATTERY_MINS                                           0x010F0004
#define DMP_POWER_SOURCE_BATTERY_VOLTAGE                                        0x010F0005
#define DMP_POWER_SOURCE_BATTERY_CYCLE_COUNT                                    0x010F0006
#define DMP_POWER_SOURCE_BATTERY_TIME_TO_FULL                                   0x010F0007
#define DMP_POWER_SOURCE_BATTERY_CAPACITY                                       0x010F0008
#define DMP_POWER_SOURCE_BATTERY_HEALTH                                         0x010F0009
#define DMP_POWER_SOURCE_ON_CHARGER                                             0x010F000A
#define DMP_POWER_SOURCE_BATTERY_POWER                                          0x010F000B
#define DMP_POWER_SOURCE_BATTERY_CURRENT                                        0x010F000C
#define DMP_POWER_SOURCE_BATTERY_CHARGE                                         0x010F000D
#define DMP_POWER_SOURCE_BATTERY_TEMP_K                                         0x010F000E
#define DMP_POWER_SOURCE_BATTERY_MAX_CAPACITY                                   0x010F000F
#define DMP_POWER_SOURCE_BATTERY_MAX_MFR_CAPACITY                               0x010F0010
#define DMP_POWER_SOURCE_AA_BATT_TYPE_PREFERENCE                                0x010F0011
#define DMP_POWER_SOURCE_DISCONNECT                                             0x010F0012
#define DMP_POWER_SOURCE_USB_ONLY                                               0x010F0013
#define DMP_POWER_SOURCE_CHARGING_ONLY                                          0x010F0014
#define DMP_POWER_SOURCE_BATTERY_AUTHENTICATED                                  0x010F0015
#define DMP_POWER_SOURCE_INSUFFICIENT_EXTERNAL_POWER                            0x010F0016
#define DMP_POWER_SOURCE_CHARGING_STATUS                                        0x010F0017
#define DMP_POWER_SOURCE_POE_SOURCE_TYPE                                        0x010F0020
#define DMP_POWER_SOURCE_BATTERY_SLED_DETECTED                                  0x010F0021
#define DMP_POWER_SOURCE_LOW_VOLTAGE_ALERT_CONTROL                              0x010F0022
#define DMP_POWER_SOURCE_LOW_VOLTAGE_ALERT_THRESHOLD                            0x010F0023
#define DMP_POWER_SOURCE_LOW_VOLTAGE_ALERT_TRIGGERED                            0x010F0024
#define DMP_POWER_SOURCE_BATTERY_HIGH_TEMP_ALERT                                0x010F0025


// Properties included by mask DMP_POWER_SOURCE_EXT_ADDR_MASK
#define DMP_POWER_SOURCE_EXT_ADDR_MASK                                          0x010F01FF

#define DMP_POWER_SOURCE_EXT_DC_STATUS                                          0x010F0100
#define DMP_POWER_SOURCE_EXT_DC_TEMP_C                                          0x010F0101
#define DMP_POWER_SOURCE_EXT_DC_TEMP_F                                          0x010F0102


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_POWER_SRC_ADDR_DEFINITIONS_H