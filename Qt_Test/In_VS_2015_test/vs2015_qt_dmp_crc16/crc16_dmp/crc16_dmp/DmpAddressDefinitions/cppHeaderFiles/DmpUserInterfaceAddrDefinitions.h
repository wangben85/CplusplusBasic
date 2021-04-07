/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpUserInterfaceAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_USER_INTERFACE_ADDR_DEFINITIONS_H
#define DMP_USER_INTERFACE_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_FRONT_PANEL_GENERIC_ADDR_MASK
#define DMP_FRONT_PANEL_GENERIC_ADDR_MASK                                          0x010C00FF

#define DMP_USER_INTERFACE_LCD_BRIGHTNESS                                          0x010C0001
#define DMP_FRONT_PANEL_INVERT                                                     0x010C0002
#define DMP_FRONT_PANEL_LCD_CONTRAST                                               0x010C0003
#define DMP_USER_INTERFACE_NO_LIGHTS_MODE_ENABLE                                   0x010C0004
#define DMP_FRONT_PANEL_DISPLAY_MODE                                               0x010C0005
#define DMP_FRONT_PANEL_MIXER_MODE                                                 0x010C0006
#define DMP_FRONT_PANEL_GAIN_LIMITER_MODE                                          0x010C0007
#define DMP_USER_SELECTED_CHANNEL                                                  0x010C0008
#define DMP_USER_INTERFACE_POTENTIOMETER_LEVEL                                     0x010C0009
#define DMP_USER_INTERFACE_CHANNEL_SELECTOR_WRAP_ENABLE                            0x010C000A
#define DMP_USER_INTERFACE_SCREEN_THEME                                            0x010C000B
#define DMP_HARDWARE_LOCKOUT_LOCK                                                  0x010C000E
#define DMP_BACK_PANEL_LOCK                                                        0x010C000F
#define DMP_FRONT_PANEL_LOCK                                                       0x010C0010
#define DMP_FRONT_PANEL_AUDIO_GAIN_LOCK                                            0x010C0011
#define DMP_FRONT_PANEL_SYNC_SCAN_LOCK                                             0x010C0012
#define DMP_USER_INTERFACE_TECH_MENU_LOCK                                          0x010C0013
#define DMP_USER_INTERFACE_TECH_MENU_ACTIVE                                        0x010C0014
#define DMP_FRONT_PANEL_SYNC_LOCK                                                  0x010C0015
#define DMP_FRONT_PANEL_SCAN_LOCK                                                  0x010C0016
#define DMP_FRONT_PANEL_USER_EVENT                                                 0x010C0020
#define DMP_FRONT_PANEL_SINGLE_CHAN_HOME_INFO                                      0x010C0031
#define DMP_FRONT_PANEL_MULTI_CHAN_HOME_INFO                                       0x010C0032
#define DMP_FRONT_PANEL_DEVICE_HOME_OPTION                                         0x010C0033
#define DMP_FRONT_PANEL_CHANNEL_HOME_OPTION                                        0x010C0034
#define DMP_FRONT_PANEL_IR_SYNC_REQUEST_INFO                                       0x010C0040
#define DMP_LED_DIM_LEVEL                                                          0x010C0042
#define DMP_USER_INTERFACE_MUTE_LED_CURRENT_MODE                                   0x010C0043
#define DMP_USER_INTERFACE_LED_COLOR_UNMUTED                                       0x010C0044
#define DMP_USER_INTERFACE_LED_BLINK_MODE_UNMUTED                                  0x010C0045
#define DMP_USER_INTERFACE_LED_COLOR_MUTED                                         0x010C0046
#define DMP_USER_INTERFACE_LED_BLINK_MODE_MUTED                                    0x010C0047
#define DMP_USER_INTERFACE_LED_CONTROL_SOURCE                                      0x010C0048
#define DMP_USER_INTERFACE_LED_RING_MODE                                           0x010C0049
#define DMP_USER_INTERFACE_MUTE_LED_ENABLE                                         0x010C004A
#define DMP_USER_INTERFACE_MUTE_LED_CURRENT_COLOR                                  0x010C004B
#define DMP_USER_INTERFACE_MUTE_LED_CURRENT_STATE                                  0x010C004C
#define DMP_USER_INTERFACE_LED_IN_ENABLE                                           0x010C004D
#define DMP_USER_INTERFACE_LED_IN                                                  0x010C004E
#define DMP_USER_INTERFACE_LED_COLOR_GATED_OFF                                     0x010C004F
#define DMP_USER_INTERFACE_BUTTON_PRESS                                            0x010C0050
#define DMP_USER_INTERFACE_BUTTON_RELEASE                                          0x010C0051
#define DMP_USER_INTERFACE_ROTARY_TURN                                             0x010C0052
#define DMP_USER_INTERFACE_MUTE_BUTTON_ENABLE                                      0x010C0060
#define DMP_USER_INTERFACE_MUTE_BUTTON_MODE                                        0x010C0061
#define DMP_USER_INTERFACE_MUTE_BUTTON_LED_STATUS                                  0x010C0062
#define DMP_USER_INTERFACE_MUTE_BUTTON_STATUS                                      0x010C0063
#define DMP_USER_INTERFACE_MUTE_BUTTON_LOCAL                                       0x010C0064
#define DMP_USER_INTERFACE_MUTE_BUTTON_EXTERNAL                                    0x010C0065
#define DMP_USER_INTERFACE_ENHANCED_BATTERY_WARNING                                0x010C0066
#define DMP_USER_INTERFACE_BUTTON_CONFIG                                           0x010C0067
#define DMP_USER_INTERFACE_MUTE_SWITCH_BEHAV                                       0x010C0068
#define DMP_USER_INTERFACE_SPEAK_SWITCH_BEHAV                                      0x010C0069
#define DMP_USER_INTERFACE_LED_BEHAVIOR                                            0x010C006A
#define DMP_USER_INTERFACE_ROTARY_TURN_A                                           0x010C006C
#define DMP_USER_INTERFACE_ROTARY_TURN_B                                           0x010C006D
#define DMP_USER_INTERFACE_ETH_STATUS_LED_ENABLE                                   0x010C0070
#define DMP_FRONT_PANEL_POWER_LED_COLOR                                            0x010C0071
#define DMP_FRONT_PANEL_POWER_LED_STATE                                            0x010C0072
#define DMP_FRONT_PANEL_NETWORK_LED_COLOR                                          0x010C0073
#define DMP_FRONT_PANEL_NETWORK_LED_STATE                                          0x010C0074
#define DMP_FRONT_PANEL_NETWORK_AUDIO_LED_COLOR                                    0x010C0075
#define DMP_FRONT_PANEL_NETWORK_AUDIO_LED_STATE                                    0x010C0076
#define DMP_FRONT_PANEL_ENCRYPTION_LED_COLOR                                       0x010C0077
#define DMP_FRONT_PANEL_ENCRYPTION_LED_STATE                                       0x010C0078
#define DMP_FRONT_PANEL_USB_LED_COLOR                                              0x010C0079
#define DMP_FRONT_PANEL_USB_LED_STATE                                              0x010C007A
#define DMP_USER_INTERFACE_ON_HOOK_STATE                                           0x010C007B
#define DMP_USER_INTERFACE_ON_HOOK_ENABLE                                          0x010C007C
#define DMP_FRONT_PANEL_TECH_MENU_ENABLE                                           0x010C0080
#define DMP_FRONT_PANEL_LCD_MODE                                                   0x010C0081
#define DMP_TOUCH_CONTROLLER_HW_FAULT                                              0x010C0082
#define DMP_USER_INTERFACE_SIMULATE_TOUCH_EVENT                                    0x010C0083
#define DMP_USER_INTERFACE_BTNHELP                                                 0x010C0084
#define DMP_USER_ON_UI_ACTIVITY                                                    0x010C0085
#define DMP_UI_AUTO_LOCK                                                           0x010C0086
#define DMP_FRONT_PANEL_LED_DEFEAT_MODE                                            0x010C0087


// Properties included by mask DMP_USER_INTERFACE_REMOTE_GUI_ADDR_MASK
#define DMP_USER_INTERFACE_REMOTE_GUI_ADDR_MASK                                    0x010C02FF

#define DMP_USER_INTERFACE_CURRENT_LANGUAGE                                        0x010C0200
#define DMP_USER_INTERFACE_DEFAULT_LANGUAGE                                        0x010C0201
#define DMP_USER_INTERFACE_UNITS_OF_MEASUREMENT                                    0x010C0202
#define DMP_USER_INTERFACE_FLEX_KEEP_ALIVE                                         0x010C0210


// Properties included by mask DMP_USER_INTERFACE_ATE_TEST_ADDR_MASK
#define DMP_USER_INTERFACE_ATE_TEST_ADDR_MASK                                      0x010C03FF

#define DMP_USER_INTERFACE_TEST_LCD_BACKLIGHT                                      0x010C0301
#define DMP_USER_INTERFACE_TEST_BUTTON_LIGHTS                                      0x010C0302
#define DMP_USER_INTERFACE_TEST_BAY_LIGHTS                                         0x010C0308
#define DMP_USER_INTERFACE_TEST_LCD_PATTERN                                        0x010C0310
#define DMP_USER_INTERFACE_TEST_BATTERY_BAY_PATTERN                                0x010C0321
#define DMP_USER_INTERFACE_TEST_INPUT_MODE                                         0x010C0340
#define DMP_USER_INTERFACE_TEST_BUTTON_RELEASE                                     0x010C0342
#define DMP_USER_INTERFACE_TEST_BUTTON_SIMULATE                                    0x010C0350
#define DMP_USER_INTERFACE_TEST_PROXY_CONNECT                                      0x010C0360
#define DMP_USER_INTERFACE_TEST_PROXY_REFRESH                                      0x010C0361
#define DMP_USER_INTERFACE_TEST_PROXY_INFO                                         0x010C0362
#define DMP_USER_INTERFACE_TEST_DIAGNOSTICS                                        0x010C0380


// Properties included by mask DMP_USER_INTERFACE_ATE_CALIB_ADDR_MASK
#define DMP_USER_INTERFACE_ATE_CALIB_ADDR_MASK                                     0x010C04FF

#define DMP_USER_INTERFACE_CALIB_LCD_BACKLIGHT                                     0x010C0401
#define DMP_USER_INTERFACE_CALIB_BUTTON_LIGHTS                                     0x010C0402
#define DMP_USER_INTERFACE_CALIB_BAY_LIGHTS                                        0x010C040C
#define DMP_USER_INTERFACE_CALIB_CONTRAST                                          0x010C040D


// Properties included by mask DMP_USER_INTERFACE_ADDR_MASK
#define DMP_USER_INTERFACE_ADDR_MASK                                               0x010CFFFF

#define DMP_FRONT_PANEL_BRIGHTNESS                                                 0x010C0001


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_USER_INTERFACE_ADDR_DEFINITIONS_H