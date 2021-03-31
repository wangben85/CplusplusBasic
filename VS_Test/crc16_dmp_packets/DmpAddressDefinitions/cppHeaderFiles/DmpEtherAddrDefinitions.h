/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpEtherAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_ETHER_ADDR_DEFINITIONS_H
#define DMP_ETHER_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_ETH_COMMON_ADDR_MASK
#define DMP_ETH_COMMON_ADDR_MASK                                       0x010100FF

#define DMP_ETH_NUMBER_IFACES                                          0x01010000
#define DMP_ETH_NIC_SELECTION                                          0x01010001
#define DMP_ETH_DEVICE_LED_MODE                                        0x01010002
#define DMP_ETH_NIC_LIST                                               0x01010003
#define DMP_ETH_ENABLE                                                 0x0101000A
#define DMP_ETH_RESET_IP_SETTINGS                                      0x0101000F
#define DMP_ETH_PORT_1_LINK_STATUS                                     0x01010010
#define DMP_ETH_PORT_1_LINK_SPEED                                      0x01010011
#define DMP_ETH_PORT_1_LED1_MODE                                       0x01010012
#define DMP_ETH_PORT_1_LED2_MODE                                       0x01010013
#define DMP_ETH_PORT_2_LINK_STATUS                                     0x01010020
#define DMP_ETH_PORT_2_LINK_SPEED                                      0x01010021
#define DMP_ETH_PORT_2_LED1_MODE                                       0x01010022
#define DMP_ETH_PORT_2_LED2_MODE                                       0x01010023
#define DMP_ETH_PORT_3_LINK_STATUS                                     0x01010030
#define DMP_ETH_PORT_3_LINK_SPEED                                      0x01010031
#define DMP_ETH_PORT_3_LED1_MODE                                       0x01010032
#define DMP_ETH_PORT_3_LED2_MODE                                       0x01010033
#define DMP_ETH_PORT_4_LINK_STATUS                                     0x01010040
#define DMP_ETH_PORT_4_LINK_SPEED                                      0x01010041
#define DMP_ETH_PORT_4_LED1_MODE                                       0x01010042
#define DMP_ETH_PORT_4_LED2_MODE                                       0x01010043


// Properties included by mask DMP_ETH_INTERFACE_ADDR_MASK
#define DMP_ETH_INTERFACE_ADDR_MASK                                    0x010101FF

#define DMP_ETH_MAC_48                                                 0x01010100
#define DMP_ETH_IP_MODE                                                0x01010101
#define DMP_ETH_CURRENT_IP_ADDR                                        0x01010102
#define DMP_ETH_CURRENT_IP_SUBNET                                      0x01010103
#define DMP_ETH_CURRENT_IP_GATEWAY                                     0x01010104
#define DMP_ETH_STATIC_IP_ADDR                                         0x01010105
#define DMP_ETH_STATIC_IP_SUBNET                                       0x01010106
#define DMP_ETH_STATIC_IP_GATEWAY                                      0x01010107
#define DMP_ETH_NIC_AVAILABLE                                          0x01010108
#define DMP_ETH_LINK_STATUS                                            0x01010120
#define DMP_ETH_LINK_SPEED                                             0x01010121
#define DMP_ETH_FIND_ALL_COMPLETE                                      0x01010130
#define DMP_ETH_FLASH_ALL_COMPLETE                                     0x01010131
#define DMP_ETH_INTERNAL_STATIC_IP_DATA                                0x010101F0


// Properties included by mask DMP_ETH_IP_SERVICES_ADDR_MASK
#define DMP_ETH_IP_SERVICES_ADDR_MASK                                  0x010102FF

#define DMP_ETH_ENABLE_FTP_SERVICE                                     0x01010201
#define DMP_ETH_ENABLE_TELNET_SHELL_SERVICE                            0x01010202
#define DMP_ETH_ENABLE_CLI_SERVICE                                     0x01010203
#define DMP_ETH_ENABLE_DEBUG_SERVICES                                  0x01010204
#define DMP_ETH_MDNS_SERVICE_ENABLE                                    0x01010205
#define DMP_ETH_MDNS_SERVICE_RUNNING                                   0x01010206
#define DMP_ETH_MDNS_SERVICE_PORT                                      0x01010207
#define DMP_ETH_WEB_SERVICE_ENABLE                                     0x01010208
#define DMP_ETH_WEB_SERVICE_RUNNING                                    0x01010209
#define DMP_ETH_WEB_SERVICE_PORT                                       0x0101020A


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_ETHER_ADDR_DEFINITIONS_H