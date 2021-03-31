/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpRfGenericAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_RF_GENERIC_ADDR_DEFINITIONS_H
#define DMP_RF_GENERIC_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_RF_GENERIC_ADDR_MASK
#define DMP_RF_GENERIC_ADDR_MASK                                                 0x010700FF

#define DMP_RF_GENERIC_FREQ_BAND                                                 0x01070000
#define DMP_RF_GENERIC_FREQ_BAND_LOWER_LIMIT                                     0x01070001
#define DMP_RF_GENERIC_FREQ_BAND_UPPER_LIMIT                                     0x01070002
#define DMP_RF_GENERIC_FREQ_BAND_NAME                                            0x01070003
#define DMP_RF_GENERIC_HIGH_DENSITY_MODE                                         0x01070004
#define DMP_RF_GENERIC_TV_SPACING_MODE                                           0x01070005
#define DMP_RF_GENERIC_INTERFERENCE_MODE                                         0x01070006
#define DMP_RF_GENERIC_QUADVERSITY_MODE                                          0x01070009
#define DMP_RF_GENERIC_MUTE_ALL_FREQS                                            0x0107000A
#define DMP_RF_GENERIC_FREQ_SUBBAND_1_LOWER_LIMIT                                0x01070020
#define DMP_RF_GENERIC_FREQ_SUBBAND_1_UPPER_LIMIT                                0x01070021
#define DMP_RF_GENERIC_FREQ_SUBBAND_2_LOWER_LIMIT                                0x01070022
#define DMP_RF_GENERIC_FREQ_SUBBAND_2_UPPER_LIMIT                                0x01070023
#define DMP_RF_GENERIC_FREQ_SUBBAND_3_LOWER_LIMIT                                0x01070024
#define DMP_RF_GENERIC_FREQ_SUBBAND_3_UPPER_LIMIT                                0x01070025
#define DMP_RF_GENERIC_FREQ_SUBBAND_4_LOWER_LIMIT                                0x01070026
#define DMP_RF_GENERIC_FREQ_SUBBAND_4_UPPER_LIMIT                                0x01070027
#define DMP_RF_GENERIC_FREQ_SUBBAND_LIMIT_NAME                                   0x01070028
#define DMP_RF_GENERIC_SYNTH_CTRL_REQUEST                                        0x01070030
#define DMP_RF_GENERIC_SYNTH_CTRL_GRANTED                                        0x01070031
#define DMP_RF_GENERIC_SYNTH_CTRL_RELEASE                                        0x01070033
#define DMP_RF_GENERIC_SYNTH_RELEASE_CONFIRM                                     0x01070034
#define DMP_RF_GENERIC_SYNTH_IDLE                                                0x01070035
#define DMP_RF_GENERIC_FREQ_DIVERSITY_MODE                                       0x01070040
#define DMP_RF_GENERIC_FD2_BAILOUT_MODE                                          0x01070041
#define DMP_RF_GENERIC_FE_POWER_OVERLOAD_ANT_A                                   0x01070042
#define DMP_RF_GENERIC_FE_POWER_OVERLOAD_ANT_B                                   0x01070043
#define DMP_RF_GENERIC_FE_POWER_OVERLOAD_ANT_C                                   0x01070044
#define DMP_RF_GENERIC_FE_POWER_OVERLOAD_ANT_D                                   0x01070045
#define DMP_RF_GENERIC_FE_POWER_LIMITER_ENGAGED_ANT_A                            0x0107004A
#define DMP_RF_GENERIC_FE_POWER_LIMITER_ENGAGED_ANT_B                            0x0107004B
#define DMP_RF_GENERIC_FE_POWER_LIMITER_ENGAGED_ANT_C                            0x0107004C
#define DMP_RF_GENERIC_FE_POWER_LIMITER_ENGAGED_ANT_D                            0x0107004D
#define DMP_GENERIC_AUDIO_MGMT_CALIBRATION_MODE                                  0x01070050
#define DMP_GENERIC_AUDIO_MGMT_CALIBRATION_RESP                                  0x01070051
#define DMP_GENERIC_ALLOWED_TX_POWER_LEVEL                                       0x01070060
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_0                                           0x01070070
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_1                                           0x01070071
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_2                                           0x01070072
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_3                                           0x01070073
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_4                                           0x01070074
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_5                                           0x01070075
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_6                                           0x01070076
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_7                                           0x01070077
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_8                                           0x01070078
#define DMP_GENERIC_RFMUTE_LOG_ENTRY_9                                           0x01070079
#define DMP_RF_GENERIC_RSSI_CALIBRATED                                           0x01070080
#define DMP_RF_GENERIC_RSSI_CAL_VERSION                                          0x01070081
#define DMP_RF_GENERIC_RSSI_PRE_CAL_TEMPERATURE                                  0x01070082
#define DMP_RF_GENERIC_RSSI_POST_CAL_TEMPERATURE                                 0x01070083
#define DMP_RF_GENERIC_RSSI_CAL_ATTENUATORS                                      0x01070084
#define DMP_RF_GENERIC_RSSI_NF_TABLE_TEMPERATURE                                 0x01070085


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_RF_GENERIC_ADDR_DEFINITIONS_H