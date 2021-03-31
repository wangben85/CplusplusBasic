/***************************************************************************//**
* @file
*
* This file implements a very simple DMP (ANSI E1.17 standard) parser to
* create or parse an ANSI-Compliant DMP message.
*
* @note    Normally, this file should NOT be used.  ETC's ACN stack automatically
*          parses and creates ANSI compliant DMP for you.  However, if the
*          desire is to communicate with a DMP-payload outside of ACN (for
*          example IR sync, etc), then this parser should be used.
*
* @warning ETC DMP parsing functions below. The functions below are to pack
*          and un-pack DMP payloads. It is not intended to use these functions
*          for any network ACN purpose. The functions are taken from ETC's
*          stack and slightly modified to make a "static" DMP parser.
*          The parsing that happens in ETC's stack is more of a dynamic
*          parser that happens in the context of an SDT session or SDT
*          component.
*
* @note    All functions follow ETC's coding standards and conventions!!!
*          Don't ask for it to be changed!  The TODO's in this code
*          are the same TODO's in ACN stack (meaning TODO for ETC to do).
*******************************************************************************/


#include "DmpParser.hpp"
#include "string.h"


/**
 * @addtogroup Network
 * @{
 *    @addtogroup Network_Shared
 *    @{
 *
 */


// Annonymous namespace to hide the details.  Most of these functions
// are derivatives of the same function in ETC's ACN stack.
namespace
{

   /***************************************************************************//**
                             "defpack.h" Functions
   *******************************************************************************/

#if (defined(BYTE_ORDER) && (BYTE_ORDER==BIG_ENDIAN)) || (defined(_BYTE_ORDER) && (_BYTE_ORDER==_BIG_ENDIAN)) || (defined(__BYTE_ORDER) && (__BYTE_ORDER==__BIG_ENDIAN))


   //Packs a uint1 to a known big endian buffer
   inline void packB1(uint1* ptr, uint1 val)
   {
      *ptr = val;
   }
   
   //Unpacks a uint1 from a known big endian buffer
   inline uint1 unpackB1(const uint1* ptr)
   {
      return *ptr;
   }
   
   //Packs a uint2 to a known big endian buffer
   inline void packB2(uint1* ptr, uint2 val)
   {
      *((uint2*)ptr) = val;
   }
   
   //Unpacks a uint2 from a known big endian buffer
   inline uint2 unpackB2(const uint1* ptr)
   {
      return *((uint2*)ptr);
   }
   
   //Packs a uint4 to a known big endian buffer
   inline void packB4(uint1* ptr, uint4 val)
   {
      *((uint4*)ptr) = val;
   }
   
   //Unpacks a uint4 from a known big endian buffer
   inline uint4 unpackB4(const uint1* ptr)
   {
      return *((uint4*)ptr);
   }
   
   //Packs a uint8 to a known big endian buffer
   inline void packB8(uint1* ptr, uint8 val)
   {
      *((uint8*)ptr) = val;
   }


   //Unpacks a uint4 from a known big endian buffer
   inline uint8 unpackB8(const uint1* ptr)
   {
      return *((uint8*)ptr);
   }
#else  // these versions will work on any architecture

   //Packs a uint1 to a known big endian buffer
   inline void	packB1(uint1* ptr, uint1 val)
   {
      *ptr = val;
   }

   //Unpacks a uint1 from a known big endian buffer
   inline uint1 unpackB1(const uint1* ptr)
   {
      return *ptr;
   }   
   
   //Packs a uint2 to a known big endian buffer
   inline void packB2(uint1* ptr, uint2 val)
   {
      ptr[1] = (uint1)(val & 0xff);
      ptr[0] = (uint1)((val & 0xff00) >> 8);
   }

   //Unpacks a uint2 from a known big endian buffer
   inline uint2 unpackB2(const uint1* ptr)
   {
      return (uint2)(ptr[1] | ptr[0] << 8);
   }
   
   //Packs a uint4 to a known big endian buffer
   inline void packB4(uint1* ptr, uint4 val)
   {
      ptr[3] = (uint1) (val & 0xff);
      ptr[2] = (uint1)((val & 0xff00) >> 8);
      ptr[1] = (uint1)((val & 0xff0000) >> 16);
      ptr[0] = (uint1)((val & 0xff000000) >> 24);
   }

   //Unpacks a uint4 from a known big endian buffer
   inline uint4 unpackB4(const uint1* ptr)
   {
     return (uint4)(ptr[3] | (ptr[2] << 8) | (ptr[1] << 16) | (ptr[0] << 24));
   }
   
   //Packs a uint8 to a known big endian buffer
   inline void packB8(uint1* ptr, uint8 val)
   {
      ptr[7] = (uint1) (val & 0xff);
      ptr[6] = (uint1)((val & 0xff00) >> 8);
      ptr[5] = (uint1)((val & 0xff0000) >> 16);
      ptr[4] = (uint1)((val & 0xff000000) >> 24);
      ptr[3] = (uint1)((val & 0xff00000000ULL) >> 32);
      ptr[2] = (uint1)((val & 0xff0000000000ULL) >> 40);
      ptr[1] = (uint1)((val & 0xff000000000000ULL) >> 48);
      ptr[0] = (uint1)((val & 0xff00000000000000ULL) >> 56);
   }
   
   //Unpacks a uint8 from a known big endian buffer
   inline uint8 unpackB8(const uint1* ptr)
   {
      return ((uint8)ptr[7]) | (((uint8)ptr[6]) << 8) | (((uint8)ptr[5]) << 16) |
             (((uint8)ptr[4]) << 24) | (((uint8)ptr[3]) << 32) | 
             (((uint8)ptr[2]) << 40) | (((uint8)ptr[1]) << 48) | 
             (((uint8)ptr[0]) << 56);
   }

#endif
   
   /***************************************************************************//**
                             "VHD.cpp" Functions
   *******************************************************************************/
   
   const uint VHD_MAXMINLENGTH = 4095;  //The highest length that will fit in the "smallest" length pack
   
   
   //Defines for the VHD flags
   const uint1 VHD_L_FLAG = 0x80;
   const uint1 VHD_V_FLAG = 0x40;
   const uint1 VHD_H_FLAG = 0x20;
   const uint1 VHD_D_FLAG = 0x10;

   //Given a pointer, packs the VHD inheritance flags.  The pointer returned is the 
   //SAME pointer, since it is assumed that length will be packed next
   uint1* vhd_PackFlags(uint1* pbuffer, bool inheritvec, bool inherithead, bool inheritdata)
   {
      uint1* p = pbuffer;
      uint1 newbyte = unpackB1(p) & 0x8f;  //Mask out the VHD bits to keep the length intact

      //Update the byte flags
      if(!inheritvec)
         newbyte |= VHD_V_FLAG;
      if(!inherithead)
         newbyte |= VHD_H_FLAG;
      if(!inheritdata)
         newbyte |= VHD_D_FLAG;
      packB1(p, newbyte);
      return pbuffer;
   }

   //Given a pointer, packs the length.  The pointer returned is the pointer
   // to the rest of the buffer.  It is assumed that pbuffer contains at 
   // least 3 bytes.  If inclength is true, the resultant length of the flags and
   // length field is added to the length parameter before packing
   uint1* vhd_PackLength(uint1* pbuffer, uint4 length, bool inclength)
   {	
      uint1* p = pbuffer;
      uint4 mylen = length;
      if(inclength)
      {
         if(length + 1 > VHD_MAXMINLENGTH)
            mylen += 2;
         else
            ++mylen;
      }

      uint1 newbyte = unpackB1(p) & 0x70;  //Mask out the length bits to keep the other flags intact
      //Set the length bit if necessary
      if(mylen > VHD_MAXMINLENGTH)
         newbyte |= VHD_L_FLAG;

      //pack the upper length bits
      uint1 packbuf[4];  //we have to manipulate the big endian bits
      packB4(packbuf, mylen);
      if(mylen <= VHD_MAXMINLENGTH)
      {
         //Packbuf[0] and [1] should be empty, and the upper bits of [2] should be empty
         newbyte |= packbuf[2] & 0x0f;
         packB1(p, newbyte);
         ++p;
         packB1(p, packbuf[3]);
         ++p;
      }
      else
      {
         //Packbuf[0] and the upper bits of [1] are ignored
         //We give a max length constant, so the user is warned
         newbyte |= (packbuf[1] & 0x0f);
         packB1(p, newbyte);
         ++p;
         packB1(p, packbuf[2]);
         ++p;
         packB1(p, packbuf[3]);
         ++p;
      }
      return p;
   }

   //Given a pointer and vector size, packs the vector.  
   // The pointer returned is the pointer to the rest of the buffer.
   //It is assumed that pbuffer contains at least 4 bytes.
   uint1* vhd_PackVector(uint1* pbuffer, uint4 vector, uint vecsize)
   {
      uint1* p = pbuffer;
      if(vecsize == 1)
      {
         packB1(pbuffer, static_cast<uint1>(vector));
         ++p;
      }
      else if(vecsize == 2)
      {
         packB2(pbuffer, static_cast<uint2>(vector));
         p += 2;
      }
      else
      {
         packB4(pbuffer, vector);
         p += 4;
      }
      return p;
   }

   const uint1* vhd_GetFlagLength(const uint1* const pbuffer, bool& inheritvec,
                               bool& inherithead, bool& inheritdata, uint4& length)
   {
      inheritvec = (*pbuffer & VHD_V_FLAG) == 0;
      inherithead = (*pbuffer & VHD_H_FLAG) == 0;
      inheritdata = (*pbuffer & VHD_D_FLAG) == 0;
      bool lensmall = (*pbuffer & VHD_L_FLAG) == 0;
      uint1 upackbuf[4];  //We need to manipulate bits
      if(lensmall)
      {
         upackbuf[0] = 0;
         upackbuf[1] = 0;
         upackbuf[2] = *pbuffer & 0x0f;
         upackbuf[3] = *(pbuffer + 1);
         length = unpackB4(upackbuf);
         return pbuffer + 2;	//flag/len byte and len byte
      }
      else
      {
         upackbuf[0] = 0;
         upackbuf[1] = *pbuffer & 0x0f;
         upackbuf[2] = *(pbuffer + 1);
         upackbuf[3] = *(pbuffer + 2);
         length = unpackB4(upackbuf);
         return pbuffer + 3; //flag/len byte, and 2 len bytes
      }
   }


   const uint1* vhd_GetVector1(const uint1* const pbuffer, uint1& vector)
   {
      vector = unpackB1(pbuffer);
      return pbuffer + 1;
   }
   
   // ========================================
   // Pack functions
   // ========================================
   
   uint1 calcHeaderByte( const DMPAddress& address )
   {
      uint1 newByte = 0;
      uint1 nAddrElemSize = 0;
      vhdHeader   header = address.GetHeader();
      uint1    nAddrType = address.GetAddrType();

      // Do the first octet of the header
      if ( address.IsVirtual() )  // set bit 7
         newByte |= 0x80;

      if ( address.IsRelative() )  // set bit 6
         newByte |= 0x40;

      if (address.IsAddrVariableLen())
      {
         // set reserved bit  2
         newByte |= 0x4;
         // set reserved address size
         newByte |= 0x3;
      }
      else
      {
         // Set the size bits (0-1); bits 2 & 3 are reserved
         // Note that nAddrElemSize MUST be 0, 1 or 2.  All other values are invalid.
         if (header.address > 0xFFFF || header.increment > 0xFFFF || header.count > 0xFFFF)
            nAddrElemSize = 2;
         else if (header.address > 0xFF || header.increment > 0xFF || header.count > 0xFF)
            nAddrElemSize = 1;
         newByte |= nAddrElemSize;
      }

      if ( nAddrType == ADDRTYPE_RANGE_SINGLE )  // set bits 4-5 (addr/data type)
         newByte |= 0x10;
      else if ( nAddrType == ADDRTYPE_RANGE_FIXED )
         newByte |= 0x20;
      else if ( nAddrType == ADDRTYPE_RANGE_MIXED )
         newByte |= 0x30;

      return newByte;
   }

   // Pack the DMP version 3 header byte
   uint1* packHeader( uint1* pBuffer, const DMPAddress& address )
   {
      uint1*   p = pBuffer;
      packB1( p++, calcHeaderByte( address ) );

      return p;
   }


   uint1* packAddress( uint1* pBuffer, vhdHeader header )
   {
      uint1*   p = pBuffer;
      bool  bIsRange = (header.count > 1);

      // Pack the address value(s)
      if ( header.numBytes == 1 )
      {
         packB1( p++, static_cast<uint1>( header.address ) );

         if ( bIsRange )
         {
            packB1( p++, static_cast<uint1>( header.increment ) );
            packB1( p++, static_cast<uint1>( header.count ) );
         }
      }
      else if ( header.numBytes == 2 )
      {
         packB2( p, static_cast<uint2>( header.address ) );
         p += 2;

         if ( bIsRange )
         {
            packB2( p, static_cast<uint2>( header.increment ) );
            p += 2;
            packB2( p, static_cast<uint2>( header.count ) );
            p += 2;
         }
      }
      else if ( header.numBytes == 4 )
      {
         packB4( p, header.address );
         p += 4;

         if ( bIsRange )
         {
            packB4( p, header.increment );
            p += 4;
            packB4( p, header.count );
            p += 4;
         }
      }
      else if (header.numBytes == 0xFF)
      {
         // include 2 byte length in overall length like variable binary object
         uint2 strLen = header.varAddress.length();
         uint2 len = strLen + 2;
         packB2(p, len);
         p += 2;
         memcpy(p, header.varAddress.c_str(), strLen);
         p += strLen;
      }

      return p;
   }

   // Pack the buffer values of the address range into pPackBuf.
   // NOTE: This DOESN'T handle a mixed size data array!!
   DMPError packValue( uint1* pPackBuf,
                                  const DMPAddress& address, uint len,
                                  const uint1* buf, DMPType type,
                                  uint elemSize )
   {
      if ( (pPackBuf == NULL) || (buf == NULL) )
         return DMPNoData;

      // Assume 1 data item
      uint  nItemSize;
      uint  numDataItems   = 1;
      uint  used        = len;
      uint4 count = address.GetAddrCount();

      //TODO: This DOESN'T handle a mixed size data array!!
      if ( address.GetAddrType() == ADDRTYPE_RANGE_FIXED ) // Fixed Size Data Array
      {
         if ( count <= 0 )
            return DMPFail;

         if ( (len % count) != 0 )  // no remainder allowed
            return DMPTooLong;

         used = nItemSize = elemSize;
         numDataItems = count;
      }
      else if (type == DMPvarBinOb )
      {
         // If we're dealing with a string, adjust the values to take
         // into account the 2-byte length for each string in the range.
         used -= 2;
         nItemSize = len - 2;
      }
      else
      {
         nItemSize = len;
      }
      // Pack the value directly into pPackBuf
      uint1 *  packBuf = pPackBuf;
      uint2 offset;
      uint2 strBufOffset;

      for ( uint2 i = 0; i < numDataItems; i++ )
      {
         offset = (uint2)nItemSize * i;

         // Pack the value into the pdu.
         switch ( type )
         {
            case DMPs1int:
            case DMPu1int:
            case DMPbool:
               packB1( packBuf + offset, *((uint1*)(buf + offset)) );
               break;
            case DMPs2int:
            case DMPu2int:
               packB2( packBuf + offset, *((uint2*)(buf + offset)) );
               break;
            case DMPs4int:
            case DMPu4int:
            case DMPfloat:
               packB4( packBuf + offset, *((uint4*)(buf + offset)) );
               break;
            case DMPs8int:
            case DMPu8int:
            case DMPdouble:
               packB8( packBuf + offset, *((uint8*)(buf + offset)) );
               break;
            case DMPfixBinOb:
               memcpy( packBuf + offset, (buf + offset), used );  // copy the octets
               break;
            case DMPvarBinOb:
               strBufOffset = offset + (i << 1);
               packB2( packBuf + strBufOffset, (uint2)used + 2 );       // pack the length
               memcpy( packBuf + strBufOffset + 2, (buf + offset), used ); // copy the octets
               break;
            case DMPUnknown:  //TODO: handle Unknown case (fail?)
            default:
               return DMPNotFound;
         }
      }

      return DMPSuccess;
   }



   // ========================================
   // Unpack functions
   // ========================================

   // Unpack the header value.  The pointer returned is the
   // pointer to the rest of the buffer.
   uint1* unPackHeader( const uint1* const pBuffer,
                                               bool& bVirtual,
                                               bool& bRelative,
                                               bool& bVarSizeAddr,
                                               uint1& nAddrType,
                                               uint1& nSize )
   {
      uint1*   p = (uint1*)pBuffer;

      bVirtual = ((*p & 0x80) == 0x80) ? true : false;
      bRelative   = ((*p & 0x40) == 0x40) ? true : false;
      // Reserved Bit 2 used to indicate variable length address
      bVarSizeAddr = ((*p & 0x04) == 0x04) ? true : false;
      nAddrType   = (*p & 0x30) >> 4;
      // Bit 3 is still reserved
      nSize    = *p & 0x03;

      return ++p;

   }

   // Unpack the address elements.  The pointer returned is the
   // pointer to the rest of the buffer.
   uint1* unPackAddress( const uint1* const pBuffer,
                                                vhdHeader& header, uint1 nAddrType,
                                                uint1& nSize )
   {
      uint1*   p = (uint1*)pBuffer;

      // Get the address based upon the AddrType
      if ( nAddrType != ADDRTYPE_SINGLE )
      {
         switch ( nSize )
         {
            case 0:  // Ranged 1-byte address
               header.address = (uint4)unpackB1( p++ );
               header.increment = (uint4)unpackB1( p++ );
               header.count = (uint4)unpackB1( p++ );
               header.numBytes = 1;
               break;
            case 1:  // Ranged 2-byte address
               header.address = (uint4)unpackB2( p );
               p += 2;
               header.increment = (uint4)unpackB2( p );
               p += 2;
               header.count = (uint4)unpackB2( p );
               p += 2;
               header.numBytes = 2;
               break;
            case 2:  // Ranged 4-byte address
               header.address = unpackB4( p );
               p += 4;
               header.increment = unpackB4( p );
               p += 4;
               header.count = unpackB4( p );
               p += 4;
               header.numBytes = 4;
         }
      }
      else // single address
      {
         header.increment = header.count = 0;

         switch ( nSize )
         {
            case 0:  // Single 1-byte address
               header.address = (uint4)unpackB1( p++ );
               header.numBytes   = 1;
               break;
            case 1:  // Single 2-byte address
               header.address = (uint4)unpackB2( p );
               p += 2;
               header.numBytes = 2;
               break;
            case 2:  // Single 4-byte address
               header.address = unpackB4( p );
               p += 4;
               header.numBytes = 4;
               break;
            case 3: // Variable length address type
               {
                  uint2 addrLen = unpackB2(p);
                  p += 2;
                  uint2 addrStrLen = addrLen - 2;
                  header.varAddress.assign(reinterpret_cast<char*>(p), addrStrLen);
                  p += addrStrLen;
                  header.numBytes = 0xFF;
               }
               break;
         }
      }

      return p;

   }

}  // end annonymous namespace


// Public functions
/***************************************************************************//**
 * Creates a DMP PDU based on the given inputs
 *
 * @param[out]        pPackBuffer output packet buffer
 * @param[in]         vector      DMP vector
 * @param[in]         address     DMP address
 * @param[in]         pData       pointer to data
 * @param[in]         t           data size info
 *
 * @return   total packet length
 *
 * @note
 *    None
 ******************************************************************************/
uint2 DMPX::CreateDmpMsg( uint1* pPackBuffer, uint1 vector, const DMPAddress& address, const uint1* pData, const TypeSize& t  )
{
   uint  totalLen = 0;
   uint2 dataLen = t.size;
   if (pPackBuffer)
   {
      // Track the length required by the send buffer:
      // flag bytes (2), vector (1), header (1) plus output buffer length
      totalLen = 4;

      uint1* pPackBuf = pPackBuffer;

      // first calculate the address length
      totalLen += address.GetAddressLength();

      // for var bin object - add 2 bytes for length
      if (DMPvarBinOb == t.type)
      {
         dataLen+=2;
      }
      // now data length
      totalLen+= dataLen;

      // Pack the VHD inheritance flags.  The pointer returned is the SAME
      // pointer, since it is assumed that length will be packed next.
      pPackBuf = vhd_PackFlags( pPackBuf, false, false, false );

      // Packs the length.  The pointer returned is the pointer to the
      // rest of the buffer.
      pPackBuf = vhd_PackLength( pPackBuf, totalLen, false );

      // Pack the vector (will always be 1-byte in DMP)
      pPackBuf = vhd_PackVector( pPackBuf, vector, 1 );

      // Pack the header byte (will always be 1-byte in DMP)
      pPackBuf = packHeader( pPackBuf, address );

      // Now pack the address
      pPackBuf = packAddress( pPackBuf, address.GetHeader() );

      // Pack in the data buffer
      packValue(pPackBuf, address, dataLen, pData, t.type, t.size);
   }

   return totalLen;
}

/***************************************************************************//**
 * Gets the size of a DMP PDU with the given inputs
 *
 * @param[in]         vector      DMP vector
 * @param[in]         address     DMP address
 * @param[in]         t           data size info
 *
 * @return   total packet length
 *
 * @note
 *    None
 ******************************************************************************/
uint2 DMPX::GetDmpMsgSize(uint1 vector, const DMPAddress& address, const TypeSize& t)
{
   // flag bytes (2), vector (1), header (1) plus output buffer length
   uint2 msgSize = 4 + address.GetAddressLength();
   size_t dataLen = 0;
   switch (vector)
   {
   case DMP_GET_PROP_REPLY:
   case DMP_EVENT:
   case DMP_SET_PROPERTY:
      if (DMPvarBinOb == t.type)
      {
         dataLen += 2;
      }
      dataLen += t.size;
      break;
   case DMP_SUBSCRIBE_ACCEPT:
   case DMP_GET_PROPERTY:
   case DMP_SUBSCRIBE:
   case DMP_UNSUBSCRIBE:
      // no data
      break;
   case DMP_GET_PROP_FAIL:
   case DMP_SET_PROP_FAIL:
   case DMP_SUBSCRIBE_REJECT:
      // return code
      dataLen += 1;
      break;
   default:
      printf("DMPX::GetDmpMsgSize: Supported vector: %d received\n", vector);
      break;
   }

   msgSize += dataLen;
   return msgSize;
}

/***************************************************************************//**
 * Helper function to Parse a buffer containing a DMP PDU
 *
 * @param[in]         pBuffer     pointer to the buffer to parse
 * @param[out]        vector      DMP Vector
 * @param[out]        address     DMP Address
 * @param[in, out]    pData       input - reference to an 8 bit pointer(value is a don't care)
                                  output - reference to pointer of the start of the dmp PDU data
 * @param[out]        dataLen     size of the associated PDU data
 * 
 * @return   true for success, false if unsupported
 *
 * @note
 *    None
 ******************************************************************************/
bool DMPX::ParseDmpMsg ( const uint1* pBuffer, uint1& vector, DMPAddress& address, const uint1*& pData, uint2& dataLen )
{
   // Process a single DMP VHD block
   int tstpdulen = 0;  //Used for various length comparisons
   uint4 vhdLength   = 0;

   bool bInheritVec = false;
   bool bInheritHdr = false;
   bool bInheritData = false;
   bool bVarSizeAddr = false;

   uint1* pCurBuf = const_cast<uint1*>(vhd_GetFlagLength( pBuffer, bInheritVec, bInheritHdr, bInheritData, vhdLength ));
   
   // Validate vector inheritance
   if ( bInheritVec )
   {
      // inherit vector from passed in vector
      if ( vector < DMP_GET_PROPERTY )
         return false; // nothing given to inherit - error
   }
   else
   {
      // extract vector and increment buffer pointer
      pCurBuf = (uint1*)vhd_GetVector1( pCurBuf, vector );
   }

   // Validate vector value //! @note using SUBSCRIBE reject as we don't handle mapping
   if ( vector > DMP_SUBSCRIBE_REJECT )
      return false;

   uint1 nAddrType;
   uint1 nAddrElemSize;

   bool bVirtual = false;
   bool bRelative = false;
   
   if ( bInheritHdr )
   {
      // inherit address type from passed in address
      bVirtual = address.IsVirtual();
      bRelative = address.IsRelative();
      nAddrType = address.GetAddrType();
      bVarSizeAddr = address.IsAddrVariableLen();

      if ( nAddrType > ADDRTYPE_RANGE_MIXED )
         return false; // bad data given to inherit from - error
      if( bVarSizeAddr )
      {
         nAddrElemSize = 3;
         if (address.GetNumBytes() != 0xFF)
            return false; // bad data given to inherit from - error
      }
      else
      {
         nAddrElemSize = address.GetNumBytes() / 2;
         if (nAddrElemSize > 2)
            return false; // bad data given to inherit from - error
      }
   }
   else
   {
      // extract header and increment buffer pointer
      pCurBuf = unPackHeader( pCurBuf, bVirtual, bRelative, bVarSizeAddr,
                             nAddrType, nAddrElemSize );
   }

   // There can be no virtual or relative right now
   if ( (bVirtual || bRelative ) )
      return false;

   tstpdulen = vhdLength - (pCurBuf - pBuffer);
   if(tstpdulen < 0)
      return false;

   dataLen  = (uint2)tstpdulen;

   vhdHeader   header;

   if ( bInheritData )
   {
      // inherit address header from passed in address
      pData = pCurBuf;
      header.address = address.GetBaseAddr();
      header.increment = address.GetIncrement();
      header.count = address.GetAddrCount();
      header.numBytes = address.GetNumBytes();
   }
   else
   {
      // Create a DMPAddress object for process(Virt/Range)Address()
      pData = unPackAddress( pCurBuf, header, nAddrType,
                                     nAddrElemSize );    
   }
   
   address = DMPAddress ( header, false, false, nAddrType );
   
   if ( !bInheritData )
   {
      // Only subtract the address length from the data length if the data is NOT inherited.
      dataLen -= address.GetAddressLength();
   }
 
   return true;
}

/***************************************************************************//**
 * Helper function to unpack data
 *
 * @param[in]         address     the DMP class
 * @param[in]         pInData     pointer to the input data buffer
 * @param[in]         inDataLen   length of input data
 * @param[out]        pOutData    pointer to the output data buffer
 * @param[in, out]    OutBufSize  size of the output buffer when entering function
 *                               length of output data when exiting function. 
 * @param[in]         t           data size info 
 * 
 * @return   true for success, false if unsupported
 *
 * @note
 *    None
 ******************************************************************************/
bool DMPX::UnPackData(const DMPAddress& address,  const uint1* pInData, const uint2 inDataLen, uint1* pOutData, size_t& OutBufSize,  const TypeSize& t)
{
   bool retVal = true;
   size_t outDataLen = 0; 
   
   if ( pInData == NULL ||  pOutData == NULL || !t.bFixed )
   {
      return false;
   }

   // Assume 1 data item
   uint  nItemSize;
   uint  numDataItems = 1;
   uint4 count = address.GetAddrCount();
   
   //TODO: This DOESN'T handle a mixed size data array!!
   if( address.GetAddrType() == ADDRTYPE_RANGE_FIXED ) // Fixed Size Data Array
   {
      if ( count <= 0 )
         return false;

      if ( inDataLen != (count*t.size))  // no remainder allowed
         return false;
      
      if ( ( t.type == DMPvarBinOb ) && ( count > 1) )
      {
         printf( "Number of data items must not exceed 1 for DMPvarBinOb type." );
         return false;
      }

      nItemSize = t.size;
      numDataItems = count;
   }
   else if (t.type == DMPvarBinOb )
   {
      // If we're dealing with a string, adjust the values to take
      // into account the 2-byte length for each string in the range.
      nItemSize = inDataLen - 2;
   }
   else
   {
      nItemSize = inDataLen;
   }
   //Check if output buffer is large enough to store all the data.
   if( OutBufSize < (numDataItems * nItemSize))
   {
      printf("Output buffer size of at least %d byte(s) required. DMP address: %s ", (numDataItems * nItemSize), address.ToString().c_str());
      OutBufSize = outDataLen;
      return false;
   }

   // unPack the value into pOutData and update the local variable outDataLen
   uint2 offset;
   for ( uint2 i = 0; i < numDataItems; i++ )
   {
      offset = (uint2)nItemSize * i;      

      // unPack the value from the pdu.
      switch ( t.type )
      {
         case DMPs1int:
         case DMPu1int:
         case DMPbool:
            *((uint1*) ( pOutData + offset ) ) = unpackB1( pInData + offset );
            outDataLen += 1;
            break;
         case DMPs2int:
         case DMPu2int:
            *((uint2*) ( pOutData + offset ) ) = unpackB2( pInData + offset );
            outDataLen += 2;
            break;
         case DMPs4int:
         case DMPu4int:
         case DMPfloat:
            *((uint4*) ( pOutData + offset ) ) = unpackB4( pInData + offset );
            outDataLen += 4;
            break;
         case DMPs8int:
         case DMPu8int:
         case DMPdouble:
            *((uint8*) ( pOutData + offset ) ) = unpackB8( pInData + offset );
            outDataLen += 8;
            break;
         case DMPfixBinOb:
            memcpy ( ( pOutData + offset ), ( pInData + offset ), nItemSize ); 
            outDataLen += nItemSize;
            break;
         case DMPvarBinOb:
            // dealing with string, numDataItems = 1, ignore offset.
            {
               uint2 varLen = unpackB2(pInData);
               if ( varLen <= inDataLen )
               {
                  memcpy ( pOutData, (pInData+2), (varLen - 2) );
                  outDataLen = (varLen - 2);
               }
               else
               {
                  // The message contains an invalid length field ... reject it                 
                  retVal = false;
               }
            }
            break;
         case DMPUnknown:
            memcpy ( ( pOutData + offset ), ( pInData + offset ), nItemSize ); 
            outDataLen += nItemSize;
           break;
         default:
            // not supported
            retVal = false;
            break;
      }
   }
   //Copy the final outDataLen to OutBufSize.
   OutBufSize = outDataLen;
   return retVal;
}


/***************************************************************************//**
 * Legacy API to support existing code, new code shall NOT use this.
 *
 * this API shall be removed once all legacy users are updated to not use this function.
 *
 * @param[out]        pPackBuffer output packet buffer
 * @param[in]         vector      DMP vector
 * @param[in]         address     DMP address
 * @param[in]         pData       pointer to data
 * @param[in]         dataLen     data length
 * @param[in]         t           data size info
 *
 * @return   total packet length
 *
 * @note
 *    None
 ******************************************************************************/
uint2 DMPX::CreateDmpMsg( uint1* pPackBuffer, uint1 vector, const DMPAddress& address, const uint1* pData, uint2 dataLen, const TypeSize& t  )
{
   uint  totalLen = 0;

   if (pPackBuffer)
   {
      // Track the length required by the send buffer:
      // flag bytes (2), vector (1), header (1) plus output buffer length
      totalLen = 4;

      uint1* pPackBuf = pPackBuffer;

      // first calculate the address length
      totalLen += address.GetAddressLength();

      // now data length
      totalLen+= dataLen;

      // Pack the VHD inheritance flags.  The pointer returned is the SAME
      // pointer, since it is assumed that length will be packed next.
      pPackBuf = vhd_PackFlags( pPackBuf, false, false, false );

      // Packs the length.  The pointer returned is the pointer to the
      // rest of the buffer.
      pPackBuf = vhd_PackLength( pPackBuf, totalLen, false );

      // Pack the vector (will always be 1-byte in DMP)
      pPackBuf = vhd_PackVector( pPackBuf, vector, 1 );

      // Pack the header byte (will always be 1-byte in DMP)
      pPackBuf = packHeader( pPackBuf, address );

      // Now pack the address
      pPackBuf = packAddress( pPackBuf, address.GetHeader() );

      // Pack in the data buffer
      packValue(pPackBuf, address, dataLen, pData, t.type, t.size);
   }

   return totalLen;
}
/*! @} */
/*! @} */



