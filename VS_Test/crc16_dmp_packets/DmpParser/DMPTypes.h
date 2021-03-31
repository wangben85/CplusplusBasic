/*
 * From ETC ACN implementation, with platform-specific modifications.
 */


// DMPTypes.h: Various support class definitions for DMP
//
/***************************************************************************/
/* Copyright (C) 2006 Electronic Theatre Controls, Inc.                    */
/* All rights reserved.                                                    */
/*                                                                         */
/* This software is provided at no charge to the user to facilitate the    */
/* use and implementation of ANSI BSR E1.17-2005 for Entertainment         */
/* Technology - Multipurpose Network Control Protocol Suite by the user.   */
/*                                                                         */
/* Redistribution and use in source and binary forms, with or without      */
/* modification, are permitted provided that the following conditions are  */
/* met:                                                                    */
/*                                                                         */
/*      Redistributions of source code must retain the above copyright     */
/*      notice, this list of conditions and the following disclaimer.      */
/*                                                                         */
/*      Redistributions in binary form must reproduce the above copyright  */
/*      notice, this list of conditions and the following disclaimer in    */
/*      the documentation and/or other materials provided with the         */
/*      distribution.                                                      */
/*                                                                         */
/*      Neither the name of Electronic Theatre Controls, Inc. nor the      */
/*      names of its contributors may be used to endorse or promote        */
/*      products derived from this software without specific prior written */
/*      permission from Electronic Theatre Controls, Inc.                  */
/*                                                                         */
/*      The user of this software agrees to indemnify and hold Electronic  */
/*      Theatre Controls, Inc. and contributors harmless from and against  */
/*      any and all claims, damages, and suits that are in any way         */
/*      connected to this software or the user's use of this software.     */
/*                                                                         */
/*                                                                         */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS     */
/* 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT       */
/* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR   */
/* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL ELECTRONIC       */
/* THEATRE CONTROLS, INC. OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,        */
/* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES      */
/* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR      */
/* SERVICES;  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)     */
/* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,     */
/* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING   */
/* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE      */
/* POSSIBILITY OF SUCH DAMAGE.                                             */
/*                                                                         */
/***************************************************************************/



#if !defined(_DMPTYPES_H_)
#define _DMPTYPES_H_


#ifndef _DEFTYPES_H_
#error ("#include error: DMPTypes.h needs deftypes.h")
#endif

#include <string>
#include "DMPConstants.h"


// Implementation-specific constants
const uint2 DEFAULT_MTU    = 1300;
   
// This struct applies to one or more property addresses that have data.
// When a command is sent to DMP, it must contain an array of these structs
// so DMP can process the command in the "mixed size" data values case.  In
// the event that all data in a range of addresses is the same type and size,
// the bFixed member shall be set to TRUE and a single structure shall be used.
// The caller will be responsible for the memory.
typedef struct
{
   DMPType  type; // type of data
   int      size; // size of property (in octets)
   bool  bFixed;  // flag all data as fixed-type AND fixed-sized, or not

   // NOTE: this structure could be changed in the future to contain a
   // DMPAddress member that would allow us to use fewer of these structures
   // by effectively interleaving addresses with the same type and size
   // data that are evenly spaced.
   // For example, if a universe has every other value the same, say, all
   // odd addresses are uint1 and all even addresses are uint2; when setting
   // a universe use 2 structs:
   //   1: [uint1, 1, 1:2:255, false]
   //   2: [uint2, 2, 2:2:255, true]
   // Struct 1 describes all odd addresses starting at 1 and ending with 511
   // as having data that are 1 byte uint1 values.
   // Struct 2 describes all even addresses starting at 2 and ending with 512
   // as having data that are 2 byte uint2 values.
   // In this example, the boolean specifies whether a struct is the last one.
   // The worst case scenerio would be what we have now, one struct for every
   // address in a range.
} TypeSize;

/* The following is unused on our platform: */

   // VHD Header contents
   struct vhdHeader
   {
      std::string varAddress;
      uint4 address;
      uint4 increment;
      uint4 count;
      uint1 numBytes;   // number of bytes per header item (1,2 or 4)
   
      // Simple constructor
      vhdHeader() : address(0), increment(0), count(0), numBytes(0) {}
   };
   
   
   //////////////////////////////////////////////////////////////////
   // DMPAddress
   // Abstracts all the necessary elements of a DMP address.
   class DMPAddress
   {
   public:
      // Constructors
   
      // Create a single, absolute address.
      DMPAddress() : bRange(false),
                  bAddrVariableLen(false),
                  nAddrType(ADDRTYPE_SINGLE)
      {
         header.address = header.increment = header.count = header.numBytes = 0;
      }
   
      // Create a single, absolute address.  The Address/Data type member
      // shall default to ADDRTYPE_SINGLE.
      DMPAddress( uint4 address );
   
      DMPAddress(const std::string& variableLenAddress);

      // Constructor for range, absolute addresses.
      // Given a start and (different) end address, handle ALL addresses
      // between the startAddr and endAddr (assume an increment of 1 and
      // a count of endAddr - startAddr.)  If a range is detected, the
      // Address/Data type member shall be set to ADDRTYPE_RANGE_SINGLE,
      // otherwise it will be set to ADDRTYPE_SINGLE.
      DMPAddress( uint4 startAddr, uint4 endAddr );
   
      // Constructor using vhdHeader to set address.  If a range is detected,
      // and the Address/Data type member is the default of ADDRTYPE_SINGLE,
      // it will be changed to ADDRTYPE_RANGE_SINGLE.
      DMPAddress( vhdHeader vhd, bool bRelative = false,
               bool bVirtual = false, uint1 nAddrType = ADDRTYPE_SINGLE );
   
      // Constructor used to explicitly set all values of the address.  If a
      // range is detected, and the Address/Data type member is the default
      // of ADDRTYPE_SINGLE, it will be changed to ADDRTYPE_RANGE_SINGLE.
      DMPAddress( uint4 base, uint4 increment, uint4 count,
               bool bRelative = false, bool bVirtual = false,
               uint1 nAddrType = ADDRTYPE_SINGLE );
   
      // Copy Constructor
      DMPAddress( const DMPAddress& newAddress )   { *this = newAddress; }
   
      // Operators
      bool operator<(const DMPAddress& rhs) const;
      DMPAddress& operator=(const DMPAddress& rhs);
      bool operator==(const DMPAddress& rhs) const;
      bool operator!=(const DMPAddress& rhs) const;
   
      // Accessors
      uint4 GetBaseAddr( void ) const  { return header.address; }
      uint4 GetIncrement( void ) const { return header.increment; }
      uint4 GetAddrCount( void ) const { return header.count; }
      uint1 GetNumBytes( void ) const  { return header.numBytes; }
      vhdHeader   GetHeader( void ) const { return header; }
      uint1 GetAddrType( void ) const  { return nAddrType; }
      uint  GetAddressLength( void ) const;
      std::string GetVarLenAddr(void) const { return header.varAddress; }
   
      void  SetBaseAddr( uint4 base );
      void  SetIncrement( uint4 inc );
      void  SetAddrCount( uint4 cnt );
      void  SetNumBytes( uint1 num )   { header.numBytes = num; }
   
      void  SetOnlyBaseAddr( uint4 base )    { header.address = base; }
      void  SetOnlyIncrement( uint4 increment ) { header.increment = increment; }
      void  SetOnlyAddrCount( uint4 cnt );
      void  SetHeader( uint4 base, uint4 increment, uint4 count, uint1 bytes );
   
      void  SetRelative( bool /*bRel*/ )   { }
      void  SetVirtual( bool /*bVirt*/ )   { }
      void  SetRange( bool bRng )      { bRange = bRng; }
      void	SetAddrVariableLen(bool bAddrVarLen)	{ bAddrVariableLen = bAddrVarLen; }
      void  SetAddrType( uint1 nType ) { nAddrType = nType; }
      void  Clear( void );  // Clear existing values; reset all to 0/false.
   
      // Informational
      bool  IsRelative( void ) const      { return false; }
      bool  IsVirtual( void ) const       { return false; }
      bool  IsRange( void ) const         { return bRange; }
      bool  IsAddrVariableLen(void) const { return bAddrVariableLen; }
   
      // Increment the base address based upon the increment value.
      // NOTE: 1 is the minimum increment amount so if amount is 0 we
      //       will force an increment by the minimum amount (1).
      void  Increment( uint4 amount = 1 );
   
      std::string ToString() const;
   protected:
      // Calculate the number of bytes used by a vhdHeader object
      uint1 calcNumBytes( uint4 baseAddr, uint4 increment = 0, uint4 count = 0 );
   
      vhdHeader   header;
   
      bool  bRange;        // Range or Single address
      bool  bAddrVariableLen; // Fixed or variable length address
      uint1 nAddrType;     // Address/Data type
   };
   
   
   ////////////////////////////////////////////////////////
   // Some inlines for efficiency/speed
   
   // Operators
   inline bool DMPAddress::operator<(const DMPAddress& rhs) const
   {
      bool ret = false;
	
      if (IsRange() != rhs.IsRange())
      {
         // range addresses defined as "greater than" single-addresses
         ret = !IsRange();
      }
      else if (IsAddrVariableLen() != rhs.IsAddrVariableLen())
      {
         // variable-length addresses defined as "greater than" fixed-length addresses
         ret = !IsAddrVariableLen();
      }
      else if (IsRange())
      {
         // we are comparing two range addresses
         if (GetBaseAddr() == rhs.GetBaseAddr())
         {
            // we are comparing two range addresses with the same base address
            if (GetIncrement() == rhs.GetIncrement())
            {
               // we are comparing two range addresses with the same increment
               if (GetAddrCount() == rhs.GetAddrCount())
               {
                  // we are comparing two range addresses with the same address count
                  ret = GetNumBytes() < rhs.GetNumBytes();
               }
               else
               {
                  // we are comparing two range addresses with different address counts
                  ret = GetAddrCount() < rhs.GetAddrCount();
               }
            }
            else
            {
               // we are comparing two range addresses with different increments
               ret = GetIncrement() < rhs.GetIncrement();
            }
         }
         else
         {
            // we are comparing two range addresses with different base addresses
            ret = GetBaseAddr() < rhs.GetBaseAddr();
         }
      }
      else if (IsAddrVariableLen())
      {
         // we are comparing two variable-length addresses
         ret = GetVarLenAddr() < rhs.GetVarLenAddr();
      }
      else
      {
         // we are comparing two fixed-length addresses
         ret = GetBaseAddr() < rhs.GetBaseAddr();
      }

      return ret;
   }

   
   inline DMPAddress& DMPAddress::operator=(const DMPAddress& rhs)
   {
      header.varAddress = rhs.header.varAddress;
      header.address    = rhs.header.address;
      header.increment  = rhs.header.increment;
      header.count      = rhs.header.count;
      header.numBytes      = rhs.header.numBytes;
      bRange            = rhs.bRange;
      bAddrVariableLen = rhs.bAddrVariableLen;
      nAddrType         = rhs.nAddrType;
   
      return *this;
   }
   
   inline bool DMPAddress::operator==(const DMPAddress& rhs) const
   {
      if ( (header.varAddress == rhs.header.varAddress) &&
           (header.address == rhs.header.address) && (header.increment == rhs.header.increment) &&
           (header.count == rhs.header.count) && (header.numBytes == rhs.header.numBytes) &&
           (nAddrType == rhs.nAddrType) && (bRange == rhs.bRange) && (bAddrVariableLen == rhs.bAddrVariableLen))
         return true;
   
      return false;
   }
   
   inline bool DMPAddress::operator!=(const DMPAddress& rhs) const
   {
      return !(*this == rhs);
   }
   
   // Determine the total number of bytes used to describe a property address.
   inline uint DMPAddress::GetAddressLength( void ) const
   {
      if ( bRange )
         return header.numBytes * 3;
      else if (bAddrVariableLen)
         // length of the address plus two bytes to indicate size
         return header.varAddress.length() + 2;
      return header.numBytes;
   }
   
   // Calculate the number of bytes used by a vhdHeader object
   inline uint1 DMPAddress::calcNumBytes( uint4 baseAddr, uint4 increment, uint4 count )
   {
      uint4 maxVal = baseAddr;
   
      if ( maxVal < increment )
         maxVal = increment;
   
      if ( maxVal < count )
         maxVal = count;
   
      // Values less than 256 require 1 byte to contain them,
      // values 256 to 65535 require 2 bytes to contain them,
      // values greater than 65535 will require the full 4 bytes.
      if ( maxVal <= 0xFF )
         return 1;
      else if ( maxVal <= 0xFFFF )
         return 2;
      else
         return 4;
   }
   
   
   // Increment the base address based upon the increment value.
   inline void DMPAddress::Increment( uint4 amount )
   {
      // Don't bother checking if an increment will cause the address
      // to exceed its 32 bits.  The DMP Draft section 4.1.3 states:
      // "Addresses exceeding the maximum property address shall
      // wrap around to the beginning of the address space."
      header.address += amount;
   
      // Do we need to adjust the numBytes member?
      if ( header.address <= 0xFF )
         header.numBytes = 1;
      else if ( header.address <= 0xFFFF )
         header.numBytes = 2;
      else
         header.numBytes = 4;
   
   } // Increment(
   
   
   // Accessors
   inline void DMPAddress::SetBaseAddr( uint4 base )
   {
      header.address = base;
      header.numBytes = calcNumBytes( header.address, header.increment, header.count );
   }
   
   inline void DMPAddress::SetIncrement( uint4 increment )
   {
      header.increment = increment;
      header.numBytes = calcNumBytes( header.address, header.increment, header.count );
   }
   
   inline void DMPAddress::SetAddrCount( uint4 count )
   {
      header.count = count;
      header.numBytes = calcNumBytes( header.address, header.increment, header.count );
   
      // If the count is 0, bRange MUST be false
      bRange = (count <= 1) ? false : true;
   
      // If the count is 0, nAddrType MUST be 0
      if ( count <= 1 )
         nAddrType = ADDRTYPE_SINGLE;
   }
   
   inline void DMPAddress::SetOnlyAddrCount( uint4 count )
   {
      header.count = count;
   
      // If the count is 0, bRange MUST be false
      bRange = (count <= 1) ? false : true;
   
      // If the count is 0, nAddrType MUST be 0
      if ( count <= 1 )
         nAddrType = ADDRTYPE_SINGLE;
   }
   
   inline void DMPAddress::SetHeader( uint4 base, uint4 increment,
                              uint4 count, uint1 bytes )
   {
      header.address    = base;
      header.increment  = increment;
      header.count      = count;
      header.numBytes      = bytes;
   }


#endif

