/***************************************************************************//**
* @file
*
*     Auto generated DMP Address Definitions for DmpConferenceAddrDefinitions.h property addresses
* see svn.shure.com/Lego/Tools/DinoExporter/trunk/dmp.database.xlsx
*
* ###############################################################
* ###############################################################
* WARNING: THIS FILE IS AUTO GENERATED. ALL CHANGES WILL BE LOST.
* ###############################################################
* ###############################################################
*******************************************************************************/


#ifndef DMP_CONFERENCE_ADDR_DEFINITIONS_H
#define DMP_CONFERENCE_ADDR_DEFINITIONS_H


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




// Properties included by mask DMP_CONFERENCE_MASK
#define DMP_CONFERENCE_MASK                                                           0x010BFFFF

#define DMP_CONF_SYSTEM_SPEAK_MODE                                                    0x010B0000
#define DMP_CONF_INDIVIDUAL_SPEAK_MODE                                                0x010B0001
#define DMP_CONF_MAX_TOTAL_SPEAKERS                                                   0x010B0002
#define DMP_CONF_MAX_DELEGATE_SPEAKERS                                                0x010B0003
#define DMP_CONF_MAX_REQUESTS                                                         0x010B0004
#define DMP_CONF_SYSTEM_INTERRUPT_ABILITY                                             0x010B0005
#define DMP_CONF_UPGRADE_MODE                                                         0x010B0006
#define DMP_CONF_DU_ROLE                                                              0x010B0007
#define DMP_CONF_REGISTRATION_MODE                                                    0x010B0008
#define DMP_CONF_EMERGENCY_MODE                                                       0x010B0009
#define DMP_CONF_NUM_CONNECTED_DEV                                                    0x010B000A
#define DMP_CONF_GENERATE_ACL                                                         0x010B000B
#define DMP_CONF_REGISTER_DEV                                                         0x010B000C
#define DMP_CONF_DEREGISTER_DEV                                                       0x010B000D
#define DMP_CONF_NUMBER_OF_REGISTERED_DEV                                             0x010B000E
#define DMP_CONF_DEV_REGISTERED                                                       0x010B000F
#define DMP_CONF_ADDRESS                                                              0x010B0010
#define DMP_CONF_DUAL_ADDRESS                                                         0x010B0011
#define DMP_CONF_REQUEST_LIST_POSITION                                                0x010B0012
#define DMP_CONF_SPEAK_PRIORITY                                                       0x010B0013
#define DMP_CONF_REQUEST_LIST_STATE                                                   0x010B0014
#define DMP_CONF_REQUEST_LIST_OPERATOR_CONTROL                                        0x010B0015
#define DMP_CONF_SUPPORTS_VOTING                                                      0x010B0016
#define DMP_CONF_SUPPORTS_VOX_MODE                                                    0x010B0017
#define DMP_CONF_SUPPORTS_ADVANCED_FUNCTIONALITY                                      0x010B0018
#define DMP_CONF_SPEAK_LIST                                                           0x010B0019
#define DMP_CONF_DUAL_DELEGATE                                                        0x010B001A
#define DMP_CONF_SPEAK_REQUEST                                                        0x010B001B
#define DMP_CONF_SPEAK_REQUEST_DENIED                                                 0x010B001C
#define DMP_CONF_REQUEST_LIST                                                         0x010B001D
#define DMP_CONF_NUM_REPLY_OPTIONS                                                    0x010B001E
#define DMP_CONF_REPLY_REQUEST                                                        0x010B001F
#define DMP_CONF_REPLY_REQUEST_DENIED                                                 0x010B0020
#define DMP_CONF_REPLY_LIST                                                           0x010B0021
#define DMP_CONF_CLEAR_REPLY_LIST                                                     0x010B0022
#define DMP_CONF_CLEAR_REQUEST_LIST                                                   0x010B0023
#define DMP_CONF_MAX_REPLIES                                                          0x010B0024
#define DMP_CONF_NEXT_SPEAKER_ON                                                      0x010B0025
#define DMP_CONF_REQUEST_LIST_ADD                                                     0x010B0026
#define DMP_CONF_REQUEST_LIST_ADD_BACK                                                0x010B0027
#define DMP_CONF_REQUEST_LIST_MOVE                                                    0x010B0028
#define DMP_CONF_UPDATE_REQUEST_LIST_POSITION                                         0x010B0029
#define DMP_CONF_REQUEST_LIST_REMOVE                                                  0x010B002A
#define DMP_CONF_REPLY_LIST_ADD                                                       0x010B002B
#define DMP_CONF_REPLY_LIST_ADD_BACK                                                  0x010B002C
#define DMP_CONF_REPLY_LIST_MOVE                                                      0x010B002D
#define DMP_CONF_REPLY_LIST_REMOVE                                                    0x010B002F
#define DMP_CONF_MAX_ACTIVE_CONF_ADDR                                                 0x010B0030
#define DMP_CONF_CONFERENCE_CONTROL_LOCK                                              0x010B0031
#define DMP_CONF_NUM_CONFERENCES                                                      0x010B0032
#define DMP_CONF_LOGIN_MODE                                                           0x010B0033
#define DMP_CONF_SHOW_REQUEST_LISTS                                                   0x010B0034
#define DMP_CONF_CONFERENCE_ACTIVE                                                    0x010B0035
#define DMP_CONF_NUM_LANGUAGES                                                        0x010B0036
#define DMP_CONF_VIEWABLE_LANGUAGES                                                   0x010B0038
#define DMP_CONF_NUM_DELEGATE_IDS                                                     0x010B0039
#define DMP_CONF_NEXT_SPEAKER_ON_FROM_REQUEST                                         0x010B003A
#define DMP_CONF_NEXT_SPEAKER_ON_FROM_REPLY                                           0x010B003B
#define DMP_CONF_REPLY_LIST_STATUS                                                    0x010B003C
#define DMP_CONF_REQUEST_VISIBLE                                                      0x010B003D
#define DMP_CONF_LOGIN_SUCCESS                                                        0x010B0040
#define DMP_CONF_LOGIN_REQUEST                                                        0x010B0041
#define DMP_CONF_LOGIN_DENIED                                                         0x010B0042
#define DMP_CONF_LOGOUT_REQUEST                                                       0x010B0043
#define DMP_CONF_LOGOUT_SUCCESS                                                       0x010B0044
#define DMP_CONF_LOGOUT_DENIED                                                        0x010B0045
#define DMP_CONF_REQUEST_CONF_IDS                                                     0x010B0046
#define DMP_CONF_NUM_PREDEF_MSGS                                                      0x010B0050
#define DMP_CONF_SEND_PREDEF_MSG                                                      0x010B0051
#define DMP_CONF_RECV_PREDEF_MSG                                                      0x010B0052
#define DMP_CONF_SEND_PRIVATE_MSG                                                     0x010B0053
#define DMP_CONF_RECV_PRIVATE_MSG                                                     0x010B0054
#define DMP_CONF_ASSISTANCE_CALL                                                      0x010B0055
#define DMP_CONF_SUPPORTS_CHIPCARD                                                    0x010B0056
#define DMP_CONF_CURRENT_CONFERENCE                                                   0x010B0057
#define DMP_CONF_SPEAK_RELEASE                                                        0x010B0058
#define DMP_CONF_REPLY_RELEASE                                                        0x010B0059
#define DMP_CONF_REQUEST_CONF_START                                                   0x010B005A
#define DMP_CONF_REQUEST_CONF_STOP                                                    0x010B005B
#define DMP_CONF_SPEAK_REQUEST_LOCK_ENABLE                                            0x010B005C
#define DMP_CONF_SPEAK_REQUEST_LOCK_TIMEOUT                                           0x010B005D
#define DMP_CONF_NUM_CONNECTED_AND_REGISTERED_DEV                                     0x010B005E
#define DMP_CONF_RENUMBER_SEATS_STATUS                                                0x010B005F
#define DMP_CONF_RENUMBER_SEAT_INDICATION                                             0x010B0060
#define DMP_CONF_AMBIENT_ACTIVE                                                       0x010B0061
#define DMP_CONF_MAX_ACTIVE_AMB_ID                                                    0x010B0062
#define DMP_CONF_SYSTEM_LANGUAGE                                                      0x010B0063
#define DMP_CONF_SPEAK_RELEASE_ALLOWED                                                0x010B0064
#define DMP_CONF_SPEAK_REQUEST_LOCK_OVERRIDE                                          0x010B0065
#define DMP_CONF_SPEAK_REQUEST_LOCK_OVERRIDE_HOLD_TIME                                0x010B0066
#define DMP_CONF_SPEAK_BUTTON_HELD                                                    0x010B0067
#define DMP_CONF_RESET_SEAT_NAMES                                                     0x010B0069
#define DMP_CONF_PUSH_SYSTEM_LANGUAGE                                                 0x010B006A
#define DMP_CONF_RENUMBER_SEATS_START_SEAT_NUMBER                                     0x010B006B
#define DMP_CONF_RENUMBER_SEATS_END_SEAT_NUMBER                                       0x010B006C
#define DMP_CONF_RENUMBER_SEATS_CURRENT_SEAT_NUMBER                                   0x010B006D
#define DMP_CONF_RENUMBER_SEAT_ACK                                                    0x010B006E
#define DMP_CONF_RENUMBER_SEATS_MODE                                                  0x010B006F
#define DMP_CONF_REMOTE_CALLER_AUDIO_CAPABLE                                          0x010B0070
#define DMP_CONF_REMOTE_CALLER_AUTO_SENSE_ENABLE                                      0x010B0071
#define DMP_CONF_REMOTE_CALLER_AUDIO_DENIED                                           0x010B0072
#define DMP_CONF_REMOTE_CALLER_ROLE_TEMPORARY                                         0x010B0073
#define DMP_CONF_CLEAR_SEAT_INFORMATION                                               0x010B0080
#define DMP_CONF_RETAIN_SEAT_INFORMATION                                              0x010B0081
#define DMP_CONF_NFC_SEAT_NAME                                                        0x010B0100
#define DMP_CONF_MULTI_CC_MODE                                                        0x010B0300
#define DMP_CONF_MULTI_CC_LOCK                                                        0x010B0301
#define DMP_CONF_MULTI_CC_AUDIO_AUTO_CONFIG                                           0x010B0302
#define DMP_CONF_MULTI_CC_PAIRED_DEVICES                                              0x010B0311
#define DMP_CONF_MULTI_CC_USER_PAIR_COMMAND                                           0x010B0312
#define DMP_CONF_MULTI_CC_USER_PAIR_REQUEST                                           0x010B0313
#define DMP_CONF_MULTI_CC_CONFIRM_PAIR_REQUEST                                        0x010B0314
#define DMP_CONF_MULTI_CC_PAIRING_COMMAND                                             0x010B0315
#define DMP_CONF_MULTI_CC_PAIRING_REQUEST                                             0x010B0316
#define DMP_CONF_MULTI_CC_PAIRING_RESULT                                              0x010B0317
#define DMP_CONF_MULTI_CC_USER_UNPAIR_COMMAND                                         0x010B0318
#define DMP_CONF_MULTI_CC_USER_UNPAIR_COMMAND_ALL                                     0x010B0319
#define DMP_CONF_MULTI_CC_INFORM_UNPAIRED                                             0x010B031A
#define DMP_CONF_MULTI_CC_NEEDS_PAIR_CONFIRMATION                                     0x010B031B
#define DMP_CONF_MULTI_CC_DATA_RETENTION_ON_UNPAIR                                    0x010B031C
#define DMP_CONF_SPEECH_TIME_GLOBAL_TIMER_STATE                                       0x010B0400
#define DMP_CONF_SPEECH_TIME_COUNT_UP                                                 0x010B0401
#define DMP_CONF_SPEECH_TIME_COUNT_THROUGH                                            0x010B0402
#define DMP_CONF_SPEECH_TIME_ACCUMULATE                                               0x010B0403
#define DMP_CONF_SPEECH_TIME_GLOBAL_CURRENT                                           0x010B0405
#define DMP_CONF_SPEECH_TIME_GLOBAL_LIMIT                                             0x010B0406
#define DMP_CONF_SPEECH_TIME_GLOBAL_ALARM                                             0x010B0407
#define DMP_CONF_SPEECH_TIME_GLOBAL_RESET                                             0x010B0408
#define DMP_CONF_SPEECH_TIME_INDIVIDUAL_RESET                                         0x010B0409
#define DMP_CONF_SPEECH_TIME_INDIVIDUAL_TIMER_STATE                                   0x010B040A
#define DMP_CONF_SPEECH_TIME_INDIVIDUAL_ALARM_RESET                                   0x010B040B
#define DMP_CONF_INT_NUM_CHANNELS                                                     0x010B0500
#define DMP_CONF_INT_AUTO_FLOOR_ENABLE                                                0x010B0501
#define DMP_CONF_INT_INTERRUPT_MODE                                                   0x010B0502
#define DMP_CONF_INT_SPEAK_TOO_FAST_DURATION                                          0x010B0503
#define DMP_CONF_INT_SPEAK_TOO_FAST_ACTIVE                                            0x010B0504
#define DMP_CONF_INT_NUM_BOOTHS                                                       0x010B0505
#define DMP_CONF_INT_NUM_INT_LANG                                                     0x010B0506
#define DMP_CONF_INT_NUM_INTERPRETERS                                                 0x010B0507
#define DMP_CONF_INT_BOOTH_NUM                                                        0x010B0508
#define DMP_CONF_INT_LANG_B_CH                                                        0x010B0509
#define DMP_CONF_INT_LANG_C_CH                                                        0x010B050A
#define DMP_CONF_INT_OUTGOING_INTERP_CH                                               0x010B050B
#define DMP_CONF_INT_INCOMING_INTERP_CH                                               0x010B050C
#define DMP_CONF_INT_OUTGOING_SWITCH_EN                                               0x010B050D
#define DMP_CONF_INT_ACTIVITY_BEEP                                                    0x010B050E
#define DMP_CONF_INT_REQUEST_TO_SPEAK_DENIED                                          0x010B050F
#define DMP_CONF_INT_DESK_NUM                                                         0x010B0510
#define DMP_CONF_INT_INCOMING_SELECT                                                  0x010B0511
#define DMP_CONF_INT_OUTGOING_SELECT                                                  0x010B0512
#define DMP_CONF_INT_MAX_NUM_CH                                                       0x010B0514
#define DMP_CONF_INT_FLOOR_TOGGLE_ENABLE                                              0x010B0515
#define DMP_CONF_INT_CHANNEL_LANGUAGE                                                 0x010B0516
#define DMP_CONF_INT_LANG_B_MODE                                                      0x010B0519
#define DMP_CONF_INT_LANG_C_MODE                                                      0x010B051A
#define DMP_CONF_INT_MAX_NUM_CHANNELS                                                 0x010B051B
#define DMP_CONF_INT_REQUEST_BOOTH_NUM                                                0x010B051C
#define DMP_CONF_INT_REQUEST_DESK_NUM                                                 0x010B051D
#define DMP_CONF_UI_LANG_ABBREVIATION_ENABLE                                          0x010B0600
#define DMP_CONF_UI_CH_SELECT_BEFORE_LOGIN_ENABLE                                     0x010B0601
#define DMP_CONF_UI_DISPLAYVIEW_SHOW_VOTING_RESULTS                                   0x010B0602
#define DMP_CONF_UI_DISPLAYVIEW_SHOW_REQUESTS                                         0x010B0603
#define DMP_CONF_UI_WELCOME_SCREEN_LOCK                                               0x010B0604
#define DMP_CONF_VOTING_RIGHTS                                                        0x010B0700
#define DMP_CONF_VOTING_ATTENDANCE_TYPE                                               0x010B0701
#define DMP_CONF_VOTING_PRESENT                                                       0x010B0702
#define DMP_CONF_VOTING_PRESENCE_ACK                                                  0x010B0703
#define DMP_CONF_VOTING_REQUEST_START_VOTING                                          0x010B0704
#define DMP_CONF_VOTING_REQUEST_START_ATTENDANCE                                      0x010B0705
#define DMP_CONF_VOTING_ATTENDANCE_RESULT                                             0x010B0706
#define DMP_CONF_VOTING_ATTENDANCE_STATUS                                             0x010B0707
#define DMP_CONF_VOTING_NUM_CONFIG                                                    0x010B0709
#define DMP_CONF_VOTING_CUR_CONFIG                                                    0x010B070A
#define DMP_CONF_VOTING_TYPE                                                          0x010B070B
#define DMP_CONF_VOTING_SECRET                                                        0x010B070C
#define DMP_CONF_VOTING_SPEECH_SUPPORTED                                              0x010B070D
#define DMP_CONF_VOTING_PAUSE_SUPPORTED                                               0x010B070E
#define DMP_CONF_VOTING_ALLOWED_DURING_PAUSE                                          0x010B070F
#define DMP_CONF_VOTING_VIEW_INTERIM_CHAIR                                            0x010B0711
#define DMP_CONF_VOTING_VIEW_INTERIM_DEL                                              0x010B0712
#define DMP_CONF_VOTING_TIME_ENABLE                                                   0x010B0714
#define DMP_CONF_VOTING_DISPLAY_TIME                                                  0x010B0715
#define DMP_CONF_VOTING_TIME_INCREASING                                               0x010B0716
#define DMP_CONF_VOTING_TIME_LIMIT                                                    0x010B0717
#define DMP_CONF_VOTING_TIME_CURRENT                                                  0x010B0718
#define DMP_CONF_VOTING_NUM_RESULTS                                                   0x010B0719
#define DMP_CONF_VOTING_DISPLAY_RESULT_NOTE                                           0x010B071A
#define DMP_CONF_VOTING_VOTE_VALUE                                                    0x010B071B
#define DMP_CONF_VOTING_VOTE_ACK                                                      0x010B071C
#define DMP_CONF_VOTING_PROXY_VOTE_VALUE                                              0x010B071D
#define DMP_CONF_VOTING_PROXY_VOTE_ACK                                                0x010B071E
#define DMP_CONF_VOTING_VOTING_STATUS                                                 0x010B071F
#define DMP_CONF_VOTING_REQUEST_CLEAR_VOTING_RESULTS                                  0x010B0720
#define DMP_CONF_VOTING_ATTENDANCE_BTN_COLOR                                          0x010B0721
#define DMP_CONF_VOTING_ATTENDANCE_EXPECTED_TOTAL                                     0x010B0722
#define DMP_CONF_VOTING_INTERIM_VOTE_REFERENCE                                        0x010B0723
#define DMP_CONF_VOTING_REQUEST_CANCEL_VOTING                                         0x010B0724
#define DMP_CONF_VOTING_REQUEST_PAUSE_VOTING                                          0x010B0725
#define DMP_CONF_VOTING_REQUEST_RESUME_VOTING                                         0x010B0726
#define DMP_CONF_VOTING_REQUEST_STOP_VOTING                                           0x010B0727
#define DMP_CONF_VOTING_REQUEST_STOP_ATTENDANCE                                       0x010B0728
#define DMP_CONF_VOTING_REQUEST_CONFIGS                                               0x010B0729
#define DMP_CONF_VOTING_REQUEST_CANCEL_ATTENDANCE                                     0x010B072A
#define DMP_CONF_VOTING_RESULTS_SHARED                                                0x010B072B
#define DMP_CONF_VOTING_DISMISS_ALL_RESULTS                                           0x010B072C
#define DMP_CONF_VOTING_DISMISS_RESULTS                                               0x010B072D
#define DMP_CONF_VOTING_TOTAL_VOTES_CAST                                              0x010B072E
#define DMP_CONF_VOTING_SUBJECT                                                       0x010B072F
#define DMP_CONF_VOTING_PREVIOUS_VOTE_SUBJECT                                         0x010B0730
#define DMP_CONF_VOTING_VOTE_START_TIME                                               0x010B0731
#define DMP_CONF_VOTING_PREVIOUS_VOTE_PARTICIPANT_COUNT                               0x010B0732
#define DMP_CONF_VOTING_PREVIOUS_VOTERS_COUNT                                         0x010B0733
#define DMP_CONF_VOTING_PREVIOUS_VOTERS_CAST_COUNT                                    0x010B0734
#define DMP_CONF_FILE_ACCESS_UPLOAD_LOCK                                              0x010B0800
#define DMP_CONF_FILE_ACCESS_DOWNLOAD_LOCK                                            0x010B0801
#define DMP_CONF_FILE_ACCESS_UPLOAD_COMPLETE                                          0x010B0802
#define DMP_CONF_FILE_ACCESS_DOWNLOAD_COMPLETE                                        0x010B0803
#define DMP_CONF_FILE_ACCESS_LOCK                                                     0x010B0804
#define DMP_CONF_FILE_ACCESS_PATH                                                     0x010B0805
#define DMP_CONF_FILE_ACCESS_STATUS                                                   0x010B0806
#define DMP_CONF_FILE_ACCESS_USER_CI_ACTION                                           0x010B0807
#define DMP_CONF_FILE_ACCESS_USER_CI_ACTION_COMPLETE                                  0x010B0808
#define DMP_CONF_FILE_ACCESS_USER_CI_ACTION_CANCEL                                    0x010B0809
#define DMP_CONF_FILE_ACCESS_CLEAR_RESULTS                                            0x010B080A
#define DMP_CONF_FILE_ACCESS_CUSTOM_IMAGE_LOCK                                        0x010B080B
#define DMP_CONF_FILE_ACCESS_CUSTOM_IMAGE_CHECKSUM                                    0x010B080C
#define DMP_CONF_FILE_ACCESS_CUSTOM_IMAGE_STATUS                                      0x010B080D
#define DMP_CONF_FILE_ACCESS_CI_UPLOAD_ACTIVE                                         0x010B080E
#define DMP_CONF_FILE_ACCESS_CI_ACTION                                                0x010B0810
#define DMP_CONF_FILE_ACCESS_READY                                                    0x010B0812
#define DMP_CONF_FILE_ACCESS_CI_DEV_UPDATE_STATUS_MAP                                 0x010B0813
#define DMP_CONF_AGENDA_NUM_ITEMS                                                     0x010B0900
#define DMP_CONF_AGENDA_AGENDA                                                        0x010B0901
#define DMP_CONF_AGENDA_CLEAR                                                         0x010B0902
#define DMP_CONF_AGENDA_CURRENT_ITEM                                                  0x010B0903
#define DMP_CONF_AGENDA_ITEM_INSERT                                                   0x010B0904
#define DMP_CONF_AGENDA_ITEM_REMOVE                                                   0x010B0905
#define DMP_CONF_AGENDA_REQUEST_SET_CURRENT                                           0x010B0907
#define DMP_CONF_AGENDA_MULTI_LEVEL_ENABLE                                            0x010B0908
#define DMP_CONF_DUAL_DEL_INDIVIDUAL_SPEAK_MODE                                       0x010B0A00
#define DMP_CONF_DUAL_DEL_SPEAK_PRIORITY                                              0x010B0A02
#define DMP_CONF_DUAL_DEL_REPLY_LIST_STATUS                                           0x010B0A04
#define DMP_CONF_DUAL_DEL_REQUEST_LIST_POSITION                                       0x010B0A06
#define DMP_CONF_DUAL_DEL_SPEAK_LIST_STATUS                                           0x010B0A08
#define DMP_CONF_DUAL_DEL_VOTING_ALLOWED_DURING_PAUSE                                 0x010B0A40
#define DMP_CONF_DUAL_DEL_VOTING_PRESENCE_REQUEST                                     0x010B0A42
#define DMP_CONF_DUAL_DEL_VOTING_PRESENT                                              0x010B0A44
#define DMP_CONF_DUAL_DEL_VOTING_PROXY_VOTE_REQUEST                                   0x010B0A46
#define DMP_CONF_DUAL_DEL_VOTING_PROXY_VOTE_VALUE                                     0x010B0A48
#define DMP_CONF_DUAL_DEL_VOTING_VOTE_REQUEST                                         0x010B0A4A
#define DMP_CONF_DUAL_DEL_VOTING_VOTE_VALUE                                           0x010B0A4C
#define DMP_CONF_DUAL_DEL_VOTING_RIGHTS                                               0x010B0A4E
#define DMP_CONF_DUAL_DEL_INTERFACE_USER_BUTTON_EVENT                                 0x010B0A60
#define DMP_CONF_DUAL_DEL_INTERFACE_USER_BUTTON_INDICATION                            0x010B0A62
#define DMP_CONF_DUAL_DEL_AUDIO_MGMT_EXTERNAL_MUTE                                    0x010B0A84
#define DMP_CONF_DUAL_DEL_AUDIO_CHANNEL_ACTIVE                                        0x010B0A86
#define DMP_CONF_DUAL_DEL_NFC_CARD_DETECTED                                           0x010B0AC0
#define DMP_CONF_DUAL_DEL_NFC_CARD_ERROR                                              0x010B0AC2
#define DMP_CONF_DUAL_DEL_NFC_CHIP_CARD_DATA                                          0x010B0AC4
#define DMP_CONF_DUAL_DEL_NFC_LOGIN_STATE                                             0x010B0AC6
#define DMP_CONF_DUAL_DEL_NFC_DATA                                                    0x010B0AC8
#define DMP_CONF_DUAL_DEL_NFC_UID                                                     0x010B0ACA


#ifdef __cplusplus
}
#endif


/*! @} */


#endif // DMP_CONFERENCE_ADDR_DEFINITIONS_H