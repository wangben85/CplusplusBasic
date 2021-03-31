/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpWifiAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_WIFI_ADDR_DEFINITIONS_H
#define DMP_WIFI_ADDR_DEFINITIONS_H


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



// Properties included by mask DMP_NETWORK_WIFI_ADDR_MASK
#define DMP_NETWORK_WIFI_ADDR_MASK                                         0x010A00FF

#define DMP_WIFI_SSID                                                      0x010A0000
#define DMP_WIFI_UPLINK_MCS                                                0x010A0002
#define DMP_WIFI_DOWNLINK_MCS                                              0x010A0003
#define DMP_WIFI_UPLINK_TX_ATTEMPT                                         0x010A0004
#define DMP_WIFI_DOWNLINK_TX_ATTEMPT                                       0x010A0005
#define DMP_WIFI_BROADCAST_MCS                                             0x010A0006
#define DMP_WIFI_CHANNEL_NUMBER                                            0x010A0007
#define DMP_WIFI_PROTOCOL                                                  0x010A0008
#define DMP_WIFI_SUPPORTED_CHANNEL_LIST                                    0x010A0009
#define DMP_WIFI_CHANNEL_BLACKLIST                                         0x010A000A
#define DMP_WIFI_CONNECTION_MODE                                           0x010A000B
#define DMP_WIFI_ACL                                                       0x010A000C
#define DMP_WIFI_ACL_INSERT                                                0x010A000D
#define DMP_WIFI_ACL_REMOVE                                                0x010A000E
#define DMP_WIFI_ACL_CLEAR                                                 0x010A000F
#define DMP_WIFI_DISCONNECT_DEV                                            0x010A0010
#define DMP_WIFI_CONNECTED_DEV_ID                                          0x010A0011
#define DMP_WIFI_BACKUP_CHANNEL                                            0x010A0012
#define DMP_WIFI_NETWORK_STATUS                                            0x010A0013
#define DMP_WIFI_REGULATORY_DOMAIN                                         0x010A0014
#define DMP_WIFI_CONNECT                                                   0x010A0015
#define DMP_WIFI_CONNECT_ERROR                                             0x010A0016
#define DMP_WIFI_CONNECTION_STATUS                                         0x010A0017
#define DMP_WIFI_DISCONNECT                                                0x010A0018
#define DMP_WIFI_AP_FOUND                                                  0x010A0019
#define DMP_WIFI_CHANNEL_ENCRYPTION                                        0x010A001A
#define DMP_WIFI_CONNECTED_SSID                                            0x010A001B
#define DMP_WIFI_LAST_CONNECTED_SSID                                       0x010A001C
#define DMP_WIFI_CONNECTION_DENIED                                         0x010A001D
#define DMP_WIFI_NUM_ALLOWED_WIFI_CH                                       0x010A001E
#define DMP_WIFI_LAST_CONNECTED_BSSID                                      0x010A0020
#define DMP_WIFI_PASSPHRASE                                                0x010A0021
#define DMP_WIFI_APT_SELECTION_MODE                                        0x010A0022
#define DMP_WIFI_PUSH_SSID_LIST                                            0x010A0023
#define DMP_WIFI_RADIO_HW_FAULT                                            0x010A0024
#define DMP_WIFI_CONNECT_TO_SSID                                           0x010A0025


// Properties included by mask DMP_NETWORK_WIFI_AUDIO_ADDR_MASK
#define DMP_NETWORK_WIFI_AUDIO_ADDR_MASK                                   0x010A01FF

#define DMP_WIFI_AUDIO_CONTENTION_WINDOW_LENGTH                            0x010A0100
#define DMP_WIFI_AUDIO_SLOT_OFFSET                                         0x010A0101
#define DMP_WIFI_AUDIO_SLOT_DURATION                                       0x010A0102
#define DMP_WIFI_AUDIO_SLOT                                                0x010A0103


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_WIFI_ADDR_DEFINITIONS_H