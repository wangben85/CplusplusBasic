/***************************************************************************//**
* @file
*
*     These are a group of unrelated defines and structures that were put into
*     the dmp header files.  Now that we are autogenerating the header files
*     these defines have been moved here until we find a better home.
*
* @warning  THESE DEFINITIONS DO NOT BELONG HERE AND SHOULD BE MOVED TO A
*           PLACE RELATED TO THEIR FUNCTIONALITY
*******************************************************************************/


#ifndef DMP_MISC_DEFINITIONS_H
#define DMP_MISC_DEFINITIONS_H

#include <stdint.h>

#define DMP_GENERIC_FIRST        0x00000000
#define DMP_GENERIC_ALL_ADDR     0xFFFFFFFF


#define DMP_NETWORK_AUDIO_ADDR_MASK  0x0140FFFF

// values for DMP_DISTRO_CALIB_CERT_STATUS
#define DISTRO_CALIB_CERT_STATUS_OK                0x00
#define DISTRO_CALIB_CERT_STATUS_PRODID            0x01
#define DISTRO_CALIB_CERT_STATUS_NO_RESPONSE       0xFF

// values for DMP_DISTRO_FAN_TEST_MODE
#define DISTRO_FAN_TEST_MODE_NORMAL                -1

// values for model
#define DISTRO_MODEL_630                           30
#define DISTRO_MODEL_631                           31
#define DISTRO_MODEL_632                           32
#define DISTRO_MODEL_630J                          130

// values for DMP_DISTRO_DC_LED_TEST_MODE
#define DISTRO_DC_LED_NORMAL                       0
#define DISTRO_DC_LED_OFF                          1
#define DISTRO_DC_LED_GREEN                        2
#define DISTRO_DC_LED_RED                          3
#define DISTRO_DC_LED_AMBER                        4

// size/offsets for DMP_DISTRO_BAND_INFO
#define DISTRO_BAND_INFO_ID                        0  // Frequency Band ID
#define DISTRO_BAND_INFO_LOWER_LIMIT               1  // Lowest frequency for selected band.
#define DISTRO_BAND_INFO_UPPER_LIMIT               2  // Highest frequency for selected band.
#define DISTRO_BAND_INFO_SUBBAND_1_LOWER_LIMIT     3  // subband limit.
#define DISTRO_BAND_INFO_SUBBAND_1_UPPER_LIMIT     4  // subband limit.
#define DISTRO_BAND_INFO_SUBBAND_2_LOWER_LIMIT     5  // subband limit.
#define DISTRO_BAND_INFO_SUBBAND_2_UPPER_LIMIT     6  // subband limit.
#define DISTRO_BAND_INFO_SUBBAND_3_LOWER_LIMIT     7  // subband limit.
#define DISTRO_BAND_INFO_SUBBAND_3_UPPER_LIMIT     8  // subband limit.
#define DISTRO_BAND_INFO_SUBBAND_4_LOWER_LIMIT     9  // subband limit.
#define DISTRO_BAND_INFO_SUBBAND_4_UPPER_LIMIT     10 // subband limit.
#define DISTRO_BAND_INFO_ELEMENTS                  11


// macros for creating/extracting attenuation calibration offsets
// note:  space is reserved for 128 calibration values
// Currently 20 values are used:
//    offset = band(5-bits):cascade(1-bit):antenna(1-bit))
//    There are currently only 5 bands defined.
#define DMP_DISTRO_CALIB_ATTENUATION(band,cascadeOn,antenna)   ( DMP_DISTRO_CALIB_ATTENUATION_BASE | ((band)<<2) | ((cascadeOn)<<1) | (antenna) )
#define DMP_DISTRO_CALIB_ATTENUATION_MASK                      0xFFFFFF80
#define DISTRO_CALIB_ATTENUATION_GET_BAND(address)             ((((address)-DMP_DISTRO_CALIB_ATTENUATION_BASE) >> 2) & 0x1F)
#define DISTRO_CALIB_ATTENUATION_GET_CASCADE_ON(address)       ((((address)-DMP_DISTRO_CALIB_ATTENUATION_BASE) >> 1) & 0x01)
#define DISTRO_CALIB_ATTENUATION_GET_ANTENNA(address)          ((((address)-DMP_DISTRO_CALIB_ATTENUATION_BASE)     ) & 0x01)


#define DMP_GENERIC_DFR1_CONFIG_BASE_ADDR 0x01062010
#define DMP_GENERIC_DFR2_CONFIG_BASE_ADDR 0x01062020

#define DMP_GENERIC_DFR1_FILTER_BASE_ADDR               0x01062100
#define DMP_GENERIC_DFR2_FILTER_BASE_ADDR               0x01062200

// Generic Digital Feedback Reducer Config offsets
#define DMP_GENERIC_DFR_ASSIGNED_CHAN_OFFSET            (0x00) //!< DFR Assigned Channel Offset
#define DMP_GENERIC_DFR_LOCK_OFFSET                     (0x01) //!< DFR Lock Offset
#define DMP_GENERIC_DFR_BYPASS_EN_OFFSET                (0x02) //!< DFR Bypass Enable Offset
#define DMP_GENERIC_DFR_NUM_FILTERS_OFFSET              (0x04) //!< DFR Number of Filters Offset
#define DMP_GENERIC_DFR_NUM_FIXED_FILTERS_OFFSET        (0x05) //!< DFR Number of Fixed Filters Offset
#define DMP_GENERIC_DFR_CLEAR_ALL_FILTERS_OFFSET        (0x06) //!< DFR Clear All Filters Offset
#define DMP_GENERIC_DFR_NEW_FILTER_Q_DEPLOY_OFFSET      (0x07) //!< DFR New Filter Q Deployment Type Offset
#define DMP_GENERIC_DFR_AUTO_CLEAR_FILTERS_EN_OFFSET    (0x0A) //!< DFR Auto Clear Filters Enable Offset
#define DMP_GENERIC_DFR_FILTER_CLEAR_TIMEOUT_EN_OFFSET  (0x0B) //!< DFR Filter Clear Timeout Enable Offset
#define DMP_GENERIC_DFR_FILTER_CLEAR_TIMEOUT_OFFSET     (0x0C) //!< DFR Filter Clear Timeout Value Offset


// Generic Digital Feedback Reducer Filter offsets
#define DMP_GENERIC_DFR_FILTER0_OFFSET                  (0x00) //!< DFR Filter 0 Offset
#define DMP_GENERIC_DFR_FILTER1_OFFSET                  (0x10) //!< DFR Filter 1 Offset
#define DMP_GENERIC_DFR_FILTER2_OFFSET                  (0x20) //!< DFR Filter 2 Offset
#define DMP_GENERIC_DFR_FILTER3_OFFSET                  (0x30) //!< DFR Filter 3 Offset
#define DMP_GENERIC_DFR_FILTER4_OFFSET                  (0x40) //!< DFR Filter 4 Offset
#define DMP_GENERIC_DFR_FILTER5_OFFSET                  (0x50) //!< DFR Filter 5 Offset
#define DMP_GENERIC_DFR_FILTER6_OFFSET                  (0x60) //!< DFR Filter 6 Offset
#define DMP_GENERIC_DFR_FILTER7_OFFSET                  (0x70) //!< DFR Filter 7 Offset
#define DMP_GENERIC_DFR_FILTER8_OFFSET                  (0x80) //!< DFR Filter 8 Offset
#define DMP_GENERIC_DFR_FILTER9_OFFSET                  (0x90) //!< DFR Filter 9 Offset
#define DMP_GENERIC_DFR_FILTER10_OFFSET                 (0xA0) //!< DFR Filter 10 Offset
#define DMP_GENERIC_DFR_FILTER11_OFFSET                 (0xB0) //!< DFR Filter 11 Offset
#define DMP_GENERIC_DFR_FILTER12_OFFSET                 (0xC0) //!< DFR Filter 12 Offset
#define DMP_GENERIC_DFR_FILTER13_OFFSET                 (0xD0) //!< DFR Filter 13 Offset
#define DMP_GENERIC_DFR_FILTER14_OFFSET                 (0xE0) //!< DFR Filter 14 Offset
#define DMP_GENERIC_DFR_FILTER15_OFFSET                 (0xF0) //!< DFR Filter 15 Offset

#define DMP_GENERIC_DFR_FILTER_TYPE_OFFSET              (0x00) //!< DFR Filter Type Offset
#define DMP_GENERIC_DFR_FILTER_ACTIVE_OFFSET            (0x01) //!< DFR Filter Active Offset
#define DMP_GENERIC_DFR_FILTER_CLEAR_OFFSET             (0x02) //!< DFR Filter Clear Offset
#define DMP_GENERIC_DFR_FILTER_FREQ_OFFSET              (0x03) //!< DFR Filter Frequency Offset
#define DMP_GENERIC_DFR_FILTER_DEPTH_OFFSET             (0x04) //!< DFR Filter Depth Offset
#define DMP_GENERIC_DFR_FILTER_Q_FACTOR_OFFSET          (0x05) //!< DFR Filter Q Factor Offset

// Values for the DMP_CHANN_IR_SYNC_STATUS_OFFSET property when communicating between Rx and Tx
#define DMP_CHANN_IR_SYNC_STATUS_SUCCESS_LINKED                   0
#define DMP_CHANN_IR_SYNC_STATUS_SUCCESS_NOT_LINKED               1
#define DMP_CHANN_IR_SYNC_STATUS_FAILURE                          2
#define DMP_CHANN_IR_SYNC_STATUS_FAILURE_BAD_FREQ                 3

// Special values for the DMP_CH_BATT_CHARGING_MODE property
#define DMP_BATTERY_INFO_CHARGING_FULL          0x00
#define DMP_BATTERY_INFO_CHARGING_CALCULATING   0x01
#define DMP_BATTERY_INFO_CHARGING_NORMAL        0x02        // see DMP_CH_BATT_TIME_TO_FULL_CHARGE for time-to-full
#define DMP_BATTERY_INFO_CHARGING_WARM          0x03
#define DMP_BATTERY_INFO_CHARGING_WARM_FULL     0x04
#define DMP_BATTERY_INFO_CHARGING_HOT           0x05
#define DMP_BATTERY_INFO_CHARGING_COLD          0x06
#define DMP_BATTERY_INFO_CHARGING_PRECHARGE     0x07        // precharging deep discharged battery
#define DMP_BATTERY_INFO_CHARGING_FAILED        0x08        // precharge failed
#define DMP_BATTERY_INFO_CHARGING_RELAX         0x40        // Internal: Indicating the battery is relaxing in Cycle Mode
#define DMP_BATTERY_INFO_CHARGING_STORAGE       0x80
#define DMP_BATTERY_INFO_CHARGING_DRAIN         0x81
#define DMP_BATTERY_INFO_CHARGING_DRAIN_WARM    0x82
#define DMP_BATTERY_INFO_CHARGING_DRAIN_CALC    0x83
#define DMP_BATTERY_INFO_CHARGING_BAD_MODULE_G  0xF9        // Internal: unrecognized battery module (Green: Done)
#define DMP_BATTERY_INFO_CHARGING_BAD_MODULE_R  0xFA        // Internal: unrecognized battery module (Red: Charging)
#define DMP_BATTERY_INFO_CHARGING_OFF_CHECK     0xFB        // unknown error, check charger
#define DMP_BATTERY_INFO_CHARGING_ERROR_FULL    0xFC        // HDQ read error on a full battery
#define DMP_BATTERY_INFO_CHARGING_ERROR_WFULL   0xFD        // HDQ read error on a warm, full battery
#define DMP_BATTERY_INFO_CHARGING_ERROR         0xFE        // HDQ read error
#define DMP_BATTERY_INFO_CHARGING_NO_BATTERY    0xFF

// Special values for the DMP_CH_BATT_TIME_TO_TARGET (formerly TIME_TO_FULL_CHARGE) property
#define DMP_BATTERY_INFO_TTF_FULL               0xFFF9
#define DMP_BATTERY_INFO_TTF_HOT                0xFFFA
#define DMP_BATTERY_INFO_TTF_WARM               0xFFFB
#define DMP_BATTERY_INFO_TTF_COLD               0xFFFC
#define DMP_BATTERY_INFO_TTF_CALCULATING        0xFFFD
#define DMP_BATTERY_INFO_TTF_ERROR              0xFFFE
#define DMP_BATTERY_INFO_TTF_NO_BATTERY         0xFFFF

// Special values for the DMP_CH_BATT_CHARGE_STATUS and DMP_CH_BATT_HEALTH properties
#define DMP_BATTERY_INFO_STATUS_ERROR           0xFE
#define DMP_BATTERY_INFO_STATUS_NO_BATTERY      0xFF

// Special values for the DMP_CH_BATT_BATTERY_TEMP_IN_* properties
#define DMP_BATTERY_INFO_TEMP_ERROR             0x7FFE
#define DMP_BATTERY_INFO_TEMP_NO_BATTERY        0x7FFF

// Special values for the DMP_CH_BATT_*_CAPACITY properties
#define DMP_BATTERY_INFO_CAPACITY_ERROR         0xFFFFFFFE
#define DMP_BATTERY_INFO_CAPACITY_NO_BATTERY    0xFFFFFFFF

// Special values for the DMP_CH_BATT_CYCLE_COUNT property
#define DMP_BATTERY_INFO_CYCLES_ERROR           0xFFFFFFFE
#define DMP_BATTERY_INFO_CYCLES_NO_BATTERY      0xFFFFFFFF

// Special values for the DMP_CH_BATT_ERRORS property
#define DMP_BATTERY_INFO_ERRORS_NO_ERROR              0x00
#define DMP_BATTERY_INFO_ERRORS_UNKNOWN_MODULE        0x01
#define DMP_BATTERY_INFO_ERRORS_UNKNOWN_BATTERY       0x02
#define DMP_BATTERY_INFO_ERRORS_RECOVERY_FAILED       0x03
#define DMP_BATTERY_INFO_ERRORS_CHARGE_FAILED         0x04
#define DMP_BATTERY_INFO_ERRORS_CHECK_BATTERY         0x05
#define DMP_BATTERY_INFO_ERRORS_CHECK_CHARGER         0x06 
#define DMP_BATTERY_INFO_ERRORS_COMMUNICATION_FAILED  0x07
#define DMP_BATTERY_INFO_ERRORS_NO_BATTERY            0xFF

// Special values for the DMP_CH_FAN_TEST_MODE property */
#define DMP_CH_FAN_TEST_MODE_NORMAL             0
#define DMP_CH_FAN_TEST_MODE_OFF                1
#define DMP_CH_FAN_TEST_MODE_ON_A               2
#define DMP_CH_FAN_TEST_MODE_ON_B               3
#define DMP_CH_FAN_TEST_MODE_ON_BOTH            4

// Merged from the old DmpChargerAddrDefinitions.h
// Battery bay properties as offsets
#define DMP_CH_BAY_MODULE_TYPE_OFFSET           0x010E1000
#define DMP_CH_BASE_ADDRESS                     0x010E0000
#define DMP_CH_NUM_BATTERY_BAYS                 (DMP_CH_BASE_ADDRESS + 0x03)
#define DMP_CH_BATTERY_PROPERTY_MASK            0x010E20FF
#define DMP_CH_DEVICE_PROPERTY_MASK             0x010E30FF
#define DMP_CH_BAY_PROPERTY_MASK                0x010E10FF

// Special values for the DMP_CH_BAY_MODULE_TYPE property
#define DMP_BATTERY_MODULE_TYPE_EMPTY           0x00
#define DMP_BATTERY_MODULE_TYPE_CYLINDRICAL     0x01
#define DMP_BATTERY_MODULE_TYPE_PRISMATIC       0x02
#define DMP_BATTERY_MODULE_TYPE_LINE2VIVA       0x03
#define DMP_BATTERY_MODULE_TYPE_BH_HH           0x04
#define DMP_BATTERY_MODULE_TYPE_BH_BP           0x05
#define DMP_BATTERY_MODULE_TYPE_BH_UBP          0x06
#define DMP_BATTERY_MODULE_TYPE_BH_TT           0x80
#define DMP_BATTERY_MODULE_TYPE_BH_ENH          0x81
#define DMP_BATTERY_MODULE_TYPE_BH_MBP          0x82
#define DMP_BATTERY_MODULE_TYPE_ODIN_CASE       0x83
#define DMP_BATTERY_MODULE_TYPE_ODIN_TT         0x84
#define DMP_BATTERY_MODULE_TYPE_YANGCHENG       0x85
// Note:  Additional module types will be added in the future.  Software must be able to handle an unrecognized module
#define DMP_BATTERY_MODULE_TYPE_UNKNOWN         0xFF        // Default for modules not recognized by the current firmware version

// Special values for the DMP_CH_BATT_TYPE_ID property
#define DMP_BATTERY_BATT_TYPE_EMPTY             0x00
#define DMP_BATTERY_BATT_TYPE_AXT920            0x01
#define DMP_BATTERY_BATT_TYPE_AXT910            0x02
#define DMP_BATTERY_BATT_TYPE_SB900             0x03
#define DMP_BATTERY_BATT_TYPE_SB920             0x04
#define DMP_BATTERY_BATT_TYPE_SB910             0x05
#define DMP_BATTERY_BATT_TYPE_SB910M            0x06
#define DMP_BATTERY_BATT_TYPE_SB930             0x07
#define DMP_BATTERY_MIC_DOCKED_SB920            0xF0
#define DMP_BATTERY_MIC_DOCKED_SB910            0xF1
#define DMP_BATTERY_MIC_DOCKED_SB900            0xF2
#define DMP_BATTERY_MIC_DOCKED_UNKNOWN          0xF3
// Note:  Additional battery types will be added in the future.  Software must be able to handle an unrecognized module
#define DMP_BATTERY_BATT_TYPE_UNKNOWN           0xFF        // Default for batteries not recognized by the current firmware version

// Special values for the DMP_CH_CHARGER_MODE property
// NOTE:  A device might not support all of the internal-use modes ...
// for instance, the UCP initially did not support the SINGLE_CYCLE mode,
// and the AXT900 did not support the DRAIN mode.
#define DMP_CH_CHARGER_MODE_NORMAL           0  // Normal Mode:  the charger will fully charge batteries
#define DMP_CH_CHARGER_MODE_STORAGE          1  // Storage Mode: the charger will charge/drain batteries to 3.8V for optimal storage
#define DMP_CH_CHARGER_MODE_CYCLE            2  // INTERNAL-USE: the charger will continually charge batteries to full, then drain to empty
#define DMP_CH_CHARGER_MODE_MODULE_TEST      3  // INTERNAL-USE: the charger will enter a mode where the test module can be used
#define DMP_CH_CHARGER_MODE_BATTERY_INSPECT  4  // INTERNAL-USE: the charger will perform an incoming inspection test on batteries
#define DMP_CH_CHARGER_MODE_ROSE_SEAL        5  // INTERNAL-USE: the charger will test and seal batteries
#define DMP_CH_CHARGER_MODE_SINGLE_CYCLE     6  // INTERNAL-USE: the charger will perform a single charge-drain-storage cycle on a battery
#define DMP_CH_CHARGER_MODE_BATTERY_TEST     7  // INTERNAL-USE: the charger will perform a generic test on batteries
#define DMP_CH_CHARGER_MODE_DRAIN            8  // INTERNAL-USE: the charger will drain batteries to 3.0V for test


// Compact structure used for passing battery information via the DMP_CH_BATTERY_INFO_BASE properties.
// Note: The processor card handles the byte swapping on this structure,
// this allows the ATMEL code to use this structure as is.
typedef struct
{
   uint8_t     ChargingMode;        // Battery Charging State (DMP_BATTERY_INFO_STATE_*)
   uint8_t     ChargeStatus;        // Charge Status (usually as a percentage)
   uint8_t     HealthStatus;        // Health Status (usually as a percentage)
   uint8_t     ChargeBars;          // Charge Status (as a number of bars (0-5 bars))
   uint16_t    TimeToTarget;        // # of minutes left until target (full, empty, or 3.8V)
   uint16_t    RemainingCapacity;   // Current (Remaining) Capacity (in mAh)
   uint16_t    FullChargeCapacity;  // Fully Charged Capacity (in mAh)
   uint16_t    DesignCapacity;      // Design Capacity (in mAh)
   uint16_t    CycleCount;          // # of charge cycles
   int16_t     TempC;               // Temperature in Celcius
   int16_t     TempF;               // Temperature in Fahrenheit
} DmpChBatteryInfo_t;


#define NUM_CUSTOM_GROUPS     6
#define NUM_CUSTOM_CHANNELS  60
#define ADDRESS_SPACING_BETWEEN_CUSTOM_GROUPS (0x100)
#define OFFSET_CUSTOM_GROUPS_ALL_CHANNEL_INTERNAL_EVENT (0x40)


// Indexes for the data passed in the DMP_ETH_INTERNAL_STATIC_IP_DATA property
#define DMP_ETH_INTERNAL_STATIC_IP_ADDR_INDEX    0
#define DMP_ETH_INTERNAL_STATIC_IP_SUBNET_INDEX  1


#define DMP_UPGRADE_STATUS_UPLOAD_START   ( 0)
#define DMP_UPGRADE_STATUS_UPDATE_START   ( 1)
#define DMP_UPGRADE_STATUS_COMPLETE       ( 100 )
#define DMP_UPGRADE_STATUS_FAILURE        ( -1 )
#define DMP_UPGRADE_STATUS_UNREGISTERED   ( -2 )

// Power Source Bit Flags (used for DMP_POWER_SOURCE_OPTIONS and DMP_POWER_SOURCE_STATUS)
#define DMP_POWER_SOURCE_OPTION_BATTERY      0x01
#define DMP_POWER_SOURCE_OPTION_EXTERNAL_DC  0x02
#define DMP_POWER_SOURCE_OPTION_POE          0x04
#define DMP_POWER_SOURCE_OPTION_CHARGER      0x08
#define DMP_POWER_SOURCE_OPTION_USB_CABLE    0x10   


// Antenna-based Properties
#define DMP_CHANN_RF_ANTENNA_LED_LEVEL(antenna)                   (DMP_CHANN_RF_ANTENNA_LED_LEVEL_OFFSET + antenna)
#define GET_ANTENNA_FROM_DMP_CHANN_RF_ANTENNA_LED_LEVEL(offset)   (offset - DMP_CHANN_RF_ANTENNA_LED_LEVEL_OFFSET)


/*
 * Note: each proxy device have up to 16 firmware: A-P
 * Addr = base + ProxyDeviceId * 16
 */
#define ADDRESS_SPACING_BETWEEN_PROXY_DEVICES         0x10

#define DMP_SCAN_DATA_ADDR_OFFSET_MASK       0x0fffffff
//address space needed for one channel
#define DMP_SCAN_DATA_RANGE_PER_CHAN         0x10000000
#define DMP_SCAN_DATA_LAST                   ( DMP_SCAN_DATA_BASE_ADDRESS + DMP_SCAN_DATA_RANGE_PER_CHAN - 1 )

#define GET_CHAN_FROM_SCAN_ADDR( addr )      ( ( ( addr ) - DMP_SCAN_DATA_BASE_ADDRESS ) / DMP_SCAN_DATA_RANGE_PER_CHAN )
#define GET_CHAN_SCAN_ADDR( chan, offset )   ( DMP_SCAN_DATA_BASE_ADDRESS + offset + ( chan * DMP_SCAN_DATA_RANGE_PER_CHAN ) )
#define GET_SCAN_ADDR_OFFSET( addr )         ( ( addr ) & DMP_SCAN_DATA_ADDR_OFFSET_MASK )
#define GET_CHAN_SCAN_DATA_ADDR_MASK( chan ) ( GET_CHAN_SCAN_ADDR( chan, 0 ) | DMP_SCAN_DATA_ADDR_OFFSET_MASK )


#define MAX_SCAN_ID  16

typedef struct DmpScanRangeReq_tag
{
#ifdef __cplusplus
   DmpScanRangeReq_tag()
      : m_nStartFreqKhz(0), m_nStopFreqKhz(0), m_nStepFrqKhz(0), m_nPriority(0)
   {}
#endif

   uint32_t m_nStartFreqKhz;
   uint32_t m_nStopFreqKhz;
   uint32_t m_nStepFrqKhz;
   uint32_t m_nPriority;
   int16_t  m_nScanId;
}DmpScanRangeReq_t;


#endif // DMP_MISC_DEFINITIONS_H
