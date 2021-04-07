/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpUserPresetsAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_USER_PRESETS_ADDR_DEFINITIONS_H
#define DMP_USER_PRESETS_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_USER_PRESETS_SAVE_MASK
#define DMP_USER_PRESETS_SAVE_MASK                                          0x010002FF

#define DMP_USER_PRESETS_SAVE_OFFSET                                        0x01000200


// Properties included by mask DMP_USER_PRESETS_RESTORE_MASK
#define DMP_USER_PRESETS_RESTORE_MASK                                       0x010003FF

#define DMP_USER_PRESETS_RESTORE_OFFSET                                     0x01000300


// Properties included by mask DMP_USER_PRESETS_NAME_MASK
#define DMP_USER_PRESETS_NAME_MASK                                          0x010004FF

#define DMP_USER_PRESETS_NAME_OFFSET                                        0x01000400


// Properties included by mask DMP_USER_PRESETS_MASK
#define DMP_USER_PRESETS_MASK                                               0x010005FF

#define DMP_USER_PRESETS_MAX_NUM                                            0x01000500
#define DMP_USER_PRESETS_ACTIVE_PRESET                                      0x01000501
#define DMP_USER_PRESETS_IMPORT_START                                       0x01000502
#define DMP_USER_PRESETS_IMPORT_END                                         0x01000503
#define DMP_USER_PRESETS_EXPORT_START                                       0x01000504
#define DMP_USER_PRESETS_EXPORT_END                                         0x01000505


// Properties included by mask DMP_USER_PRESETS_STATUS_MASK
#define DMP_USER_PRESETS_STATUS_MASK                                        0x010006FF

#define DMP_USER_PRESETS_STATUS_OFFSET                                      0x01000600


// Properties included by mask DMP_USER_PRESETS_TIMESTAMP_MASK
#define DMP_USER_PRESETS_TIMESTAMP_MASK                                     0x010007FF

#define DMP_USER_PRESETS_TIMESTAMP_OFFSET                                   0x01000700


// Properties included by mask DMP_USER_PRESETS_CLEAR_MASK
#define DMP_USER_PRESETS_CLEAR_MASK                                         0x010008FF

#define DMP_USER_PRESETS_CLEAR_OFFSET                                       0x01000800


// Properties included by mask DMP_USER_PRESETS_FIRMWARE_VERSION_MASK
#define DMP_USER_PRESETS_FIRMWARE_VERSION_MASK                              0x010009FF

#define DMP_USER_PRESETS_FIRMWARE_VERSION_OFFSET                            0x01000900


// Properties included by mask DMP_TEMPLATES_SAVE_MASK
#define DMP_TEMPLATES_SAVE_MASK                                             0x010012FF

#define DMP_TEMPLATES_SAVE_OFFSET                                           0x01001200


// Properties included by mask DMP_TEMPLATES_RESTORE_MASK
#define DMP_TEMPLATES_RESTORE_MASK                                          0x010013FF

#define DMP_TEMPLATES_RESTORE_OFFSET                                        0x01001300


// Properties included by mask DMP_TEMPLATES_NAME_MASK
#define DMP_TEMPLATES_NAME_MASK                                             0x010014FF

#define DMP_TEMPLATES_NAME_OFFSET                                           0x01001400


// Properties included by mask DMP_TEMPLATES_MASK
#define DMP_TEMPLATES_MASK                                                  0x010015FF

#define DMP_TEMPLATES_MAX_NUM                                               0x01001500
#define DMP_TEMPLATES_ACTIVE_PRESET                                         0x01001501


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_USER_PRESETS_ADDR_DEFINITIONS_H