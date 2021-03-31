/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpChannelAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_CHANNEL_ADDR_DEFINITIONS_H
#define DMP_CHANNEL_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_CHANN_GENERIC_CHAN_OFFSET_MASK
#define DMP_CHANN_GENERIC_CHAN_OFFSET_MASK                                                        0x000000FF

#define DMP_CHANN_GENERIC_CHAN_TYPE_OFFSET                                                        0x00000000
#define DMP_CHANN_GENERIC_CHAN_NAME_OFFSET                                                        0x00000001
#define DMP_CHANN_GENERIC_NOTES_OFFSET                                                            0x00000003
#define DMP_CHANN_GENERIC_FP_LOCK_OFFSET                                                          0x00000010
#define DMP_CHANN_GENERIC_HARD_LOCK_OFFSET                                                        0x00000011
#define DMP_CHANN_GENERIC_HOME_SCREEN_INFO_OFFSET                                                 0x00000012
#define DMP_CHANN_GENERIC_METER_THROTTLE_OFFSET                                                   0x00000020
#define DMP_CHANN_GENERIC_AMX_METER_THROTTLE_OFFSET                                               0x00000021
#define DMP_CHANN_GENERIC_START_FLASH                                                             0x00000022
#define DMP_CHANN_GENERIC_STOP_FLASH                                                              0x00000023
#define DMP_CHANN_GENERIC_FLASH_STATUS                                                            0x00000024


// Properties included by mask DMP_CHANN_AUDIO_MGMT_OFFSET_MASK
#define DMP_CHANN_AUDIO_MGMT_OFFSET_MASK                                                          0x000001FF

#define DMP_CHANN_AUDIO_MGMT_AUDIO_FORMAT_OFFSET                                                  0x00000100
#define DMP_CHANN_AUDIO_MGMT_CURRENT_LEVEL_OFFSET                                                 0x00000101
#define DMP_CHANN_AUDIO_MGMT_GAIN_OFFSET                                                          0x00000102
#define DMP_CHANN_AUDIO_MGMT_SENSITIVITY_OFFSET                                                   0x00000103
#define DMP_CHANN_AUDIO_MGMT_MUTE_OFFSET                                                          0x00000104
#define DMP_CHANN_AUDIO_MGMT_UNITY_OFFSET                                                         0x00000105
#define DMP_CHANN_AUDIO_MGMT_HIGH_PASS_FILTER_ENABLE_OFFSET                                       0x00000106
#define DMP_CHANN_AUDIO_MGMT_HIGH_PASS_FILTER_FREQ_OFFSET                                         0x00000107
#define DMP_CHANN_AUDIO_MGMT_HIGH_PASS_FILTER_GAIN_OFFSET                                         0x00000108
#define DMP_CHANN_AUDIO_MGMT_LOW_PASS_FILTER_ENABLE_OFFSET                                        0x00000109
#define DMP_CHANN_AUDIO_MGMT_LOW_PASS_FILTER_FREQ_OFFSET                                          0x0000010A
#define DMP_CHANN_AUDIO_MGMT_LOW_PASS_FILTER_GAIN_OFFSET                                          0x0000010B
#define DMP_CHANN_AUDIO_MGMT_PHANTOM_POWER_ENABLE_OFFSET                                          0x0000010C
#define DMP_CHANN_AUDIO_MGMT_AUDIO_DIVERSITY_SOURCE                                               0x0000010D
#define DMP_CHANN_AUDIO_MGMT_AUDIO_DIVERSITY_LOCK                                                 0x0000010E
#define DMP_CHANN_AUDIO_MGMT_MUTE_STATUS_OFFSET                                                   0x0000010F
#define DMP_CHANN_AUDIO_MGMT_SQUELCH_OFFSET                                                       0x00000110
#define DMP_CHANN_AUDIO_MGMT_TONEKEY_ENABLE_OFFSET                                                0x00000111
#define DMP_CHANN_AUDIO_MGMT_AMC_STATE_OFFSET                                                     0x00000112
#define DMP_CHANN_AUDIO_MGMT_RMS_METERING_OFFSET                                                  0x00000113
#define DMP_CHANN_AUDIO_MGMT_PEAK_METERING_OFFSET                                                 0x00000114
#define DMP_CHANN_AUDIO_MGMT_OUTPUT_PATH_OFFSET                                                   0x00000115
#define DMP_CHANN_AUDIO_MGMT_ENABLE_STATUS_OFFSET                                                 0x00000116
#define DMP_CHANN_AUDIO_MGMT_IN_MONO_LEFT_RMS_METERING_OFFSET                                     0x00000117
#define DMP_CHANN_AUDIO_MGMT_IN_MONO_LEFT_PEAK_METERING_OFFSET                                    0x00000118
#define DMP_CHANN_AUDIO_MGMT_IN_RIGHT_RMS_METERING_OFFSET                                         0x00000119
#define DMP_CHANN_AUDIO_MGMT_IN_RIGHT_PEAK_METERING_OFFSET                                        0x0000011A
#define DMP_CHANN_AUDIO_MGMT_LOW_SHELF_FILTER_MODE_OFFSET                                         0x0000011B
#define DMP_CHANN_AUDIO_MGMT_JACK_DETECT_ENABLE_OFFSET                                            0x0000011E
#define DMP_CHANN_AUDIO_MGMT_IN_LEVEL_SWITCH_OFFSET                                               0x0000011F
#define DMP_CHANN_AUDIO_MGMT_OUT_LEVEL_SWITCH_OFFSET                                              0x00000120
#define DMP_CHANN_AUDIO_MGMT_GND_LIFT_SWITCH_OFFSET                                               0x00000121
#define DMP_CHANN_AUDIO_MGMT_TALK_SWITCH_OFFSET                                                   0x00000122
#define DMP_CHANN_AUDIO_MGMT_TALK_SWITCH_MODE_OFFSET                                              0x00000123
#define DMP_CHANN_AUDIO_MGMT_AES3_OUTPUT_MODE_OFFSET                                              0x00000124
#define DMP_CHANN_AUDIO_MGMT_PEAK_LED_HOLD_ENABLE_OFFSET                                          0x00000125
#define DMP_CHANN_AUDIO_MGMT_PEAK_LED_HOLD_STATUS_OFFSET                                          0x00000126
#define DMP_CHANN_AUDIO_MGMT_TONE_GEN_FREQUENCY_OFFSET                                            0x00000127
#define DMP_CHANN_AUDIO_MGMT_TONE_GEN_VOLUME_OFFSET                                               0x00000128
#define DMP_CHANN_AUDIO_MGMT_AGC_ENABLE_OFFSET                                                    0x00000129
#define DMP_CHANN_AUDIO_MGMT_AGC_GAIN_MAX_OFFSET                                                  0x0000012A
#define DMP_CHANN_AUDIO_MGMT_AGC_GAIN_MIN_OFFSET                                                  0x0000012B
#define DMP_CHANN_AUDIO_MGMT_AGC_IN_RMS_METERING_OFFSET                                           0x0000012C
#define DMP_CHANN_AUDIO_MGMT_AGC_IN_PEAK_METERING_OFFSET                                          0x0000012D
#define DMP_CHANN_AUDIO_MGMT_AGC_TARGET_LEVEL_OFFSET                                              0x0000012E
#define DMP_CHANN_AUDIO_MGMT_AGC_BOOST_METERING_OFFSET                                            0x0000012F
#define DMP_CHANN_AUDIO_MGMT_MUTE_BUTTON_MODE_OFFSET                                              0x00000130
#define DMP_CHANN_AUDIO_MGMT_INIT_STATE_FROM_CHARGER_OFFSET                                       0x00000132
#define DMP_CHANN_AUDIO_MGMT_USB_SPEAKER_VOL_OFFSET                                               0x00000133
#define DMP_CHANN_AUDIO_MGMT_USB_MIC_MUTE_OFFSET                                                  0x00000134
#define DMP_CHANN_AUDIO_MGMT_TALK_SWITCH_BATTERY_STATUS_OFFSET                                    0x00000135
#define DMP_CHANN_AUDIO_MGMT_SIG_GEN_TYPE_OFFSET                                                  0x00000136
#define DMP_CHANN_AUDIO_MGMT_SIG_GEN_ENABLE_OFFSET                                                0x00000137
#define DMP_CHANN_AUDIO_MGMT_SIG_GEN_VOLUME_OFFSET                                                0x00000138
#define DMP_CHANN_AUDIO_MGMT_COMPATIBILITY_MISMATCH_OFFSET                                        0x00000140
#define DMP_CHANN_AUDIO_MGMT_CLIP_METERING_OFFSET                                                 0x00000143
#define DMP_CHANN_AUDIO_MGMT_HOST_INPUT_SELECTION_OFFSET                                          0x00000144
#define DMP_CHANN_AUDIO_MGMT_HOST_OUTPUT_SELECTION_OFFSET                                         0x00000145
#define DMP_CHANN_AUDIO_MGMT_HOST_INPUT_SELECTION_NAME_OFFSET                                     0x00000146
#define DMP_CHANN_AUDIO_MGMT_HOST_OUTPUT_SELECTION_NAME_OFFSET                                    0x00000147
#define DMP_CHANN_AUDIO_MGMT_IN_MONO_LEFT_CLIP_METERING_OFFSET                                    0x00000148
#define DMP_CHANN_AUDIO_MGMT_RX_DETECTED_TX_CLIP_OFFSET                                           0x0000014A
#define DMP_CHANN_AUDIO_MGMT_OUTPUT_GATE_ON_OFFSET                                                0x0000014F
#define DMP_CHANN_AUDIO_MGMT_INPUT_GATE_ON_OFFSET                                                 0x00000150
#define DMP_CHANN_AUDIO_MGMT_LIMITER_ENABLE_OFFSET                                                0x00000151
#define DMP_CHANN_AUDIO_MGMT_LIMITER_GAIN_OFFSET                                                  0x00000152
#define DMP_CHANN_AUDIO_MGMT_LIMITER_ENGAGED_OFFSET                                               0x00000153
#define DMP_CHANN_AUDIO_MGMT_GAIN_HI_RESOLUTION_OFFSET                                            0x00000154
#define DMP_CHANN_AUDIO_MGMT_LEC_ENABLE_OFFSET                                                    0x00000155
#define DMP_CHANN_AUDIO_MGMT_POLARITY_OFFSET                                                      0x00000156
#define DMP_CHANN_AUDIO_MGMT_NLP_LEVEL_OFFSET                                                     0x00000157
#define DMP_CHANN_AUDIO_MGMT_NOISE_REDUCTION_ENABLE_OFFSET                                        0x00000158
#define DMP_CHANN_AUDIO_MGMT_NOISE_REDUCTION_LEVEL_OFFSET                                         0x00000159
#define DMP_CHANN_AUDIO_MGMT_DELAY_ENABLE_OFFSET                                                  0x0000015A
#define DMP_CHANN_AUDIO_MGMT_DELAY_MS_OFFSET                                                      0x0000015B
#define DMP_CHANN_AUDIO_MGMT_COMPRESSOR_ENABLE_OFFSET                                             0x0000015C
#define DMP_CHANN_AUDIO_MGMT_COMPRESSOR_THRESHOLD_OFFSET                                          0x0000015D
#define DMP_CHANN_AUDIO_MGMT_COMPRESSOR_RATIO_OFFSET                                              0x0000015E
#define DMP_CHANN_AUDIO_MGMT_COMPRESSOR_THRESHOLD_EXCEED_OFFSET                                   0x0000015F
#define DMP_CHANN_AUDIO_MGMT_HEADPHONE_SOLO_ENABLE_OFFSET                                         0x00000160
#define DMP_CHANN_AUDIO_MGMT_AEC_ENABLE_OFFSET                                                    0x00000161
#define DMP_CHANN_AUDIO_MGMT_AEC_REF_OFFSET                                                       0x00000162
#define DMP_CHANN_AUDIO_MGMT_AEC_POSTGAIN_RMS_METERING_OFFSET                                     0x00000163
#define DMP_CHANN_AUDIO_MGMT_AEC_POSTGAIN_PEAK_METERING_OFFSET                                    0x00000164
#define DMP_CHANN_AUDIO_MGMT_AEC_ERLE_METERING_OFFSET                                             0x00000165
#define DMP_CHANN_AUDIO_MGMT_PHANTOM_POWER_OFFSET                                                 0x00000166
#define DMP_CHANN_AUDIO_MGMT_AEC_BYPASS_OFFSET                                                    0x00000167
#define DMP_CHANN_AUDIO_MGMT_NOISE_REDUCTION_BYPASS_OFFSET                                        0x00000168
#define DMP_CHANN_AUDIO_MGMT_COMPRESSOR_BYPASS_OFFSET                                             0x00000169
#define DMP_CHANN_AUDIO_MGMT_DELAY_BYPASS_OFFSET                                                  0x0000016A
#define DMP_CHANN_AUDIO_MGMT_AGC_BYPASS_OFFSET                                                    0x0000016B
#define DMP_CHANN_AUDIO_MGMT_LIMITER_BYPASS_OFFSET                                                0x0000016C
#define DMP_CHANN_AUDIO_MGMT_BIT_DEPTH                                                            0x00000170
#define DMP_CHANN_AUDIO_MGMT_SAMPLE_RATE                                                          0x00000171
#define DMP_CHANN_AUDIO_MGMT_COMPATIBILITY_VERSION                                                0x00000172
#define DMP_CHANN_AUDIO_MGMT_INPUT_SOURCE                                                         0x00000173
#define DMP_CHANN_AUDIO_MGMT_GAIN_MODE_OFFSET                                                     0x00000174
#define DMP_CHANN_AUDIO_MGMT_AUTO_OFF_OFFSET                                                      0x00000175
#define DMP_CHANN_AUDIO_MGMT_VOLUME_LIMITER_PLUS_OFFSET                                           0x00000176
#define DMP_CHANN_AUDIO_MGMT_VOLUME_LOCK_OFFSET                                                   0x00000177
#define DMP_CHANN_AUDIO_MGMT_EQ_PRESET_OFFSET                                                     0x00000178
#define DMP_CHANN_AUDIO_MGMT_ROUTE_SOURCE_OFFSET                                                  0x00000180
#define DMP_CHANN_AUDIO_MGMT_MATRIX_MIXER_INPUT_GAIN_OFFSET                                       0x00000181
#define DMP_CHANN_AUDIO_MGMT_MATRIX_MIXER_INPUT_ENABLE_OFFSET                                     0x00000191
#define DMP_CHANN_AUDIO_MGMT_DENOISER_ENABLE_OFFSET                                               0x000001D0
#define DMP_CHANN_AUDIO_MGMT_DENOISER_INTENSITY_OFFSET                                            0x000001D1
#define DMP_CHANN_AUDIO_MGMT_DENOISER_NOISE_REDUCTION_METER_OFFSET                                0x000001D2
#define DMP_CHANN_MATRIX_MIXER_IN_RMS_METERING_OFFSET                                             0x0000037C
#define DMP_CHANN_MATRIX_MIXER_IN_PEAK_METERING_OFFSET                                            0x0000037D
#define DMP_CHANN_MATRIX_MIXER_OUT_RMS_METERING_OFFSET                                            0x0000037E
#define DMP_CHANN_MATRIX_MIXER_OUT_PEAK_METERING_OFFSET                                           0x0000037F


// Properties included by mask DMP_CHANN_AUDIO_PEQ_OFFSET_MASK
#define DMP_CHANN_AUDIO_PEQ_OFFSET_MASK                                                           0x000002FF

#define DMP_CHANN_AUDIO_PEQ_ENABLE_OFFSET                                                         0x00000200
#define DMP_CHANN_AUDIO_PEQ_RESET_OFFSET                                                          0x00000201
#define DMP_CHANN_AUDIO_PEQ_LOW_SHELF_GAIN_OFFSET                                                 0x00000202
#define DMP_CHANN_AUDIO_PEQ_HIGH_SHELF_GAIN_OFFSET                                                0x00000203
#define DMP_CHANN_AUDIO_PEQ_FILTER_ENABLE_OFFSET                                                  0x00000210
#define DMP_CHANN_AUDIO_PEQ_FILTER_FREQUENCY_OFFSET                                               0x00000211
#define DMP_CHANN_AUDIO_PEQ_FILTER_WIDTH_OFFSET                                                   0x00000212
#define DMP_CHANN_AUDIO_PEQ_FILTER_OCTAVE_Q_OFFSET                                                0x00000213
#define DMP_CHANN_AUDIO_PEQ_FILTER_GAIN_OFFSET                                                    0x00000214
#define DMP_CHANN_AUDIO_PEQ_FILTER_TYPE_OFFSET                                                    0x00000215
#define DMP_CHANN_AUDIO_PEQ_FILTER_BYPASS_OFFSET                                                  0x00000216


// Properties included by mask DMP_CHANN_AUDIO_MIC_OFFSET_MASK
#define DMP_CHANN_AUDIO_MIC_OFFSET_MASK                                                           0x000004FF

#define DMP_CHANN_AUDIO_MIC_ENABLE_OFFSET                                                         0x00000401
#define DMP_CHANN_AUDIO_MIC_PATTERN_OFFSET                                                        0x00000410
#define DMP_CHANN_AUDIO_MIC_ANGLE_OFFSET                                                          0x00000411
#define DMP_CHANN_AUDIO_MIC_BEAM_X_OFFSET                                                         0x00000421
#define DMP_CHANN_AUDIO_MIC_BEAM_Y_OFFSET                                                         0x00000422
#define DMP_CHANN_AUDIO_MIC_BEAM_Z_OFFSET                                                         0x00000423
#define DMP_CHANN_AUDIO_MIC_BEAM_WIDTH_OFFSET                                                     0x00000424
#define DMP_CHANN_AUDIO_MIC_BEAM_AUTO_POSITION_START_OFFSET                                       0x00000425
#define DMP_CHANN_AUDIO_MIC_BEAM_AUTO_POSITION_STATUS_OFFSET                                      0x00000426
#define DMP_CHANN_AUDIO_MIC_BEAM_X_AUTOFOCUS_OFFSET                                               0x00000427
#define DMP_CHANN_AUDIO_MIC_BEAM_Y_AUTOFOCUS_OFFSET                                               0x00000428
#define DMP_CHANN_AUDIO_MIC_BEAM_Z_AUTOFOCUS_OFFSET                                               0x00000429


// Properties included by mask DMP_CHANN_AUDIO_CONF_MGMT_ADDR_MASK
#define DMP_CHANN_AUDIO_CONF_MGMT_ADDR_MASK                                                       0x000005FF

#define DMP_CHANN_AUDIO_CONF_EXT_MIX_SRCS                                                         0x00000500
#define DMP_CHANN_AUDIO_CONF_ADD_EXT_MIX_SRC                                                      0x00000501
#define DMP_CHANN_AUDIO_CONF_REMOVE_EXT_MIX_SRC                                                   0x00000502
#define DMP_CHANN_AUDIO_CONF_CLEAR_EXT_MIX_SRCS                                                   0x00000503
#define DMP_CHANN_AUDIO_CONF_DEL_MIX_SRCS                                                         0x00000504
#define DMP_CHANN_AUDIO_CONF_ADD_DEL_MIX_SRC                                                      0x00000505
#define DMP_CHANN_AUDIO_CONF_REMOVE_DEL_MIX_SRC                                                   0x00000506
#define DMP_CHANN_AUDIO_CONF_CLEAR_DEL_MIX_SRCS                                                   0x00000507


// Properties included by mask DMP_CHANN_PSM_TX_OFFSET_MASK
#define DMP_CHANN_PSM_TX_OFFSET_MASK                                                              0x000006FF

#define DMP_CHANN_PSM_TX_INPUT_LEVEL_OFFSET                                                       0x00000610
#define DMP_CHANN_PSM_TX_INPUT_CLIP_OFFSET                                                        0x00000611
#define DMP_CHANN_PSM_TX_AUDIO_PAD_OFFSET                                                         0x00000612
#define DMP_CHANN_PSM_TX_AUDIO_MODE_OFFSET                                                        0x00000613


// Properties included by mask DMP_CHANN_RF_OFFSET_MASK
#define DMP_CHANN_RF_OFFSET_MASK                                                                  0x000008FF

#define DMP_CHANN_RF_PRIMARY_GROUP_CHAN_NAME_OFFSET                                               0x00000802
#define DMP_CHANN_RF_PRIMARY_GROUP_CHAN_ID_OFFSET                                                 0x00000803
#define DMP_CHANN_RF_PRIMARYFREQ_OFFSET                                                           0x00000804
#define DMP_CHANN_RF_FREQ_COMP_STATUS_OFFSET                                                      0x00000805
#define DMP_CHANN_RF_SECONDARY_GROUP_CHAN_NAME_OFFSET                                             0x00000806
#define DMP_CHANN_RF_SECONDARY_GROUP_CHAN_ID_OFFSET                                               0x00000807
#define DMP_CHANN_RF_SECONDARYFREQ_OFFSET                                                         0x00000808
#define DMP_CHANN_RF_BACKUP_NUMBER_OFFSET                                                         0x00000809
#define DMP_CHANN_RF_SWITCH_TO_BACKUP_OFFSET                                                      0x0000080A
#define DMP_CHANN_RF_INTERF_DETECTED_OFFSET                                                       0x0000080B
#define DMP_CHANN_RF_INTERF_DETECTION_ENABLE_OFFSET                                               0x0000080C
#define DMP_CHANN_RF_INTERF_SENSITIVITY_OFFSET                                                    0x0000080D
#define DMP_CHANN_RF_MUTE_ALL_FREQS_OFFSET                                                        0x0000080E
#define DMP_CHANN_SECONDARY_FREQ_STATUS_OFFSET                                                    0x0000080F
#define DMP_CHANN_RF_TRANSMIT_LEVEL_OFFSET                                                        0x00000810
#define DMP_CHANN_RF_TRANSMIT_LEVEL_MODE_OFFSET                                                   0x00000811
#define DMP_CHANN_RF_RECEIVE_LEVEL_ANT_A_OFFSET                                                   0x00000812
#define DMP_CHANN_RF_RECEIVE_LEVEL_ANT_B_OFFSET                                                   0x00000813
#define DMP_CHANN_RF_CURRENT_TRANSMIT_LEVEL_OFFSET                                                0x00000814
#define DMP_CHANN_RF_ANTENNA_MARCAD_OFFSET                                                        0x00000815
#define DMP_CHANN_RF_LEVEL_SCALING_FACTOR_OFFSET                                                  0x00000817
#define DMP_CHANN_RF_DIVERSITY_ACTIVE_OUTPUT_OFFSET                                               0x00000818
#define DMP_CHANN_RF_RECEIVE_LEVEL_ANT_C_OFFSET                                                   0x00000819
#define DMP_CHANN_RF_RECEIVE_LEVEL_ANT_D_OFFSET                                                   0x0000081A
#define DMP_CHANN_RF_CHANNEL_QUALITY_OFFSET                                                       0x0000081B
#define DMP_CHANN_RF_ACTIVATE_TX_SLOT_OFFSET                                                      0x0000081C
#define DMP_CHANN_RF_PRIMARY_TV_OFFSET                                                            0x0000081D
#define DMP_CHANN_RF_SECONDARY_TV_OFFSET                                                          0x0000081E
#define DMP_CHANN_RF_INTERF_DETECT_STATE_OFFSET                                                   0x00000820
#define DMP_CHANN_RF_FREQ_SWITCH_FAIL_OFFSET                                                      0x00000821
#define DMP_CHANN_RF_INTERF_RESOLVED_OFFSET                                                       0x00000822
#define DMP_CHANN_RF_INTERF_DISMISSED_OFFSET                                                      0x00000823
#define DMP_CHANN_RF_INTERF_OCCURRED_TIME_OFFSET                                                  0x00000824
#define DMP_CHANN_RF_INTERF_ALLOWED_MODES_OFFSET                                                  0x00000825
#define DMP_CHANN_RF_TX_PROFILE_OFFSET                                                            0x00000830
#define DMP_CHANN_RF_NEW_FREQ_REQ_OFFSET                                                          0x00000840
#define DMP_CHANN_RF_NEW_FREQ_OFFER_OFFSET                                                        0x00000841
#define DMP_CHANN_RF_RELEASE_FREQ_REQ_OFFSET                                                      0x00000842
#define DMP_CHANN_RF_COORDINATED_SWITCH_REQ_OFFSET                                                0x00000843
#define DMP_CHANN_RF_PRIMARY_FREQ_GROUP_CHAN_NAME_OFFSET                                          0x00000850
#define DMP_CHANN_RF_SECONDARY_FREQ_GROUP_CHAN_NAME_OFFSET                                        0x00000851
#define DMP_CHANN_RF_FREQ_DIVERSITY_MODE_OFFSET                                                   0x00000860
#define DMP_CHANN_RF_SEL_FREQ_DIVERSITY_AUDIO_LEVEL_EVAL_ENABLE_OFFSET                            0x00000861
#define DMP_CHANN_RF_ANTENNA_LED_LEVEL_OFFSET                                                     0x00000870
#define DMP_CHANN_RF_CHANNEL_STANDBY_ENABLED_OFFSET                                               0x00000880
#define DMP_CHANN_RF_UNREGISTERED_TX_MODE_OFFSET                                                  0x000008B0
#define DMP_CHANN_RF_UNREGISTERED_TX_DETECTED_OFFSET                                              0x000008B1
#define DMP_CHANN_RF_REGISTERED_TX_CID_OFFSET                                                     0x000008C0
#define DMP_CHANN_RF_REGISTERED_TX_DCID_OFFSET                                                    0x000008D0
#define DMP_CHANN_RF_REGISTERED_TX_NAME_OFFSET                                                    0x000008E0
#define DMP_CHANN_RF_FREQ_BAND_LOWER_LIMIT_OFFSET                                                 0x000008F1
#define DMP_CHANN_RF_FREQ_BAND_UPPER_LIMIT_OFFSET                                                 0x000008F2
#define DMP_CHANN_RF_FREQ_BAND_NAME_OFFSET                                                        0x000008F3
#define DMP_CHANN_RF_RSSI_CAL_ANTENNA_A_OFFSET                                                    0x000008F4
#define DMP_CHANN_RF_RSSI_CAL_ANTENNA_B_OFFSET                                                    0x000008F5
#define DMP_CHANN_RF_RSSI_NF_TABLE_OFFSET                                                         0x000008F6


// Properties included by mask DMP_CHANN_SCANREQUEST_OFFSET_MASK
#define DMP_CHANN_SCANREQUEST_OFFSET_MASK                                                         0x000009FF

#define DMP_CHANN_SCANNER_SCAN_START_FREQ_OFFSET                                                  0x00000900
#define DMP_CHANN_SCANNER_SCAN_STOP_FREQ_OFFSET                                                   0x00000901
#define DMP_CHANN_SCANNER_SCAN_STEP_FREQ_OFFSET                                                   0x00000902
#define DMP_CHANN_SCANNER_START_SCAN_OFFSET                                                       0x00000903
#define DMP_CHANN_SCANNER_SCAN_REPEAT_OFFSET                                                      0x00000909
#define DMP_CHANN_SCANNER_NUM_SCAN_AVAILABLE_OFFSET                                               0x0000090D
#define DMP_CHANN_SCANNER_RELEASE_SCAN_ID_OFFSET                                                  0x0000090E
#define DMP_CHANN_SCANNER_SCAN_ID_OFFSET                                                          0x0000090F
#define DMP_CHANN_SCANNER_SCAN_RUNNING_OFFSET                                                     0x00000910
#define DMP_CHANN_SCANNER_SCAN_RUNNING_LAST_OFFSET                                                0x0000091F
#define DMP_CHANN_SCANNER_SCAN_COMPLETED_OFFSET                                                   0x00000920
#define DMP_CHANN_SCANNER_SCAN_COMPLETED_LAST_OFFSET                                              0x0000092F
#define DMP_CHANN_SCANNER_SCAN_PROGRESS_OFFSET                                                    0x00000930
#define DMP_CHANN_SCANNER_SCAN_STATUS_OFFSET                                                      0x00000931
#define DMP_CHANN_SCANNER_ACTIVE_SCAN_SOURCE_OFFSET                                               0x00000932
#define DMP_CHANN_SCANNER_ACTIVE_SCAN_ID_OFFSET                                                   0x00000934
#define DMP_CHANN_SCANNER_SCAN_MENU_CTRL_STATUS_OFFSET                                            0x00000937
#define DMP_CHANN_SCANNER_CHAN_SCAN_COMPLETE_OFFSET                                               0x00000950
#define DMP_CHANN_SCANNER_GROUP_SCAN_COMPLETE_OFFSET                                              0x00000951
#define DMP_CHANN_SCANNER_GROUP_SCAN_PROGRESS_OFFSET                                              0x00000952
#define DMP_CHANN_SCANNER_GROUP_SCAN_DEPLOY_RESULT_OFFSET                                         0x00000953
#define DMP_CHANN_SCANNER_CHAN_SCAN_PROGRESS_OFFSET                                               0x00000954
#define DMP_NET_SCANNER_PRE_DEPLOY_IDENTIFY                                                       0x00000960


// Properties included by mask DMP_CHANN_AUTOMIXER_OFFSET_MASK
#define DMP_CHANN_AUTOMIXER_OFFSET_MASK                                                           0x00000BFF

#define DMP_CHANN_AUTOMIXER_ENABLE_OFFSET                                                         0x00000B00
#define DMP_CHANN_AUTOMIXER_COPY_INPUT_TO_DEVICE_OFFSET                                           0x00000B01
#define DMP_CHANN_AUTOMIXER_COPY_INPUT_TO_LINK_GRP_OFFSET                                         0x00000B02
#define DMP_CHANN_AUTOMIXER_COPY_INTELLIMIX_TO_DEVICE_OFFSET                                      0x00000B03
#define DMP_CHANN_AUTOMIXER_COPY_INTELLIMIX_TO_LINK_GRP_OFFSET                                    0x00000B04
#define DMP_CHANN_AUTOMIXER_COPY_OUTPUT_TO_DEVICE_OFFSET                                          0x00000B05
#define DMP_CHANN_AUTOMIXER_COPY_OUTPUT_TO_LINK_GRP_OFFSET                                        0x00000B06
#define DMP_CHANN_AUTOMIXER_REVERT_TO_DEFAULT_OFFSET                                              0x00000B08
#define DMP_CHANN_AUTOMIXER_INTELLIMIX_MODE_OFFSET                                                0x00000B09
#define DMP_CHANN_AUTOMIXER_INPUT_AUDIO_SRC_OFFSET                                                0x00000B0A
#define DMP_CHANN_AUTOMIXER_INPUT_AUDIO_MIX_BUS_OFFSET                                            0x00000B0B
#define DMP_CHANN_AUTOMIXER_LOCAL_AUX_ENABLE_OFFSET                                               0x00000B0C
#define DMP_CHANN_AUTOMIXER_HARDWARE_GATING_LOGIC_OFFSET                                          0x00000B0D
#define DMP_CHANN_AUTOMIXER_GATE_INHIBIT_REF_ENABLE_OFFSET                                        0x00000B0E
#define DMP_CHANN_AUTOMIXER_GAIN_METER_OFFSET                                                     0x00000B0F
#define DMP_CHANN_AUTOMIXER_GAIN_SCALING_OFFSET                                                   0x00000B10
#define DMP_CHANN_AUTOMIXER_LINK_MODE_OFFSET                                                      0x00000B11
#define DMP_CHANN_AUTOMIXER_GATING_STYLE_OFFSET                                                   0x00000B12
#define DMP_CHANN_AUTOMIXER_LAST_MIC_LOCK_ON_ENABLE_OFFSET                                        0x00000B13
#define DMP_CHANN_AUTOMIXER_GATE_ON_HOLD_TIME_OFFSET                                              0x00000B14
#define DMP_CHANN_AUTOMIXER_OFF_ATTENUATION_OFFSET                                                0x00000B15
#define DMP_CHANN_AUTOMIXER_NUM_OPEN_MICS_ATTEN_LEVEL_OFFSET                                      0x00000B16
#define DMP_CHANN_AUTOMIXER_MAX_NUM_OPEN_MICS_OFFSET                                              0x00000B17
#define DMP_CHANN_AUTOMIXER_MAX_NUM_OPEN_MICS_AUTO_EN_OFFSET                                      0x00000B18
#define DMP_CHANN_AUTOMIXER_MAX_NUM_OPEN_MICS_LIMIT_OFFSET                                        0x00000B19
#define DMP_CHANN_AUTOMIXER_MIC_OPTIMIZATION_MODE_OFFSET                                          0x00000B1A
#define DMP_CHANN_AUTOMIXER_MIC_OPTIMIZATION_AUTOCONFIG_ENABLE_OFFSET                             0x00000B1B
#define DMP_CHANN_AUTOMIXER_FADER_GROUP_GAIN_HI_RESOLUTION_OFFSET                                 0x00000B1F
#define DMP_CHANN_AUTOMIXER_FADER_GROUP_ENABLE_OFFSET                                             0x00000B20
#define DMP_CHANN_AUTOMIXER_MUTE_GROUP_ENABLE_OFFSET                                              0x00000B21
#define DMP_CHANN_AUTOMIXER_CURRENT_MAX_NOM_OFFSET                                                0x00000B22
#define DMP_CHANN_AUTOMIXER_SOLO_CHANNEL_OFFSET                                                   0x00000B23
#define DMP_CHANN_AUTOMIXER_POST_GATE_MUTE_OFFSET                                                 0x00000B24
#define DMP_CHANN_AUTOMIXER_POST_GATE_GAIN_OFFSET                                                 0x00000B25
#define DMP_CHANN_AUTOMIXER_DIRECT_OUT_TAP_SELECT_OFFSET                                          0x00000B26
#define DMP_CHANN_AUTOMIXER_IN_RMS_METERING_OFFSET                                                0x00000B27
#define DMP_CHANN_AUTOMIXER_IN_PEAK_METERING_OFFSET                                               0x00000B28
#define DMP_CHANN_AUTOMIXER_POST_GATE_SOLO_OFFSET                                                 0x00000B29
#define DMP_CHANN_AUTOMIXER_ALWAYS_ON_ENABLE_MIX_A_OFFSET                                         0x00000B31
#define DMP_CHANN_AUTOMIXER_NAT_ENABLE_MIX_A_OFFSET                                               0x00000B32
#define DMP_CHANN_AUTOMIXER_NAT_GAIN_MIX_A_OFFSET                                                 0x00000B33
#define DMP_CHANN_AUTOMIXER_NAT_OFFSET_MIX_A_OFFSET                                               0x00000B34
#define DMP_CHANN_AUTOMIXER_GATE_GROUP_ENABLE_MIX_A_OFFSET                                        0x00000B35
#define DMP_CHANN_AUTOMIXER_CHPERS_OVRD_ENABLE_MIX_A_OFFSET                                       0x00000B36
#define DMP_CHANN_AUTOMIXER_CHPERS_MUTE_CTRL_EN_MIX_A_OFFSET                                      0x00000B37
#define DMP_CHANN_AUTOMIXER_CHPERS_MUTE_CTRL_MODE_MIX_A_OFFSET                                    0x00000B38
#define DMP_CHANN_AUTOMIXER_MUTE_CTRL_GATING_MODE_MIX_A_OFFSET                                    0x00000B39
#define DMP_CHANN_AUTOMIXER_INPUT_AUDIO_GATE_A_ON_OFFSET                                          0x00000B3A
#define DMP_CHANN_AUTOMIXER_OUTPUT_AUDIO_GATE_A_ON_OFFSET                                         0x00000B3B
#define DMP_CHANN_AUTOMIXER_NUM_ASSIGNED_CHAN_MIX_A_OFFSET                                        0x00000B3C
#define DMP_CHANN_AUTOMIXER_GATING_SENSITIVITY_MIX_A_OFFSET                                       0x00000B3D
#define DMP_CHANN_AUTOMIXER_ALWAYS_ON_ENABLE_MIX_B_OFFSET                                         0x00000B41
#define DMP_CHANN_AUTOMIXER_NAT_ENABLE_MIX_B_OFFSET                                               0x00000B42
#define DMP_CHANN_AUTOMIXER_NAT_GAIN_MIX_B_OFFSET                                                 0x00000B43
#define DMP_CHANN_AUTOMIXER_NAT_OFFSET_MIX_B_OFFSET                                               0x00000B44
#define DMP_CHANN_AUTOMIXER_GATE_GROUP_ENABLE_MIX_B_OFFSET                                        0x00000B45
#define DMP_CHANN_AUTOMIXER_CHPERS_OVRD_ENABLE_MIX_B_OFFSET                                       0x00000B46
#define DMP_CHANN_AUTOMIXER_CHPERS_MUTE_CTRL_EN_MIX_B_OFFSET                                      0x00000B47
#define DMP_CHANN_AUTOMIXER_CHPERS_MUTE_CTRL_MODE_MIX_B_OFFSET                                    0x00000B48
#define DMP_CHANN_AUTOMIXER_MUTE_CTRL_GATING_MODE_MIX_B_OFFSET                                    0x00000B49
#define DMP_CHANN_AUTOMIXER_INPUT_AUDIO_GATE_B_ON_OFFSET                                          0x00000B4A
#define DMP_CHANN_AUTOMIXER_OUTPUT_AUDIO_GATE_B_ON_OFFSET                                         0x00000B4B
#define DMP_CHANN_AUTOMIXER_NUM_ASSIGNED_CHAN_MIX_B_OFFSET                                        0x00000B4C
#define DMP_CHANN_AUTOMIXER_CUSTOM_LAST_MIC_LOCK_ON_ENABLE_OFFSET                                 0x00000B4D
#define DMP_CHANN_AUTOMIXER_CUSTOM_GATE_ON_HOLD_TIME_OFFSET                                       0x00000B4E
#define DMP_CHANN_AUTOMIXER_CUSTOM_OFF_ATTENUATION_OFFSET                                         0x00000B4F
#define DMP_CHANN_AUTOMIXER_IMX_AGGR_ENABLE_OFFSET                                                0x00000B70
#define DMP_CHANN_AUTOMIXER_IMX_AGGR_LINK_POS_OFFSET                                              0x00000B71
#define DMP_CHANN_AUTOMIXER_IMX_AGGR_LINK_POS_ENABLE_OFFSET                                       0x00000B80


// Properties included by mask DMP_CHANN_LOGIC_OFFSET_MASK
#define DMP_CHANN_LOGIC_OFFSET_MASK                                                               0x00000EFF

#define DMP_CHANN_LOGIC_INPUT_OPTION_OFFSET                                                       0x00000E01
#define DMP_CHANN_LOGIC_INPUT_ENABLE_OFFSET                                                       0x00000E02
#define DMP_CHANN_LOGIC_INPUT_SOURCE_OFFSET                                                       0x00000E06
#define DMP_CHANN_LOGIC_INPUT_CONNECTION_MODE_OFFSET                                              0x00000E07
#define DMP_CHANN_LOGIC_INPUT_CONNECT_STATUS_OFFSET                                               0x00000E08
#define DMP_CHANN_LOGIC_INPUT_DEVICE_TYPE_OFFSET                                                  0x00000E09
#define DMP_CHANN_LOGIC_INPUT_SIGNAL_OFFSET                                                       0x00000E10
#define DMP_CHANN_LOGIC_OUTPUT_SIGNAL_OFFSET                                                      0x00000E20


// Properties included by mask DMP_CHANN_LINKING_OFFSET_MASK
#define DMP_CHANN_LINKING_OFFSET_MASK                                                             0x00000FFF

#define DMP_CHANN_NUM_LNKDEV_OFFSET                                                               0x00000F00
#define DMP_CHANN_LINKDEV_CID_OFFSET                                                              0x00000F10
#define DMP_CHANN_LINKDEV_DCID_OFFSET                                                             0x00000F20
#define DMP_CHANN_LINKDEV_STATUS_OFFSET                                                           0x00000F30
#define DMP_CHANN_LINKED_TX_PROTECT_OFFSET                                                        0x00000F40
#define DMP_CHANN_UNLINK_TX_DETECT_OFFSET                                                         0x00000F41
#define DMP_CHANN_UNLINK_TX_DETECT_ENABLE_OFFSET                                                  0x00000F42
#define DMP_CHANN_2_LINKDEV_HANDLING_OFFSET                                                       0x00000F43


// Properties included by mask DMP_CHANN_LNKDEV_PROP_OFFSET_MASK
#define DMP_CHANN_LNKDEV_PROP_OFFSET_MASK                                                         0x000010FF

#define DMP_CHANN_LINKDEV_NAME_OFFSET                                                             0x00001000
#define DMP_CHANN_LINKDEV_TEST_OFFSET                                                             0x00001040
#define DMP_CHANN_LINKDEV_IPEI_OFFSET                                                             0x00001050
#define DMP_CHANN_LINKDEV_DUAL_CH_STATUS_OFFSET                                                   0x000010C0
#define DMP_CHANN_LINKDEV_DUAL_MASTER_CHAN_OFFSET                                                 0x000010D0
#define DMP_CHANN_LINKDEV_DUAL_SLAVE_CHAN_OFFSET                                                  0x000010E0
#define DMP_CHANN_TPCI_LINKDEV_1_NAME_OFFSET                                                      0x000010F0
#define DMP_CHANN_TPCI_LINKDEV_2_NAME_OFFSET                                                      0x000010F1
#define DMP_CHANN_TPCI_LINKDEV_1_RF_MUTE_OFFSET                                                   0x000010F2
#define DMP_CHANN_TPCI_LINKDEV_2_RF_MUTE_OFFSET                                                   0x000010F3
#define DMP_CHANN_TPCI_LINKDEV_1_GAIN_OFFSET                                                      0x000010F4
#define DMP_CHANN_TPCI_LINKDEV_2_GAIN_OFFSET                                                      0x000010F5


// Properties included by mask DMP_CHANN_REMOTE_TX_OFFSET_MASK
#define DMP_CHANN_REMOTE_TX_OFFSET_MASK                                                           0x000011FF

#define DMP_CHANN_REMOTE_TX_BATT_BAR_OFFSET                                                       0x00001100
#define DMP_CHANN_REMOTE_TX_LOCK_OFFSET                                                           0x00001101
#define DMP_CHANN_REMOTE_TX_GAIN_OFFSET                                                           0x00001102
#define DMP_CHANN_REMOTE_TX_PWR_OFFSET                                                            0x00001103
#define DMP_CHANN_REMOTE_TX_MUTED_OFFSET                                                          0x00001104
#define DMP_CHANN_REMOTE_TX_TRIM_OFFSET                                                           0x00001105
#define DMP_CHANN_REMOTE_TX_TYPE_OFFSET                                                           0x00001106
#define DMP_CHANN_REMOTE_TX_BATT_TYPE_OFFSET                                                      0x00001107
#define DMP_CHANN_REMOTE_TX_CHANGE_BATT_OFFSET                                                    0x00001108
#define DMP_CHANN_REMOTE_TX_PWR_SRC_OFFSET                                                        0x00001109
#define DMP_CHANN_REMOTE_TX_BATT_MIN_OFFSET                                                       0x0000110A
#define DMP_CHANN_REMOTE_TX_VALID_ASK_OFFSET                                                      0x0000110B
#define DMP_CHANN_REMOTE_TX_VALID_TONEKEY_OFFSET                                                  0x0000110C
#define DMP_CHANN_REMOTE_TX_FREQ_DIV_OFFSET                                                       0x0000110D
#define DMP_CHANN_REMOTE_TX_UNIQUE_ID_OFFSET                                                      0x0000110E
#define DMP_CHANN_REMOTE_TX_DEVICE_NAME_OFFSET                                                    0x0000110F
#define DMP_CHANN_REMOTE_TX_ENCRYPTION_OFFSET                                                     0x00001110
#define DMP_CHANN_REMOTE_TX_BATT_HEALTH_OFFSET                                                    0x00001111
#define DMP_CHANN_REMOTE_TX_BATT_CHARGE_STATUS_OFFSET                                             0x00001112
#define DMP_CHANN_REMOTE_TX_BATT_CYCLE_OFFSET                                                     0x00001113
#define DMP_CHANN_REMOTE_TX_BATT_TEMPERATURE_OFFSET                                               0x00001114
#define DMP_CHANN_REMOTE_TX_LI_ION_INFO_OFFSET                                                    0x00001115
#define DMP_CHANN_REMOTE_TX_COMPATIBILITY_VERSION                                                 0x00001116
#define DMP_CHANN_REMOTE_TX_BATT_TEMPERATUREC_OFFSET                                              0x00001117
#define DMP_CHANN_REMOTE_TX_BATT_TEMPERATUREF_OFFSET                                              0x00001118
#define DMP_CHANN_REMOTE_TX_PWR_LOCK_OFFSET                                                       0x00001119
#define DMP_CHANN_REMOTE_TX_MENU_LOCK_OFFSET                                                      0x0000111A
#define DMP_CHANN_REMOTE_TX_MUTE_MODE_OFFSET                                                      0x0000111B
#define DMP_CHANN_REMOTE_TX_AUTO_PWR_MODE_OFFSET                                                  0x0000111C
#define DMP_CHANN_REMOTE_TX_POLARITY_OFFSET                                                       0x0000111D
#define DMP_CHANN_REMOTE_TX_MARKER_OFFSET                                                         0x0000111E
#define DMP_CHANN_REMOTE_TX_BATTERY_MAX_CAPACITY_OFFSET                                           0x0000111F
#define DMP_CHANN_REMOTE_TX_BATTERY_MAX_MFR_CAPACITY_OFFSET                                       0x00001120
#define DMP_CHANN_REMOTE_TX_BATTERY_CAPACITY_OFFSET                                               0x00001121
#define DMP_CHANN_REMOTE_TX_BATTERY_VOLTAGE_OFFSET                                                0x00001122
#define DMP_CHANN_REMOTE_TX_PWR_MW_OFFSET                                                         0x00001123
#define DMP_CHANN_REMOTE_TX_REGISTRY_SLOT_OFFSET                                                  0x00001124
#define DMP_CHANN_REMOTE_TX_REGISTRY_CID_OFFSET                                                   0x00001125
#define DMP_CHANN_REMOTE_TX_POWER_SOURCE_STATUS_OFFSET                                            0x00001126
#define DMP_CHANN_REMOTE_TX_HIGH_PASS_FILTER_ENABLE_OFFSET                                        0x00001127
#define DMP_CHANN_REMOTE_TX_MUTE_SWITCH_MODE_OFFSET                                               0x00001129
#define DMP_CHANN_REMOTE_TX_MUTE_LED_MODE_OFFSET                                                  0x0000112A
#define DMP_CHANN_REMOTE_TX_INIT_STATE_FROM_CHARGER_OFFSET                                        0x0000112B
#define DMP_CHANN_REMOTE_TX_LED_BRIGHTNESS_OFFSET                                                 0x0000112C
#define DMP_CHANN_REMOTE_TX_MUTE_BUTTON_STATUS_OFFSET                                             0x0000112D
#define DMP_CHANN_REMOTE_TX_CHAN_NAME_OFFSET                                                      0x0000112E
#define DMP_CHANN_REMOTE_TX_FIRMWARE_VERSION_OFFSET                                               0x0000112F
#define DMP_CHANN_REMOTE_TX_FIRMWARE_VALID_OFFSET                                                 0x00001130
#define DMP_CHANN_REMOTE_TX_SERIAL_NUM_OFFSET                                                     0x00001131
#define DMP_CHANN_REMOTE_TX_BATT_TIME_TO_FULL_OFFSET                                              0x00001132
#define DMP_CHANN_REMOTE_TX_BAND_NAME_OFFSET                                                      0x00001133
#define DMP_CHANN_REMOTE_TX_TALK_SWITCH_STATUS_OFFSET                                             0x00001134
#define DMP_CHANN_REMOTE_TX_TALK_SWITCH_BATTERY_STATUS_OFFSET                                     0x00001135
#define DMP_CHANN_REMOTE_TX_PHANTOM_POWER_OFFSET                                                  0x00001136
#define DMP_CHANN_REMOTE_TX_HIGH_PASS_FILTER_FREQ_OFFSET                                          0x00001137
#define DMP_CHANN_REMOTE_TX_CHARGING_SOURCE_STATUS_OFFSET                                         0x00001139
#define DMP_CHANN_REMOTE_TX_SOURCE_BATTERY_HIGH_TEMP_ALERT                                        0x0000113A
#define DMP_CHANN_REMOTE_TX_AUTO_LOCK_OFFSET                                                      0x0000113B
#define DMP_CHANN_REMOTE_TX_PRODUCT_FIRMWARE_VERSION_STRING_OFFSET                                0x0000113C
#define DMP_CHANN_REMOTE_TX_DCID_OFFSET                                                           0x0000113D


// Properties included by mask DMP_CHANN_TX_SYNC_OFFSET_MASK
#define DMP_CHANN_TX_SYNC_OFFSET_MASK                                                             0x000012FF

#define DMP_CHANN_TX_SYNC_LOCK_OFFSET                                                             0x00001210
#define DMP_CHANN_TX_SYNC_GAIN_OFFSET                                                             0x00001211
#define DMP_CHANN_TX_SYNC_POWER_OFFSET                                                            0x00001212
#define DMP_CHANN_TX_SYNC_TRIM_OFFSET                                                             0x00001213
#define DMP_CHANN_TX_SYNC_BATTERY_TYPE_OFFSET                                                     0x00001214
#define DMP_CHANN_TX_SYNC_PENDING_CUSTOM_GROUPS_OFFSET                                            0x00001215
#define DMP_CHANN_TX_SYNC_GAIN_HANDHELD_PRESET_OFFSET                                             0x00001216
#define DMP_CHANN_TX_SYNC_GAIN_BODYPACK_PRESET_OFFSET                                             0x00001217
#define DMP_CHANN_TX_SYNC_COMPATIBLE_FREQUENCY_OFFSET                                             0x00001218
#define DMP_CHANN_TX_SYNC_AUDIO_MUTE_OFFSET                                                       0x00001219
#define DMP_CHANN_TX_SYNC_BODYPACK_TALKSWITCH_OFFSET                                              0x0000121A
#define DMP_CHANN_TX_SYNC_POLARITY_OFFSET                                                         0x0000121B
#define DMP_CHANN_TX_SYNC_GAIN_GOOSENECK_PRESET_OFFSET                                            0x0000121C
#define DMP_CHANN_TX_SYNC_GAIN_BOUNDARY_PRESET_OFFSET                                             0x0000121D
#define DMP_CHANN_TX_SYNC_HIGH_PASS_OFFSET                                                        0x0000121E
#define DMP_CHANN_TX_SYNC_MUTE_SWITCH_MODE_OFFSET                                                 0x00001220
#define DMP_CHANN_TX_SYNC_MUTE_LED_MODE_GN_OFFSET                                                 0x00001221
#define DMP_CHANN_TX_SYNC_MUTE_LED_MODE_BN_OFFSET                                                 0x00001222
#define DMP_CHANN_TX_SYNC_INIT_STATE_FROM_CHARGER_OFFSET                                          0x00001223
#define DMP_CHANN_TX_SYNC_POWER_GN_BN_OFFSET                                                      0x00001224
#define DMP_CHANN_TX_SYNC_BATTERY_TYPE_GN_BN_OFFSET                                               0x00001225
#define DMP_CHANN_TX_SYNC_LED_BRIGHTNESS_OFFSET                                                   0x00001227
#define DMP_CHANN_TX_SYNC_LOCK_GN_BN_OFFSET                                                       0x00001228
#define DMP_CHANN_TX_SYNC_CUSTOM_GROUPS_GN_BN_OFFSET                                              0x00001229
#define DMP_CHANN_TX_SYNC_PHANTOM_POWER_PLUGON_OFFSET                                             0x0000122A
#define DMP_CHANN_TX_SYNC_GAIN_PLUGON_PRESET_OFFSET                                               0x0000122B
#define DMP_CHANN_TX_SYNC_HIGH_PASS_FILTER_FREQ_OFFSET                                            0x0000122C
#define DMP_CHANN_TX_SYNC_TRIM_PLUGON_OFFSET                                                      0x0000122D
#define DMP_CHANN_TX_SYNC_AUTO_LOCK_OFFSET                                                        0x0000122E


// Properties included by mask DMP_CHANN_IR_SYNC_STATUS_OFFSET_MASK
#define DMP_CHANN_IR_SYNC_STATUS_OFFSET_MASK                                                      0x000013FF

#define DMP_CHANN_IR_SYNC_START_OFFSET                                                            0x00001300
#define DMP_CHANN_IR_SYNC_STATUS_OFFSET                                                           0x00001301
#define DMP_CHANN_IR_SYNC_PROGRESS_OFFSET                                                         0x00001302


// Properties included by mask DMP_CHANN_PSM_REMOTE_RX_OFFSET_MASK
#define DMP_CHANN_PSM_REMOTE_RX_OFFSET_MASK                                                       0x000016FF

#define DMP_CHANN_PSM_REMOTE_RX_MIX_MODE_OFFSET                                                   0x00001600
#define DMP_CHANN_PSM_REMOTE_RX_HF_BOOST_OFFSET                                                   0x00001601
#define DMP_CHANN_PSM_REMOTE_RX_LIMITER_OFFSET                                                    0x00001602
#define DMP_CHANN_PSM_REMOTE_RX_LIMITER_VALUE_OFFSET                                              0x00001603
#define DMP_CHANN_PSM_REMOTE_RX_BALANCE_STEREO_MODE_OFFSET                                        0x00001604
#define DMP_CHANN_PSM_REMOTE_RX_BALANCE_MIX_MODE_OFFSET                                           0x00001605
#define DMP_CHANN_PSM_REMOTE_RX_LOCK_OFFSET                                                       0x00001606
#define DMP_CHANN_PSM_REMOTE_RX_GAIN_MODE_OFFSET                                                  0x00001607
#define DMP_CHANN_PSM_REMOTE_RX_AUTO_OFF_OFFSET                                                   0x00001608
#define DMP_CHANN_PSM_REMOTE_RX_VOLUME_LIMITER_PLUS_OFFSET                                        0x00001609
#define DMP_CHANN_PSM_REMOTE_RX_VOLUME_LOCK_OFFSET                                                0x0000160A
#define DMP_CHANN_PSM_REMOTE_RX_EQ_PRESET_OFFSET                                                  0x0000160B
#define DMP_CHANN_PSM_REMOTE_RX_PEQ_ENABLE_OFFSET                                                 0x0000160C
#define DMP_CHANN_PSM_REMOTE_RX_PEQ_LOW_SHELF_GAIN_OFFSET                                         0x0000160D
#define DMP_CHANN_PSM_REMOTE_RX_PEQ_HIGH_SHELF_GAIN_OFFSET                                        0x0000160E
#define DMP_CHANN_PSM_REMOTE_RX_BATTERY_TYPE_OFFSET                                               0x0000160F
#define DMP_CHANN_PSM_REMOTE_RX_PEQ_FILTER_FREQUENCY_OFFSET                                       0x00001620
#define DMP_CHANN_PSM_REMOTE_RX_PEQ_FILTER_GAIN_OFFSET                                            0x00001621
#define DMP_CHANN_PSM_REMOTE_RX_PEQ_FILTER_OCTAVE_Q_OFFSET                                        0x00001622


// Properties included by mask DMP_CHANN_OPERA_SPECIFIC_OFFSET_MASK
#define DMP_CHANN_OPERA_SPECIFIC_OFFSET_MASK                                                      0x000017FF

#define DMP_CHANN_OPERA_APT_LINK_STATUS_OFFSET                                                    0x00001700
#define DMP_CHANN_OPERA_GAIN_INT_OFFSET                                                           0x00001701


// Properties included by mask DMP_CHANN_SECURITY_BASE_OFFSET_MASK
#define DMP_CHANN_SECURITY_BASE_OFFSET_MASK                                                       0x000020FF

#define DMP_CHANN_SECURITY_ENCRYPTION_MODE_OFFSET                                                 0x00002000
#define DMP_CHANN_SECURITY_ENCRYPTION_KEY_OFFSET                                                  0x00002001
#define DMP_CHANN_SECURITY_ENCRYPTION_ERROR_OFFSET                                                0x00002002
#define DMP_CHANN_SECURITY_ENCRYPTION_KEY_TAG_OFFSET                                              0x00002003
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_1_A_OFFSET                                             0x00002010
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_2_A_OFFSET                                             0x00002011
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_3_A_OFFSET                                             0x00002012
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_4_A_OFFSET                                             0x00002013
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_5_A_OFFSET                                             0x00002014
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_6_A_OFFSET                                             0x00002015
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_7_A_OFFSET                                             0x00002016
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_8_A_OFFSET                                             0x00002017
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_1_B_OFFSET                                             0x00002020
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_2_B_OFFSET                                             0x00002021
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_3_B_OFFSET                                             0x00002022
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_4_B_OFFSET                                             0x00002023
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_5_B_OFFSET                                             0x00002024
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_6_B_OFFSET                                             0x00002025
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_7_B_OFFSET                                             0x00002026
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_8_B_OFFSET                                             0x00002027
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_1_C_OFFSET                                             0x00002030
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_2_C_OFFSET                                             0x00002031
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_3_C_OFFSET                                             0x00002032
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_4_C_OFFSET                                             0x00002033
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_5_C_OFFSET                                             0x00002034
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_6_C_OFFSET                                             0x00002035
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_7_C_OFFSET                                             0x00002036
#define DMP_CHANN_SECURITY_ENCRYPTION_SEED_8_C_OFFSET                                             0x00002037
#define DMP_CHANN_SECURITY_NWK_AUDIO_CIPHER_STATUS_OFFSET                                         0x00002043


// Properties included by mask DMP_CHANN_UI_OFFSET_MASK
#define DMP_CHANN_UI_OFFSET_MASK                                                                  0x000030FF

#define DMP_CHANN_UI_EXIT_PROTECTED_MENU_OFFSET                                                   0x00003001
#define DMP_CHANN_UI_MUTE_SWITCH_MODE_OFFSET                                                      0x00003002
#define DMP_CHANN_UI_MUTE_LED_CURRENT_MODE_OFFSET                                                 0x00003011
#define DMP_CHANN_UI_MUTE_LED_CURRENT_COLOR_OFFSET                                                0x00003012
#define DMP_CHANN_UI_MUTE_LED_CURRENT_STATE_OFFSET                                                0x00003013
#define DMP_CHANN_UI_LED_IN_OFFSET                                                                0x00003014
#define DMP_CHANN_UI_SIGNAL_CLIP_LED_COLOR_OFFSET                                                 0x00003015
#define DMP_CHANN_UI_SIGNAL_CLIP_LED_STATE_OFFSET                                                 0x00003016
#define DMP_CHANN_UI_MUTE_LED_MODE_OFFSET                                                         0x00003017
#define DMP_CHANN_UI_CUE_IDENTIFY_OFFSET                                                          0x00003018
#define DMP_CHANN_UI_AUDIO_METER_LEVEL_OFFSET                                                     0x00003019


// Properties included by mask DMP_CHANN_NETWORK_AUDIO_OFFSET_MASK
#define DMP_CHANN_NETWORK_AUDIO_OFFSET_MASK                                                       0x000040FF

#define DMP_CHANN_NETWORK_AUDIO_CHAN_TYPE_OFFSET                                                  0x00004000
#define DMP_CHANN_NETWORK_AUDIO_CHAN_NAME_OFFSET                                                  0x00004001
#define DMP_CHANN_NETWORK_AUDIO_DEFAULT_CHAN_NAME_OFFSET                                          0x00004002
#define DMP_CHANN_NETWORK_AUDIO_MUTE_OFFSET                                                       0x00004004
#define DMP_CHANN_NETWORK_AUDIO_VISIBLE_OFFSET                                                    0x00004005
#define DMP_CHANN_NETWORK_AUDIO_ENABLE_OFFSET                                                     0x00004012
#define DMP_CHANN_NETWORK_AUDIO_SUBSCRIPTION_OFFSET                                               0x00004020
#define DMP_CHANN_NETWORK_AUDIO_SUBSCRIPTION_STATUS_OFFSET                                        0x00004021
#define DMP_CHANN_NETWORK_AUDIO_PEAK_METERING_OFFSET                                              0x00004030
#define DMP_CHANN_NETWORK_AUDIO_CLIP_METERING_OFFSET                                              0x00004031
#define DMP_CHANN_NETWORK_AUDIO_BIT_DEPTH_OFFSET                                                  0x00004070
#define DMP_CHANN_NETWORK_AUDIO_SAMPLE_RATE_OFFSET                                                0x00004071


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_CHANNEL_ADDR_DEFINITIONS_H