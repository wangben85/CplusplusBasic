/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpStatsAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_STATS_ADDR_DEFINITIONS_H
#define DMP_STATS_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_STATS_ADDR_MASK
#define DMP_STATS_ADDR_MASK                                      0x011500FF

#define DMP_STATS_RESET                                          0x01150000
#define DMP_STATS_AUDIO                                          0x01150001
#define DMP_STATS_WIRELESS_RX                                    0x01150002
#define DMP_STATS_WIRELESS_TX                                    0x01150003
#define DMP_STATS_CRASHES                                        0x01150004
#define DMP_STATS_FRAME_TIMING                                   0x01150005
#define DMP_STATS_NUM_UI_TOUCH_EVENTS                            0x01150006


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_STATS_ADDR_DEFINITIONS_H