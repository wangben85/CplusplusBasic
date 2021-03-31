/***************************************************************************//**
 * @file
 *    Support functions for a simple generic protocol with CRC16.
 *
 * @details
 *    Front Panel Interconnect Protocol packet handling support.  Refer to
 *    the Front Panel Interconnect Protocol design document (Stellent # 095868)
 *    for protocol details.
 * @dot
 *  digraph {
 *       IP_ERROR_STATE ;
 *       IP_IDLE_STATE  ;
 *       IP_SYNC1_STATE ;
 *       IP_SYNC2_STATE;
 *       IP_TRANS_STATE;
 *       IP_CMD_STATE;
 *       IP_SUB_CMD_STATE;
 *       IP_GET_DATA_STATE;
 *       IP_DATA_DONE_STATE;
 *       IP_CRC_HIGH_STATE;
 *       IP_ERROR_STATE -> IP_IDLE_STATE;
 *       IP_ERROR_STATE -> IP_SYNC1_STATE [ label="SYNC1_BYTE == RcvdChar" ];
 *       IP_IDLE_STATE -> IP_ERROR_STATE;
 *       IP_IDLE_STATE -> IP_SYNC1_STATE  [ label="SYNC1_BYTE == RcvdChar" ];
 *       IP_SYNC1_STATE -> IP_ERROR_STATE ;
 *       IP_SYNC1_STATE -> IP_SYNC1_STATE [ label="SYNC1_BYTE == RcvdChar" ];
 *       IP_SYNC1_STATE -> IP_SYNC2_STATE [ label="SYNC2_BYTE == RcvdChar" ];
 *       IP_SYNC2_STATE -> IP_TRANS_STATE;
 *       IP_TRANS_STATE -> IP_CMD_STATE;
 *       IP_CMD_STATE -> IP_SUB_CMD_STATE;
 *       IP_SUB_CMD_STATE -> IP_DATA_DONE_STATE [ label="0 == RcvdChar" ];
 *       IP_SUB_CMD_STATE -> IP_GET_DATA_STATE  [ label="RcvdChar <= IP_MAX_DATA_LENGTH"];
 *       IP_SUB_CMD_STATE -> IP_ERROR_STATE;
 *       IP_GET_DATA_STATE -> IP_DATA_DONE_STATE [ label="0 == RemainingBytes" ];
 *       IP_GET_DATA_STATE -> IP_GET_DATA_STATE;
 *       IP_DATA_DONE_STATE -> IP_CRC_HIGH_STATE;
 *       IP_CRC_HIGH_STATE -> IP_IDLE_STATE;
 *   }
 * @enddot
 *
 * @note
 *    To keep this code "portable" all users of this C code must define their
 *    own external functions for serial port I/O the function templates are
 *    shown below
 *
 * @warning
 *    If your project needs the send character function defined below, you must
 *    supply a function matching the prototype via the defined macro.
 ******************************************************************************
 */

#include "Crc16IcPacket.h"
#include "Crc16IcProtocol.h"
#include "Crc16.h"
#include <stdlib.h>
#include <string.h>


#ifdef   USE_FPSENDCHAR
/* You must define this function elsewhere to keep the I/O portion
 * independent. Your function must handle any required file
 * pointers/handles.
 */
uint8_t     USE_FPSENDCHAR( void *fd, uint8_t OutChar );
#endif


/***************************************************************************//**
 * Process a character received on an interconnect port.
 * Called from the receive interrupt handler for the port.
 * Characters are processed using a simple packet state
 * machine.
 *
 * @param[in,out] smPtr       Pointer to the state machine data.
 * @param[in]     RcvdChar    Received character to be processed.
 *
 * @return        IP_COMPLETE - A complete packet was successfully received.
 *                IP_WAITING  - Waiting for a complete packet otherwise.
 *                IP_ERROR    - A packet error was detected.
 *
 * @note
 *    CRC16 (not CCITT) is computed on the fly.  Invalid sync bytes or
 *    out-of-bound length specifications cause a reset of the state machine
 *    (FSM) and a search for the beginning of the next packet.
 *
 * @warning
 *    None.
 ******************************************************************************
 */
uint8_t Crc16IpRcvChar( Crc16IpStateMachine_t *smPtr, uint8_t RcvdChar )
{
   uint16_t    SendersCrc;
   uint8_t     rc = IP_WAITING;

   /* Process this character based upon the current state of the
    * protocol state machine.
    *
    * Note:
    *  - Invalid characters cause an error then transition back to the idle
    *    state.
    *  - The CRC is calculated on all fields except for the received CRC bytes.
    */
   switch ( smPtr->State )
   {
   case  IP_ERROR_STATE:
      /* The errored state lasts only for one byte so that errors are only
       * reported once. After the error the state machine goes back to IDLE.
       */
      if ( SYNC1_BYTE == RcvdChar )
      {
         smPtr->LocalCrc = 0;              /* Initialize CRC */
         smPtr->Packet.Sync1 = RcvdChar;   /* store off 1st sync */
         smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar );  /* add to CRC */
         smPtr->State = IP_SYNC1_STATE;    /* advance state */
      }
      else
      {
         smPtr->State = IP_IDLE_STATE;     /* invalid char received, so reset FSM */
      }
      break;

   case IP_IDLE_STATE:
      /* Awaiting valid start of packet. Bytes received outside of a valid
       * detected packet are silently discarded.
       */
      if ( SYNC1_BYTE == RcvdChar )
      {
         smPtr->LocalCrc = 0;              /* Initialize CRC */
         smPtr->Packet.Sync1 = RcvdChar;   /* store off 1st sync */
         smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar );  /* add to CRC */
         smPtr->State = IP_SYNC1_STATE;    /* advance state */
      }
      else
      {
         smPtr->State = IP_ERROR_STATE;     /* invalid char received, so reset FSM */
         rc = IP_ERROR;
      }
      break;

   case IP_SYNC1_STATE:
      /* already received first sync */
      if ( SYNC2_BYTE == RcvdChar )
      {
         /* got 2nd sync byte */
         smPtr->Packet.Sync2 = RcvdChar;   /* store off 2nd sync */
         smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar );  /* add to CRC */
         smPtr->State = IP_SYNC2_STATE;    /* advance state */
      }
      else if ( SYNC1_BYTE == RcvdChar )
      {
         /* got the 1st sync byte again, it is an error but we can stay in this state */
         rc = IP_ERROR;
      }
      else
      {
         smPtr->State = IP_ERROR_STATE;     /* invalid char received, so reset FSM */
         rc = IP_ERROR;
      }
      break;

   case IP_SYNC2_STATE:
      /* already received second sync byte */
      smPtr->Packet.TransNum = RcvdChar;   /* store off transaction number */
      smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar ); /* add to CRC */
      smPtr->State = IP_TRANS_STATE;       /* advance state */
      break;

   case IP_TRANS_STATE:
      /* already received transaction number */
      smPtr->Packet.Command = RcvdChar;    /* store off command byte */
      smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar ); /* add to CRC */
      smPtr->State = IP_CMD_STATE;         /* advance state */
      break;

   case IP_CMD_STATE:
      /* already received command byte */
      smPtr->Packet.SubCommand = RcvdChar; /* store off sub-command byte */
      smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar ); /* add to CRC */
      smPtr->State = IP_SUB_CMD_STATE;     /* advance state */
      break;

   case IP_SUB_CMD_STATE:
      /* already received sub-command byte */
      smPtr->Packet.Length = RcvdChar;     /* store off length of optional payload data */
      smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar ); /* add to CRC */
      if ( 0 == RcvdChar )
      {
         smPtr->State = IP_DATA_DONE_STATE; /* no data, so skip data phase */
      }
      else if ( RcvdChar <= IP_MAX_DATA_LENGTH )
      {
         smPtr->RemainingBytes = RcvdChar; /* how many bytes of data to follow */
         smPtr->DataIndex = 0;             /* start of data buffer */
         smPtr->State = IP_GET_DATA_STATE; /* advance state */
      }
      else
      {
         smPtr->State = IP_ERROR_STATE;     /* invalid char received, so reset FSM */
         rc = IP_ERROR;
      }
      break;

   case IP_GET_DATA_STATE:
      /* already received length, awaiting data bytes */
      smPtr->LocalCrc = Crc16( smPtr->LocalCrc, RcvdChar ); /* save off accumulated CRC for this packet */
      smPtr->Packet.Payload[ smPtr->DataIndex++ ] = RcvdChar;  /* save off this data byte */
      if ( 0 == --smPtr->RemainingBytes )
      {
         smPtr->State = IP_DATA_DONE_STATE; /* last of the data bytes, so advance state */
      }
      break;

   case IP_DATA_DONE_STATE:
      /* already received any/all data bytes */
      smPtr->Packet.CrcHigh = RcvdChar;    /* save off upper 8 bits of CRC16 from sender */
      smPtr->State = IP_CRC_HIGH_STATE;
      break;

   case IP_CRC_HIGH_STATE:
      /* Already received high byte of CRC */
      smPtr->Packet.CrcLow = RcvdChar;     /* save off lower 8 bits of CRC16 from sender */
      SendersCrc = smPtr->Packet.CrcHigh;
      SendersCrc = ( SendersCrc << 8 ) | smPtr->Packet.CrcLow;
      /* Packet received OK and CRC matches:
       *  - inform caller that we've successfully received a complete packet.
       */
      rc = ( SendersCrc == smPtr->LocalCrc ) ? IP_COMPLETE : IP_ERROR;
      smPtr->State = IP_IDLE_STATE;        /* reset the packet FSM to receive next packet */
      break;

   default:
      /* Invalid state resets state machine. */
      smPtr->State = IP_ERROR_STATE;     /* invalid char received, so reset FSM */
      rc = IP_ERROR;
      break;
   }

   /*
    * return 1 if complete packet received.
    */
   return rc;
}


#ifdef   USE_FPSENDCHAR
/***************************************************************************//**
 * Send a packet using the FP protocol.
 *
 * @param[in]     file     Output file descriptor.
 * @param[in]     pPacket  Pointer to packet to be sent.
 *
 * @return       status: 1 for success, 0 on error
 *
 * @note
 *    Users of this function must supply a FpSendChar function to output
 *    a byte to the serial port.
 * @note
 *    Users of this function must supply a FpSendChar function that writes
 *    a byte to the output port you are using. The file descriptor (fd) is
 *    passed to your function to identify the port.
 *
 * @warning       None
 ******************************************************************************
 */
uint8_t Crc16IpSendPacket( void *fd, Crc16IpPacket_t *pPacket )
{
   uint8_t        rc = 1;           /* return code */
   const uint8_t  *pPktData;        /* used to step through packet fields */
   uint8_t        length;           /* length of optional data field */
   uint8_t        count;            /* payload data index */

   /* Sanity check parameter.  If OK, then sanity check packet
    * and calculate the CRC prior to sending it.
    */
   rc = rc && (NULL != pPacket);
   rc = rc && Crc16IpPrepPacket( pPacket );

   if ( rc )
   {
      length = pPacket->Length;   /* get current data field length */

      /* Send out the packet header (first sync byte through the length byte). */
      for ( pPktData = (const uint8_t *) &pPacket->Sync1;
            pPktData <= (const uint8_t *) &pPacket->Length;
            ++pPktData )
      {
         rc = rc && USE_FPSENDCHAR( fd, *pPktData );   /* check for any errors */
      }

      /* Now send any data that might be present in the packet. */
      for ( count = 0; count < length; ++count )
      {
         rc = rc && USE_FPSENDCHAR( fd, pPacket->Payload[count] );   /* check for any errors */
      }

      /*
       * Now send the remaining CRC bytes.
       */
      rc = rc && USE_FPSENDCHAR( fd, pPacket->CrcHigh );   /* check for any errors */
      rc = rc && USE_FPSENDCHAR( fd, pPacket->CrcLow );    /* check for any errors */
   }

   return rc;
}
#endif


/***************************************************************************//**
 * Allocate state machine buffer and initialize.
 *
 * @return           Pointer to the protocol state machine data.
 *
 * @note
 *    None
 *
 * @warning
 *    None
 ******************************************************************************
 */
Crc16IpStateMachine_t    *Crc16IpInit( void )
{
   Crc16IpStateMachine_t    *ptr;

   ptr = (Crc16IpStateMachine_t *) malloc( sizeof( Crc16IpStateMachine_t ) );
   if (NULL != ptr)
   {
      ptr->State = IP_IDLE_STATE;
   }
   return   ptr;
}


/***************************************************************************//**
 * Crc16IpGetPacket() - copies most recently received packet to caller's buffer.
 *
 * @param[in,out] smPtr             Pointer to state machine data.
 * @param[in]     pPacketBuffer     Address of caller's packet buffer.
 *
 * @return        1 if packet successfully copied,
 *                0 if any errors occurred.
 *
 * @note          must be called from receive interrupt handler immediately after
 *                Crc16IpRcvChar() returns 1 to avoid internal packet buffer
 *                from being overwritten.
 *
 * @warning       none
 ******************************************************************************
 */
uint8_t Crc16IpGetPacket( Crc16IpStateMachine_t *smPtr, Crc16IpPacket_t *pPacketBuffer )
{
   uint8_t rc = 0;

   if ( NULL != pPacketBuffer )
   {
      (void) memcpy( pPacketBuffer, &smPtr->Packet, sizeof( smPtr->Packet ) );
      rc = 1;
   }

   return rc;
}


/***************************************************************************//**
 * Crc16IpFastGetPacket() - copies most recently received packet to caller's buffer.
 *
 * @param[in,out] smPtr             Pointer to state machine data.
 * @param[in]     pPacketBuffer     Address of caller's packet buffer.
 *
 * @return        1 if packet successfully copied,
 *                0 if any errors occurred.
 *
 * @note          same as Crc16IpGetPacket except is the length value and only copies
 *                the amount of data that is valid, also doesn't copy the CRC bytes
 *
 * @warning       none
 ******************************************************************************
 */
uint8_t Crc16IpFastGetPacket( Crc16IpStateMachine_t *smPtr, Crc16IpPacket_t *pPacketBuffer )
{
   uint8_t rc = 0;
   // start with length of Packet struct minus payload minus CRC
   uint8_t length = ( sizeof( smPtr->Packet ) - IP_MAX_DATA_LENGTH - 2 );


   if ( NULL != pPacketBuffer )
   {
      length += smPtr->Packet.Length; // add back real payload size

      (void) memcpy( pPacketBuffer, &smPtr->Packet, length );
      rc = 1;
   }

   return rc;
}


/***************************************************************************//**
 * Sanity check and compute CRC for packet prior to sending
 * it out on the front panel interconnect port.
 *
 * @param[in]     pPacketBuffer     Pointer to packet buffer.
 *
 * @return        1 if packet and function parameter are OK,
 *                0 if an error occurred.
 *
 * @note          This routine computes a CRC and adds it to the packet
 *                CrcHigh and CrcLow fields.
 *
 * @warning       none
 ******************************************************************************
 */
uint8_t Crc16IpPrepPacket( Crc16IpPacket_t *pPacketBuffer )
{
   uint8_t     rc;
   uint16_t    SendersCrc;
   uint8_t     DataIndex;
   uint8_t     Length;

   /*
    * sanity check params
    */
   rc = ( NULL != pPacketBuffer );     /* valid packet pointer value? */

   /* sanity check packet fields:
    *  - command within range
    *  - length within range
    */
   rc = rc && (pPacketBuffer->Command <  FP_LAST_COMMAND);
   rc = rc && (pPacketBuffer->Length  <= IP_MAX_DATA_LENGTH);

   if ( rc )
   {
      pPacketBuffer->Sync1 = SYNC1_BYTE;  /* caller doesn't need to set these */
      pPacketBuffer->Sync2 = SYNC2_BYTE;

      /*
       * Now Perform a CRC16 calculation of the caller's packet.  Store
       * the CRC result in the packet prior to sending it.
       *
       * Refer to the Front Panel Interconnect Protocol design document
       * (Stellent # 095868) for further details.
       */
      SendersCrc = 0;
      SendersCrc = Crc16( SendersCrc, pPacketBuffer->Sync1 );
      SendersCrc = Crc16( SendersCrc, pPacketBuffer->Sync2 );
      SendersCrc = Crc16( SendersCrc, pPacketBuffer->TransNum );
      SendersCrc = Crc16( SendersCrc, pPacketBuffer->Command );
      SendersCrc = Crc16( SendersCrc, pPacketBuffer->SubCommand );
      Length = pPacketBuffer->Length;
      SendersCrc = Crc16( SendersCrc, Length );
      for ( DataIndex = 0; Length > 0; ++DataIndex, --Length )
      {
         SendersCrc = Crc16( SendersCrc, pPacketBuffer->Payload[ DataIndex ] );
      }
      pPacketBuffer->CrcHigh = (uint8_t) (SendersCrc >> 8);
      pPacketBuffer->CrcLow  = (uint8_t) (SendersCrc & 0xFF);
   }

   return rc;
}


