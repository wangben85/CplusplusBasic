/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpChargerAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_CHARGER_ADDR_DEFINITIONS_H
#define DMP_CHARGER_ADDR_DEFINITIONS_H


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

#define DMP_CH_START_FIRMWARE_UPGRADE                                         0xF0000000
#define DMP_CH_DISABLE_BATTERIES                                              0xF0000001
#define DMP_CH_DRAIN_BATTERIES                                                0xF0000002
#define DMP_CH_MIXED_CHARGE_DRAIN_MODE                                        0xF0000003
#define DMP_CH_CHARGER_MODE                                                   0xF0000004
#define DMP_CH_CHARGER_FAKE_MODE                                              0xF0000005
#define DMP_CH_CHARGER_UNSEAL                                                 0xF0000006
#define DMP_CH_INTERNAL_SERVICES                                              0xF0000100
#define DMP_CH_BIST_FLASH                                                     0xF0001002
#define DMP_CH_QUERY_BOARDID                                                  0xF0002000
#define DMP_CH_QUERY_ATE_MODE                                                 0xF0002001
#define DMP_CH_QUERY_RESET_STATUS                                             0xF0002002
#define DMP_CH_QUERY_ATMEL_UPTIME                                             0xF0002003
#define DMP_CH_QUERY_ANALOG_PRESENT                                           0xF0002100
#define DMP_CH_QUERY_ANALOG_CHARGING                                          0xF0002101
#define DMP_CH_QUERY_ANALOG_CHARGED                                           0xF0002102
#define DMP_CH_QUERY_ANALOG_WARM                                              0xF0002103
#define DMP_CH_QUERY_ANALOG_POWER                                             0xF0002104
#define DMP_CH_QUERY_HDQ_BASE                                                 0xF0002200
#define DMP_CH_BATTERY_INFO_BASE                                              0xF0003000


// Properties included by mask DMP_CH_PROPERTY_MASK
#define DMP_CH_PROPERTY_MASK                                                  0x010E00FF

#define DMP_CH_SELECTED_BATTERY                                               0x010E0000
#define DMP_CH_FAN_TEST_MODE                                                  0x010E0001
#define DMP_CH_STORAGE_MODE                                                   0x010E0002
#define DMP_CH_NUM_SLOTS                                                      0x010E0003
#define DMP_CH_MAX_BAYS_PER_SLOT                                              0x010E0004
#define DMP_CH_DISABLE_PHY_STORAGE_BUTTON                                     0x010E0005
#define DMP_CH_SW_BIAS_ERR                                                    0x010E0010
#define DMP_CH_VIN_MONITOR_ERR                                                0x010E0011
#define DMP_CH_MAX_GANGED_SLAVE_UNITS_EXCEEDED_ERR                            0x010E0012


// Properties included by mask DMP_CH_BATTERY_BAY_MASK
#define DMP_CH_BATTERY_BAY_MASK                                               0x010E1FFF

#define DMP_CH_SLOT_TYPE_ID_OFFSET                                            0x010E1000
#define DMP_CH_SLOT_TYPE_NAME_OFFSET                                          0x010E1001
#define DMP_CH_SLOT_BAYS_OFFSET                                               0x010E1002


// Properties included by mask DMP_CH_BATTERY_MASK
#define DMP_CH_BATTERY_MASK                                                   0x010E2FFF

#define DMP_CH_BATT_BATTERY_PRESENT_OFFSET                                    0x010E2000
#define DMP_CH_BATT_TIME_TO_TARGET_OFFSET                                     0x010E2001
#define DMP_CH_BATT_CHARGING_MODE_OFFSET                                      0x010E2002
#define DMP_CH_BATT_CHARGE_STATUS_OFFSET                                      0x010E2003
#define DMP_CH_BATT_CURRENT_CAPACITY_OFFSET                                   0x010E2004
#define DMP_CH_BATT_MAXIMUM_CAPACITY_OFFSET                                   0x010E2005
#define DMP_CH_BATT_CYCLE_COUNT_OFFSET                                        0x010E2006
#define DMP_CH_BATT_BATTERY_TEMP_IN_F_OFFSET                                  0x010E2007
#define DMP_CH_BATT_BATTERY_TEMP_IN_C_OFFSET                                  0x010E2008
#define DMP_CH_BATT_MANUFACTURE_CAPACITY_OFFSET                               0x010E2009
#define DMP_CH_BATT_HEALTH_OFFSET                                             0x010E200A
#define DMP_CH_BATT_CHARGE_BARS_OFFSET                                        0x010E200B
#define DMP_CH_BATT_TYPE_ID_OFFSET                                            0x010E200C
#define DMP_CH_BATT_TYPE_NAME_OFFSET                                          0x010E200D
#define DMP_CH_BATT_CID_OFFSET                                                0x010E200E
#define DMP_CH_BATT_ERRORS_OFFSET                                             0x010E200F


// Properties included by mask DMP_CH_BATTERY_GANG_MASK
#define DMP_CH_BATTERY_GANG_MASK                                              0x010E3FFF

#define DMP_CH_GANG_MODEL_NAME                                                0x010E3000
#define DMP_CH_GANG_MANUFACTURER                                              0x010E3001
#define DMP_CH_GANG_SERIAL_NUM                                                0x010E3002
#define DMP_CH_GANG_FIRMWARE_VERSION                                          0x010E3004
#define DMP_CH_GANG_FIRMWARE_VALID                                            0x010E3005
#define DMP_CH_GANG_TEMPERATURE                                               0x010E3024
#define DMP_CH_GANG_OVER_TEMPERATURE                                          0x010E3028
#define DMP_CH_GANG_UPTIME_STRING                                             0x010E302B
#define DMP_CH_GANG_FIRMWARE_A_VERSION                                        0x010E3070
#define DMP_CH_GANG_FIRMWARE_B_VERSION                                        0x010E3071
#define DMP_CH_GANG_FIRMWARE_K_VERSION                                        0x010E307A
#define DMP_CH_GANG_BOARD_C_SN                                                0x010E30A2
#define DMP_CH_GANG_BOARD_C_ID                                                0x010E30B2


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_CHARGER_ADDR_DEFINITIONS_H