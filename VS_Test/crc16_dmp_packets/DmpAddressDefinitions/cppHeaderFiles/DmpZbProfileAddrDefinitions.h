/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpZbProfileAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_ZB_PROFILE_ADDR_DEFINITIONS_H
#define DMP_ZB_PROFILE_ADDR_DEFINITIONS_H


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



// Properties included by mask DMP_ZIGBEE_PROFILE_ADDR_MASK
#define DMP_ZIGBEE_PROFILE_ADDR_MASK                          0x0001FFFF

#define DMP_ENABLE_PROFILE_MODE                               0x00010000
#define DMP_UPSTREAM_TEST_PROP                                0x00010100
#define DMP_UPSTREAM_TEST_SIZE                                0x00010101
#define DMP_UPSTREAM_TEST_NUMBER                              0x00010102
#define DMP_UPSTREAM_TEST_INTERVAL                            0x00010103
#define DMP_DOWNSTREAM_TEST_PROP                              0x00010200
#define DMP_DOWNSTREAM_TEST_SIZE                              0x00010201


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_ZB_PROFILE_ADDR_DEFINITIONS_H