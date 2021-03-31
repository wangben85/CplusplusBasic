/***************************************************************************//**
 * @file
 *     Definitions for the CRC16 interconnect protocol.
 *
 * @details
 *    Header file for the CRC16 Interconnect Protocol described
 *    in Stellent document # 095868.  Note that this protocol is intended
 *    to be used for multiple communications applications between processors.
 *
 * @note
 *    The definition of the protocol includes features for future expansion.
 *    Currently the protocol supports basic communications. There is currently
 *    no provisions for retransmission.
 *
 * @warning
 *    None
 *******************************************************************************
 */

#ifndef CRC16ICPROTOCOL_H
#define CRC16ICPROTOCOL_H


#ifdef __ICCAVR__
#include "BspStdTypes.h"
#else
#include <stdint.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif


#define SYNC1_BYTE         0x11    /*!< First synchronization byte. */
#define SYNC2_BYTE         0x22    /*!< Second synchronization byte. */
#define IP_MAX_DATA_LENGTH 150     /*!< Max. payload size for any packet. */
   

/*!
 * CRC16 Diagnostics Compile-time switch
 * If ENABLE_CRC16_DIAGNOSTICS is defined with a non-zero value, diagnostic support is
 * included in the CRC16 Serial Protocol routines.
 */
#define ENABLE_CRC16_DIAGNOSTICS    0     // If non-zero, enable interface for displaying diagnostics

   
/*!
 * Protocol version numbers:
 *  - version that this end of the link supports
 *  - default/minimum version number
 */
#define INTERCONNECT_PROTOCOL_VERSION         3
#define DEFAULT_INTERCONNECT_PROTOCOL_VERSION 1


   /*!
    * Receive-side packet protocol states: used by the receive interrupt handler
    * to perform simple packet processing to verify that the packet was received
    * without error (received CRC bytes match what's calculated).
    */
   typedef enum
   {
      IP_ERROR_STATE,         /*!< Errored state awaiting new start of packet.*/
      IP_IDLE_STATE,          /*!< Awaiting valid start of packet. */
      IP_SYNC1_STATE,         /*!< Received first sync byte. */
      IP_SYNC2_STATE,         /*!< Received second sync byte. */
      IP_TRANS_STATE,         /*!< Received transaction number byte. */
      IP_CMD_STATE,           /*!< Received command byte. */
      IP_SUB_CMD_STATE,       /*!< Received sub-command byte. */
      IP_GET_DATA_STATE,      /*!< Received length, awaiting all payload (data) bytes. */
      IP_DATA_DONE_STATE,     /*!< Received all data bytes, awaiting CRC. */
      IP_CRC_HIGH_STATE,      /*!< Received high byte of CRC. */
      IP_CRC_LOW_STATE        /*!< Received low byte of CRC, processing packet. */
   } Crc16IpState_t;


   /*!
    * Front Panel Interconnect packet structure, per Stellent document # 095868.
    */
   typedef struct
   {
      uint8_t  Sync1;                        /*!< 1st sync byte. */
      uint8_t  Sync2;                        /*!< 2nd sync byte. */
      uint8_t  TransNum;                     /*!< Transaction number. */
      uint8_t  Command;                      /*!< Interconnect protocol command. */
      uint8_t  SubCommand;                   /*!< Interconnect protocol sub-command. */
      uint8_t  Length;                       /*!< Length of payload data area (0-128). */
      uint8_t  Payload[IP_MAX_DATA_LENGTH];  /*!< Actual payload data. */
      uint8_t  CrcHigh;                      /*!< High CRC byte. */
      uint8_t  CrcLow;                       /*!< Low CRC byte. */
   } Crc16IpPacket_t;


   /*! Front Panel interconnect protocol commands. */
   typedef enum
   {
      DATA_READ_REQUEST,      /*!< Data read request message. */
      DATA_READ_REPLY_OK,     /*!< Data read request response. */
      DATA_READ_REPLY_ERR,    /*!< Data read invalid request response. */
      DATA_WRITE_REQUEST,     /*!< Data write request message. */
      DATA_WRITE_REPLY_OK,    /*!< Data write request response. */
      DATA_WRITE_REPLY_ERR,   /*!< Data write request invalid. */
      BUFFER_FULL_ERR,        /*!< Buffer full: not currently used. */
      INVALID_PACKET_ERR,     /*!< Invalid packet. */
      NO_RESPONSE_TIMEOUT,    /*!< No repsonse timeout. */
      VERSION_REQUEST,        /*!< Protocol version request. */
      VERSION_REPLY,          /*!< Protocol version response. */
      XOFF,                   /*!< Flow Control Transfer Off. */
      XON,                    /*!< Flow Control Transfer On. */
      FP_LAST_COMMAND         /*!< Leave FP_LAST_COMMAND as the last entry! */
   } Crc16IpCmds_t;


#ifdef __cplusplus
}        /* extern "C" */
#endif

#endif   /* CRC16ICPROTOCOL_H */



