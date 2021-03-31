/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpSwUpdateAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_SW_UPDATE_ADDR_DEFINITIONS_H
#define DMP_SW_UPDATE_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_SW_UPDATE_ADDR_MASK
#define DMP_SW_UPDATE_ADDR_MASK                                                    0x011201FF

#define DMP_SW_UPDATE_UPDATE_STATE                                                 0x01120104
#define DMP_SW_UPDATE_UPDATE_COMMAND                                               0x01120106
#define DMP_SW_UPDATE_UPDATE_COMMAND_ERROR_STR                                     0x01120107
#define DMP_SW_UPDATE_UPDATE_STATE_ERROR_STR                                       0x01120108
#define DMP_SW_UPDATE_RESERVING_CONTROLLER                                         0x01120109
#define DMP_SW_UPDATE_PROXIED_DEVICE_LIST                                          0x0112010A
#define DMP_SW_UPDATE_CHECK_FOR_UPDATES                                            0x0112010B
#define DMP_SW_UPDATE_IS_UPDATE_AVAILABLE                                          0x0112010C
#define DMP_SW_UPDATE_RELEASE_NOTE_URL                                             0x0112010D
#define DMP_SW_UPDATE_LATEST_VERSION_AVAILABLE                                     0x0112010E
#define DMP_SW_UPDATE_NUM_PROXIED_DEV_IDX                                          0x0112010F
#define DMP_SW_UPDATE_CLEAR_PROXIED_DEVICE_IDS                                     0x01120110
#define DMP_SW_UPDATE_APPEND_PROXIED_DEVICE_ID                                     0x01120111
#define DMP_SW_UPDATE_NUM_PACKAGE_URL_IDX                                          0x01120112
#define DMP_SW_UPDATE_CLEAR_PACKAGE_URLS                                           0x01120113
#define DMP_SW_UPDATE_APPEND_PACKAGE_URL                                           0x01120114
#define DMP_SW_UPDATE_OVERALL_PACKAGE_DOWNLOAD_PROGRESS                            0x01120115
#define DMP_SW_UPDATE_OVERALL_PACKAGE_INSTALL_PROGRESS                             0x01120116


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_SW_UPDATE_ADDR_DEFINITIONS_H