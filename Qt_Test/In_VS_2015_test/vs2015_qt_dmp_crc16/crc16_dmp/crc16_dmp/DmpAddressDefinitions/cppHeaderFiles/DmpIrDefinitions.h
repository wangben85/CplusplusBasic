/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpIrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_IR_DEFINITIONS_H
#define DMP_IR_DEFINITIONS_H


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



// Properties included by mask DMP_IR_ADDR_MASK
#define DMP_IR_ADDR_MASK                                      0x010400FF

#define DMP_IR_PING_RECEIVED                                  0x01040010
#define DMP_IR_FW_UPGRADE_PROGRESS                            0x01040011
#define DMP_IR_PING_WARNING                                   0x01040012


// Properties included by mask DMP_IR_PROXY_ADDR_MASK
#define DMP_IR_PROXY_ADDR_MASK                                0x010401FF

#define DMP_IR_PROXY_ENABLE                                   0x01040100


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_IR_DEFINITIONS_H