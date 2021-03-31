/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpRfSpectrumMetadataAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_RF_SPECTRUM_METADATA_ADDR_DEFINITIONS_H
#define DMP_RF_SPECTRUM_METADATA_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_RF_SPECTRUM_METADATA_ADDR_MASK
#define DMP_RF_SPECTRUM_METADATA_ADDR_MASK                              0x010702FF

#define DMP_SCANNER_ADDR_MAPPING_MODE                                   0x01070200
#define DMP_SCANNER_BASE_FREQ_KHZ                                       0x01070201
#define DMP_SCANNER_FREQ_STEP_KHZ                                       0x01070202
#define DMP_SCANNER_BASE_FREQ_FLOAT_KHZ                                 0x01070203
#define DMP_SCANNER_FREQ_STEP_FLOAT_KHZ                                 0x01070204
#define DMP_SCANNER_NO_SCANNED_VALUE                                    0x01070208
#define DMP_SCANNER_PROP_PER_FREQ                                       0x01070210
#define DMP_SCANNER_CURVE_SIZE                                          0x01070211
#define DMP_SCANNER_NUM_CURVES                                          0x01070212
#define DMP_SCANNER_NUM_SCAN_IDS_PER_CHANNEL                            0x01070213
#define DMP_SCANNER_SUPPORTED_FREQ_STEPS                                0x01070220
#define DMP_SCANNER_SUPPORTED_RES_BW                                    0x01070221
#define DMP_SCANNER_DEFAULT_FREQ_STEP                                   0x01070230
#define DMP_SCANNER_DEFAULT_RES_BW                                      0x01070231
#define DMP_SCANNER_DEFAULT_REPEAT                                      0x01070232
#define DMP_SCANNER_DEFAULT_CURVE_BITMASK                               0x01070233
#define DMP_SCANNER_CURVE_NAME                                          0x01070240


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_RF_SPECTRUM_METADATA_ADDR_DEFINITIONS_H