/***************************************************************************//**
* @file
*
*     This file contains utilites to convert between addresses and their meanings
*     such as channel.
*
* @note    None
*
* @warning None
*******************************************************************************/


#ifndef DMPCHGRADDRUTIL_H
#define DMPCHGRADDRUTIL_H


#ifdef __ICCAVR__
#include "BspStdTypes.h"
#else
#include <stdint.h>
#endif

#include "DmpChargerAddrDefinitions.h"

/**
 * @addtogroup DMP_defs    DMP address definititions.
 * @{
 */


// The address for channel specific properties always starts with 02 (MSB).
// The second most significant byte of the address represents the
// channel number, where '00' is channel 1, '01' is channel 2 and so forth.

#ifdef __cplusplus
extern "C" {
#endif

#define DMP_NUM_BATT_BAYS           4
#define DMP_NUM_BATTERIES           8
#define DMP_BATT_BAY_SHIFT          8
#define DMP_BATT_SHIFT              8
#define DMP_BATT_BAY_OFFSET_MASK    0xFFFFF0FF
#define DMP_BATT_OFFSET_MASK        0xFFFFF0FF
#define DMP_BAY_OFFSET              0x1000
#define DMP_BAT_OFFSET              0x2000

#define DMP_CH_IS_AN_INFO_ADDRESS   0x010E0000
#define DMP_CH_IS_AN_INFO_MASK      0xFFFFFF00

// DMP Mask for all of the charger/bay/battery properties.
// This mask covers the individual DMP_CH_PROPERTY_MASK, DMP_CH_BATTERY_BAY_MASK,
// and DMP_CH_BATTERY_MASK masks.
// NOTE:  The DMP_CH_BATTERY_BAY_MASK and DMP_CH_BATTERY_MASK masks are
// not suitable for RegisterPropHandler(), which only looks for 8/16/28-bit masks,
// while the two individual masks are each 12-bit masks.
#define DMP_CH_MASK                 0x010EFFFF

// Battery bay related macros
// Note: Battery bays are in the range 1-4, and the DMP encodings
// represent bay 1 as offset 0, so need to add/subtract 1 to
// convert between these.
#define DMP_CH_BAY_BASE_ADDRESS(bay) (((bay)-1)*0x100)
#define DMP_CH_IS_A_BAY_ADDRESS      0x010E1000
#define DMP_CH_IS_A_BAY_MASK         0xFFFFFC00
#define DMP_CH_BAY_WHICH_BAY(addr)   ((((addr) & 0x00000300)>>8)+1)

// For UCP chargers only
#if defined(CFG_CHARGER_NXP_GENERIC)
// New for SBRC
#define DMP_CH_SLOT_BASE_ADDRESS(slot) (((slot)-1)*0x100)
#define DMP_CH_IS_A_SLOT_ADDRESS       0x010E1000
#define DMP_CH_IS_A_SLOT_MASK          0xFFFFFC00
#define DMP_CH_SLOT_WHICH_SLOT(addr)   ((((addr) & 0x00000300)>>8)+1)

#define DMP_CH_SLOT_TYPE_ID(slot)      (DMP_CH_SLOT_BASE_ADDRESS(slot)+DMP_CH_SLOT_TYPE_ID_OFFSET)
#define DMP_CH_SLOT_TYPE_NAME(slot)    (DMP_CH_SLOT_BASE_ADDRESS(slot)+DMP_CH_SLOT_TYPE_NAME_OFFSET)
#define DMP_CH_SLOT_BAYS(slot)         (DMP_CH_SLOT_BASE_ADDRESS(slot)+DMP_CH_SLOT_BAYS_OFFSET)
#endif
   
// Battery bay properties as calculated DMP addresses
// Note: Bays are in the range 1-4
#define DMP_CH_BAY_MODULE_TYPE(bay)      (DMP_CH_BAY_BASE_ADDRESS(bay)+DMP_CH_BAY_MODULE_TYPE_OFFSET)

   // Battery related macros
// Note: Batteries are in the range 1-8, and the DMP encodings
// represent battery 1 as offset 0, so need to add/subtract 1 to
// convert between these.
#define DMP_CH_BATT_BASE_ADDRESS(batt) (((batt)-1)*0x100)
#define DMP_CH_IS_A_BATT_ADDRESS       0x010E2000

#if defined(CFG_CHARGER_NXP_GENERIC)
#define DMP_CH_IS_A_BATT_MASK          0xFFFFF000                       // Original value 0xFFFF8000, updated for Odin TT Charger since there are 10 bays
#define DMP_CH_BATT_WHICH_BATT(addr)   ((((addr) & 0x00000F00)>>8)+1)   // Original value is ((((addr) & 0x00000700)>>8)+1)
#else
#define DMP_CH_IS_A_BATT_MASK          0xFFFFF800
#define DMP_CH_BATT_WHICH_BATT(addr)   ((((addr) & 0x00000700)>>8)+1)
#endif

#define DMP_CH_BATT_BATTERY_PRESENT(battery)      (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_BATTERY_PRESENT_OFFSET)
#define DMP_CH_BATT_CHARGING_MODE(battery)        (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_CHARGING_MODE_OFFSET)
#define DMP_CH_BATT_CHARGE_STATUS(battery)        (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_CHARGE_STATUS_OFFSET)
#define DMP_CH_BATT_CURRENT_CAPACITY(battery)     (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_CURRENT_CAPACITY_OFFSET)
#define DMP_CH_BATT_MAXIMUM_CAPACITY(battery)     (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_MAXIMUM_CAPACITY_OFFSET)
#define DMP_CH_BATT_CYCLE_COUNT(battery)          (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_CYCLE_COUNT_OFFSET)
#define DMP_CH_BATT_BATTERY_TEMP_IN_F(battery)    (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_BATTERY_TEMP_IN_F_OFFSET)
#define DMP_CH_BATT_BATTERY_TEMP_IN_C(battery)    (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_BATTERY_TEMP_IN_C_OFFSET)
#define DMP_CH_BATT_MANUFACTURE_CAPACITY(battery) (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_MANUFACTURE_CAPACITY_OFFSET)
#define DMP_CH_BATT_HEALTH(battery)               (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_HEALTH_OFFSET)
#define DMP_CH_BATT_CHARGE_BARS(battery)          (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_CHARGE_BARS_OFFSET)
#define DMP_CH_BATT_CID(battery)                  (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_CID_OFFSET)

#if defined(CFG_CHARGER_NXP_GENERIC)
// For UCP chargers only
// Battery properties as calculated DMP addresses
// Note: Batteries are in the range 1-8
#define DMP_CH_BATT_TIME_TO_TARGET_CHARGE(battery)(DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_TIME_TO_TARGET_OFFSET)
#define DMP_CH_BATT_TYPE_ID(battery)              (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_TYPE_ID_OFFSET)
#define DMP_CH_BATT_TYPE_NAME(battery)            (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_TYPE_NAME_OFFSET)
#define DMP_CH_BATT_ERRORS(battery)               (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_ERRORS_OFFSET)
#else
// For other projects
// Battery properties as calculated DMP addresses
// Note: Batteries are in the range 1-8
#define DMP_CH_BATT_TIME_TO_FULL_CHARGE(battery)  (DMP_CH_BATT_BASE_ADDRESS(battery)+DMP_CH_BATT_TIME_TO_TARGET_OFFSET)
#endif


#if defined(CFG_CHARGER_NXP_GENERIC)
#if defined(CFG_SBC240)
// For UCP chargers only
// Ganged Device Parameters
// Note: Devices are in the range 1-4
#define DMP_CH_GANG_BASE_ADDRESS(device)          (((device)-1)*0x100)
#define DMP_CH_IS_A_DEVICE_ADDRESS                0x010E3000
#define DMP_CH_IS_A_DEVICE_MASK                   0xFFFFF000
#define DMP_CH_BATT_WHICH_DEVICE(addr)            ((((addr) & 0x00000F00)>>8)+1)

#define DMP_GANG_MODEL_NAME(device)               (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_MODEL_NAME)
#define DMP_GANG_MANUFACTURER(device)             (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_MANUFACTURER)
#define DMP_GANG_SERIAL_NUM(device)               (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_SERIAL_NUM)
#define DMP_GANG_FIRMWARE_VERSION(device)         (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_FIRMWARE_VERSION)
#define DMP_GANG_FIRMWARE_VALID(device)           (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_FIRMWARE_VALID)
#define DMP_GANG_TEMPERATURE(device)              (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_TEMPERATURE)
#define DMP_GANG_OVER_TEMPERATURE(device)         (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_OVER_TEMPERATURE)
#define DMP_GANG_UPTIME_STRING(device)            (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_UPTIME_STRING)
#define DMP_GANG_FIRMWARE_A_VERSION(device)       (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_FIRMWARE_A_VERSION)
#define DMP_GANG_FIRMWARE_B_VERSION(device)       (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_FIRMWARE_B_VERSION)
#define DMP_GANG_FIRMWARE_K_VERSION(device)       (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_FIRMWARE_K_VERSION)
#define DMP_GANG_BOARD_C_SN(device)               (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_BOARD_C_SN)
#define DMP_GANG_BOARD_C_ID(device)               (DMP_CH_GANG_BASE_ADDRESS(device)+DMP_CH_GANG_BOARD_C_ID)
#endif
#endif

uint8_t  GetDmpBattBayOffset( uint32_t dmpAddress, uint8_t *battBay, uint32_t *offset );
uint32_t GetDmpBattBayAddress( uint8_t battBay, uint32_t offset );

uint8_t  GetDmpBattOffset( uint32_t dmpAddress, uint8_t *batt, uint32_t *offset );
uint32_t GetDmpBattAddress( uint8_t batt, uint32_t offset );

#ifdef __cplusplus
}
#endif


/*! @} */


#endif   // DMPCHGRADDRUTIL_H


