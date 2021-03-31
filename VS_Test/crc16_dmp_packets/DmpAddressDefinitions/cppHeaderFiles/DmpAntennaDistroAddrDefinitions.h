/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpAntennaDistroAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_ANTENNA_DISTRO_ADDR_DEFINITIONS_H
#define DMP_ANTENNA_DISTRO_ADDR_DEFINITIONS_H


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

#define DMP_DISTRO_START_FIRMWARE_UPGRADE                               0xF0000000
#define DMP_DISTRO_INTERNAL_SERVICES                                    0xF0000100
#define DMP_DISTRO_BIST_FLASH                                           0xF0001002
#define DMP_DISTRO_QUERY_BOARDID                                        0xF0002000
#define DMP_DISTRO_QUERY_ATE_MODE                                       0xF0002001
#define DMP_DISTRO_QUERY_RESET_STATUS                                   0xF0002002
#define DMP_DISTRO_UNIQUE_PRODUCT_ID                                    0xF0002003
#define DMP_DISTRO_POWER_SWITCH_ENABLE                                  0xF0002004
#define DMP_DISTRO_FAN_TEST_MODE                                        0xF0002005
#define DMP_DISTRO_DC_LED_TEST_MODE                                     0xF0002006
#define DMP_DISTRO_QUERY_ATMEL_UPTIME                                   0xF0002007
#define DMP_DISTRO_CALIB_CERTIFICATION                                  0xF0003000
#define DMP_DISTRO_CALIB_CERT_STATUS                                    0xF0003001
#define DMP_DISTRO_CALIB_ATTENUATION_SAVE                               0xF0003002
#define DMP_DISTRO_CALIB_ATTENUATION_DFLT                               0xF0003003
#define DMP_DISTRO_CALIB_ATTENUATION_ZERO                               0xF0003004
#define DMP_DISTRO_CALIB_ATTENUATION_BASE                               0xF0003080
#define DMP_DISTRO_BAND_INFO                                            0xF0008000
#define DMP_DISTRO_BAND_STRINGS                                         0xF0008001
#define DMP_DISTRO_MODEL                                                0xF0008002
#define DMP_DISTRO_POWER_SWITCH_STATUS                                  0xF0009999


// Properties included by mask DMP_ANTENNA_DISTRO_ADDR_MASK
#define DMP_ANTENNA_DISTRO_ADDR_MASK                                    0x010705FF

#define DMP_ANTENNA_DISTRO_FILTER_BAND                                  0x01070500
#define DMP_ANTENNA_DISTRO_RF_GAIN                                      0x01070502
#define DMP_ANTENNA_DISTRO_FAULT_PORT_A                                 0x01070504
#define DMP_ANTENNA_DISTRO_FAULT_PORT_B                                 0x01070505
#define DMP_ANTENNA_DISTRO_SIG_GEN_PORT_A                               0x01070506
#define DMP_ANTENNA_DISTRO_SIG_GEN_PORT_B                               0x01070507
#define DMP_ANTENNA_DISTRO_SIG_DET_ENABLE                               0x01070508
#define DMP_ANTENNA_DISTRO_SIG_GEN_TEST_MODE                            0x01070509
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_AC                              0x01070510
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_A1                              0x01070511
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_A2                              0x01070512
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_A3                              0x01070513
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_A4                              0x01070514
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_BC                              0x01070520
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_B1                              0x01070521
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_B2                              0x01070522
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_B3                              0x01070523
#define DMP_ANTENNA_DISTRO_SIG_DET_PORT_B4                              0x01070524


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_ANTENNA_DISTRO_ADDR_DEFINITIONS_H