/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpSecurity802_1XAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_SECURITY802_1_X_ADDR_DEFINITIONS_H
#define DMP_SECURITY802_1_X_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_SECURITY_802_1X_ADDR_MASK
#define DMP_SECURITY_802_1X_ADDR_MASK                                             0x012003FF

#define DMP_SECURITY_802_1X_ENABLE                                                0x01200300
#define DMP_SECURITY_802_1X_EAP_METHOD                                            0x01200301
#define DMP_SECURITY_802_1X_USERNAME                                              0x01200302
#define DMP_SECURITY_802_1X_PASSWORD                                              0x01200303
#define DMP_SECURITY_802_1X_ANONYMOUS_ID                                          0x01200304
#define DMP_SECURITY_802_1X_RESET                                                 0x01200305
#define DMP_SECURITY_802_1X_RESET_COMPLETE                                        0x01200306
#define DMP_SECURITY_802_1X_CLIENT_CERT_ISSUER                                    0x01200307
#define DMP_SECURITY_802_1X_CLIENT_CERT_DATE                                      0x01200308
#define DMP_SECURITY_802_1X_CLIENT_CERT_EXPIRATION                                0x01200309
#define DMP_SECURITY_802_1X_ROOT_CERT_ISSUER                                      0x01200310
#define DMP_SECURITY_802_1X_ROOT_CERT_DATE                                        0x01200311
#define DMP_SECURITY_802_1X_ROOT_CERT_EXPIRATION                                  0x01200312
#define DMP_SECURITY_802_1X_LAST_AUTHENTICATION_STATUS                            0x01200316
#define DMP_SECURITY_802_1X_COMPLETE                                              0x01200317
#define DMP_SECURITY_802_1X_CLIENT_CERT_FILE                                      0x01200319
#define DMP_SECURITY_802_1X_ROOT_CERT_FILE                                        0x01200320
#define DMP_SECURITY_802_1X_CLEAR_OPTIONAL_SETTINGS                               0x01200321


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_SECURITY802_1_X_ADDR_DEFINITIONS_H