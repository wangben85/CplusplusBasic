/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpFwUpdateAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_FW_UPDATE_ADDR_DEFINITIONS_H
#define DMP_FW_UPDATE_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_HOSTED_FW_UPDATE_ADDR_MASK
#define DMP_HOSTED_FW_UPDATE_ADDR_MASK                                        0x011200FF

#define DMP_HOSTED_FW_UPDATE_FW_UPDATE_ACTIVE                                 0x01120000
#define DMP_HOSTED_FW_UPDATE_SHUTDOWN_ON_COMPLETE                             0x01120002
#define DMP_HOSTED_FW_UPDATE_FORCE_UPDATE                                     0x01120003
#define DMP_HOSTED_FW_UPDATE_NUM_FW_UPDATE                                    0x01120004
#define DMP_HOSTED_FW_UPDATE_REQUEST_DEVICE_SET                               0x01120005
#define DMP_HOSTED_FW_UPDATE_DOWNLOAD_STATUS                                  0x01120008
#define DMP_HOSTED_FW_UPDATE_IMAGE_WRITE_STATUS                               0x01120009
#define DMP_HOSTED_FW_UPDATE_CLEAR_RESULTS                                    0x0112000A
#define DMP_HOSTED_FW_UPDATE_COMMISSIONING_PACKAGE                            0x0112000B


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_FW_UPDATE_ADDR_DEFINITIONS_H