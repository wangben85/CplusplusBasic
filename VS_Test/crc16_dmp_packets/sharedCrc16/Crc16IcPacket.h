/***************************************************************************//**
 * @file
 *    Header for interconnect packet specific receive and send processing.
 *
 * @note
 *    None
 *
 * @warning
 *    None
 ******************************************************************************/


#ifndef CRC16IPPACKET_H
#define CRC16IPPACKET_H


#include "Crc16IcProtocol.h"
#ifdef __ICCAVR__
#include "BspStdTypes.h"
#else
#include <stdint.h>
#endif


#ifdef __cplusplus
extern "C"
{
#endif


   /*! Data storage for the protocol message state machine. */
   typedef struct
   {
      Crc16IpState_t          State;               /*!< Current state of the message parser state machine. */
      Crc16IpPacket_t         Packet;              /*!< Message being parsed. */

      uint16_t                LocalCrc;            /*!< Locally calculated message CRC. */

      uint8_t                 RemainingBytes;      /*!< Count of the parser position. */
      uint8_t                 DataIndex;           /*!< Index for the parsre into the message. */
   }  Crc16IpStateMachine_t;

   /*! Return codes from receive state machine.   */
   typedef enum
   {
      IP_WAITING,
      IP_ERROR,
      IP_COMPLETE
   } CRC16IpReturn;

   Crc16IpStateMachine_t   *Crc16IpInit( void );
   uint8_t                 Crc16IpRcvChar( Crc16IpStateMachine_t *smPtr, uint8_t RcvdChar );
   uint8_t                 Crc16IpGetPacket( Crc16IpStateMachine_t *smPtr,
                                             Crc16IpPacket_t *pPacketBuffer );
   uint8_t                 Crc16IpFastGetPacket( Crc16IpStateMachine_t *smPtr,
                                                 Crc16IpPacket_t *pPacketBuffer );
   uint8_t                 Crc16IpPrepPacket( Crc16IpPacket_t *pPacketBuffer );
   uint8_t                 Crc16IpSendPacket( void *fd, Crc16IpPacket_t * pPacket );

#ifdef __cplusplus
}        /* extern "C" */
#endif

#endif   /* CRC16IPPACKET_H */


