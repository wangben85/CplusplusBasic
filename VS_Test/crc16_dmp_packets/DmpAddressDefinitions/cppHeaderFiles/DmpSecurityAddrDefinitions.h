/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpSecurityAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_SECURITY_ADDR_DEFINITIONS_H
#define DMP_SECURITY_ADDR_DEFINITIONS_H


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



// Properties included by mask DMP_SECURITY_ADDR_MASK
#define DMP_SECURITY_ADDR_MASK                                                  0x012000FF

#define DMP_SECURITY_RX_ENCRYPTION_CONTROL                                      0x01200000
#define DMP_SECURITY_RX_REGENERATE_KEYS                                         0x01200001
#define DMP_SECURITY_NETWORK_LOCK_CONTROL                                       0x01200010
#define DMP_SECURITY_NETWORK_LOCK_STATUS                                        0x01200011
#define DMP_SECURITY_NETWORK_LOCK_PIN_LOGIN                                     0x01200012
#define DMP_SECURITY_NETWORK_LOCK_PIN_CHANGE                                    0x01200013
#define DMP_SECURITY_NETWORK_LOCK_PIN_CLEAR                                     0x01200014
#define DMP_SECURITY_NETWORK_LOCK_PIN_LOGOUT                                    0x01200015
#define DMP_SECURITY_SESSION_EXCHANGE_A                                         0x01200020
#define DMP_SECURITY_SESSION_EXCHANGE_B                                         0x01200021
#define DMP_SECURITY_SESSION_GENERATE_KEY                                       0x01200022
#define DMP_SECURITY_SESSION_KEY_STATUS                                         0x01200023
#define DMP_SECURITY_SESSION_MODULUS                                            0x01200024
#define DMP_SECURITY_SESSION_BIT_SIZE                                           0x01200025
#define DMP_SECURITY_NWK_AUDIO_CIPHER_PASSPHRASE                                0x01200030
#define DMP_SECURITY_NWK_AUDIO_CIPHER_PASSPHRASE_SET                            0x01200031
#define DMP_SECURITY_NWK_AUDIO_CIPHER_MODE                                      0x01200032


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_SECURITY_ADDR_DEFINITIONS_H