/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpScanDataAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_SCAN_DATA_ADDR_DEFINITIONS_H
#define DMP_SCAN_DATA_ADDR_DEFINITIONS_H


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



// Properties included by mask DMP_SCAN_DATA_ADDR_MASK
#define DMP_SCAN_DATA_ADDR_MASK                               0x1FFFFFFF

#define DMP_SCAN_DATA_BASE_ADDRESS                            0x10000000


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_SCAN_DATA_ADDR_DEFINITIONS_H