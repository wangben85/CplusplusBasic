/***************************************************************************//**
 * @brief
 *    CRC-16 protocol application level protocol definitions.
 *
 * @details
 *    Header file for CRC-16 Applications Protocol described
 *    in Stellent document # 096761.  Note that this protocol is
 *    used to communicate between applications code running on the
 *    front panel processor and applications code running on the
 *    main board processor.  This applications protocol is layered
 *    on top of the CRC-16 Interconnect Protocol, as described
 *    in Stellent document # 095868.
 *
 * @note
 *    None
 *
 * @warning
 *    None
 ******************************************************************************/

#ifndef CRC16IPAPPPROTOCOL_H
#define CRC16IPAPPPROTOCOL_H

#ifdef __ICCAVR__
#include "BspStdTypes.h"
#else
#include <stdint.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * Application Protocol commands (located in subcommand
 * field of Crc16 InterConnect packet Crc16IcPacket.h).
 *
 *
 * WARNING:
 * This subcommand table is used by ALL projects that utilize the Crc16IcPacket/protocol.
 * The value of each enum entry DOES MATTER and should NOT be changed!
 * Any new subcommand should take a new value instead of moving the existing ones!
 *
 *                            **
 *                           ****
 *                          **  **
 *                         ** ** **
 *                        ** **** **
 *                       **  ****  **
 *                      **   ****   **
 *                     **    ****    **
 *                    **      **      **
 *                   **                **
 *                  **        **        **
 *                 **        ****        **
 *                **          **          **
 *               ****************************
 *              ******************************
 */
typedef enum
{
   SUBCMD_NONE               = 0, /*!< reserved */
   SUBCMD_REBOOT             = 1, /*!< Reboot the device */
   SUBCMD_VERSION            = 2, /*!< Request the version of the device */
   SUBCMD_MANUFACTURING_DATA = 3, /*!< Request manufacturing data of the device */
   SUBCMD_BOARD_ID           = 4, /*!< Request Board ID (PCBA Revision) */
   SUBCMD_PRODUCT_ID         = 5, /*!< Request Product ID (PCBA Product ID) */

   SUBCMD_DMP_PARAMETER      = 8, /*!< Payload contains a DMP-addressable parameter. */

   SUBCMD_SDCP_MSG         = 9,  /*!< Payload contains a Simple DMP Control Protocol (SDCP) message. */

   SUBCMD_UI_CMD           = 10, /*!< Payload contains a UI display command. */

   SUBCMD_CLI              = 11,  /*!< Payload contains a CLI parameter. */

   SUBCMD_DSP_MSG          = 12,  /*!< Payload contains a DSP message. */
   
   SUBCMD_IR_PASSTHROUGH   = 13,  /*!< IR data passthrough */

   SUBCMD_PING             = 14,  /*!< Ping the device */
   SUBCMD_IR_PING          = 15,  /*!< Ping the device over IR */
   SUBCMD_SFD              = 16,  /*!< Simple File Download Protocol Msg */
   SUBCMD_IR_SFD           = 17,  /*!< Simple File Download Protocol Msg over IR */
   SUBCMD_IR_REBOOT        = 18,  /*!< Request reboot of device over IR */
   SUBCMD_PBP_MSG          = 19,  /*!< Payload contains a Packet Bridge Protocol (PBP) message. */

   /*PSM900 IR*/
   FIRST_PSM_IR_SUBCMD                       = 20, /*!< First PSM IR SubCmd */
   IR_SUBCMD_TEST_DATA                       = 20, /*!< for IrPut() */
   IR_SUBCMD_TX_SYNC_INITIATE                = 21, /*!< Tx: initiate sync */
   IR_SUBCMD_RX_SYNC_BAND_MISMATCH           = 22, /*!< Rx: respond to band mismatch between Tx and Rx (error) */
   IR_SUBCMD_RX_SYNC_BAND_LIMITING_MISMATCH  = 23, /*!< Rx: respond to band-limiting mismatch between Tx and Rx (error) */
   IR_SUBCMD_RX_SYNC_CUEPACK_LIST_FULL       = 24, /*!< Rx: respond to sync when Rx cuepack list full (error) */
   IR_SUBCMD_RX_SYNC_INVALID_TX_DATA         = 25, /*!< Rx: respond to invalid data sent by Tx (error) */
   IR_SUBCMD_RX_SYNC_TX_TO_RX_NORMAL         = 26, /*!< Rx: respond to successful Tx->Rx sync operation */
   IR_SUBCMD_RX_SYNC_RX_TO_TX_CHANNEL_SCAN   = 27, /*!< Rx: respond to successful post-channel-scan Rx->Tx sync operation */
   IR_SUBCMD_RX_SYNC_RX_TO_TX_GROUP_SCAN     = 28, /*!< Rx: respond to successful post-group-scan Rx->Tx sync operation */
   IR_SUBCMD_RX_SYNC_TX_TO_RX_SERVICE        = 29, /*!< Rx: respond to successful Tx->Rx (service mode) sync operation */
   IR_SUBCMD_TX_SYNC_ACKNOWLEDGE             = 30, /*!< Tx: acknowledge sync data from Rx, if any */
   IR_SUBCMD_SERIAL_NUM                      = 31, /*!< Get Serial Number of the board(ATE) */
   IR_SUBCMD_VERSION                         = 32, /*!< Get the Firmware Version */
   /* The following are additional subcommands for PSM1000 */
   IR_SUBCMD_RF_REPORT_REQUEST               = 33, /*!< client request rf scan result */
   IR_SUBCMD_RF_REPORT_SETUP                 = 34, /*!< server sending meta data */
   IR_SUBCMD_RF_REPORT_DATA                  = 35, /*!< server sending actual data */
   IR_SUBCMD_RF_REPORT_SETUP_ACK             = 36, /*!< server sending meta data */
   IR_SUBCMD_RF_REPORT_DATA_ACK              = 37, /*!< server sending actual data */
   IR_SUBCMD_SYNC_PING                       = 38, /*!< IR ping for SYNC use */
   LAST_PSM_IR_SUBCMD                        = 40, /*!< last PSM IR SubCmd */

   /* The following are additional subcommands for BH 2-UP chargers and other chargers which have Gang Communication Features*/
   SUBCMD_GANG_MSG                           = 41, /*!< Payload contains a Gang Communication message. */
   SUBCMD_DMP_CLUSTER_MSG                    = 42,  /*!< Payload contains a DMP Cluster Message.  */
   SUBCMD_SDT_CLUSTER_MSG                    = 43,  /*!< Payload contains a SDT Cluster Message.  */
                     
   /* The following subcommands are added for CTI messages over CRC16*/
   SUBCMD_CTI_MSG                            = 44,  /*!< Payload contains a CTI Message.  */
      
   SUBCMD_LAST_SUBCMD,                    /*!< No commands above this value. */

} FpSubCommands;

/*
 *  Misc. defines
 */
#define TRANS_FP_START           0     /*!< 1st valid transaction number for front panel */
#define TRANS_FP_END             127   /*!< last valid transaction number for front panel */
#define TRANS_MB_START           128   /*!< 1st valid transaction number for main board */
#define TRANS_MB_END             255   /*!< last valid transaction number for main board */

#define NAME_LENGTH              8     /*!< Maximum name length. */
#define NUM_DMP_PARMS            32    /*!< Maximum number of DMP parm values allowed per message. */
#define MAX_DMP_PARAMS           32

/*! Structure used to communicate DMP-addressable parameters to the device. */
typedef  struct
{
   uint32_t    DmpAddress;
   union
   {
      uint32_t    ParamMax[ MAX_DMP_PARAMS ];   // The maximum combined size of DmpAddress + data is IP_MAX_DATA_LENGTH
      uint32_t    ParmVal[ NUM_DMP_PARMS ];
      uint8_t     ParmStr[ NAME_LENGTH + 1 ];
      uint16_t    Param16;
      uint8_t     Param8;
   } data;
   uint8_t msgSize;
} DmpMsgStruct_t;


#ifdef __cplusplus
}
#endif

#endif /* CRC16IPAPPPROTOCOL_H */


