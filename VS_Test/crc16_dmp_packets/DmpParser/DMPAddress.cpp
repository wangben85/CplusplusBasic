// DMPAddress.cpp: implementation of the DMPAddress class.
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


#include <sstream>
#include <iomanip>
#include "deftypes.h"

#include "DMPTypes.h"


// Constructor for a single, absolute address.  The
// Address/Data type member shall default to ADDRTYPE_SINGLE.
DMPAddress::DMPAddress( uint4 address )
{
	this->header.address	= address;
	this->header.increment	= 0;
	this->header.count		= 0;
	this->header.numBytes	= calcNumBytes( address );

	this->bRange		= false;
	this->bAddrVariableLen = false;
	this->nAddrType		= ADDRTYPE_SINGLE;
}

DMPAddress::DMPAddress(const std::string& variableLenAddress)
{
   this->header.address = 0;
   this->header.varAddress.assign(variableLenAddress);
   this->header.increment = 0;
   this->header.count = 0;
   this->header.numBytes = 0xFF;
   this->bRange = false;
   this->bAddrVariableLen = true;
	this->nAddrType		= ADDRTYPE_SINGLE;
}

// Constructor for range, absolute addresses.
// Given a start and (different) end address, handle ALL addresses
// between the startAddr and endAddr (assume an increment of 1 and
// a count of endAddr - startAddr.)  If a range is detected, the
// Address/Data type member shall be set to ADDRTYPE_RANGE_SINGLE,
// otherwise it will be set to ADDRTYPE_SINGLE.
DMPAddress::DMPAddress( uint4 startAddr, uint4 endAddr )
{
	header.address = startAddr;

	if ( endAddr > startAddr )
	{
		header.increment	= 1;
		header.count		= endAddr - startAddr + 1;
		bRange				= true;
	}
	else if ( endAddr < startAddr )  // swap start and end addresses
	{
		header.address		= endAddr;
		header.increment	= 1;
		header.count		= startAddr - endAddr + 1;
		bRange				= true;
	}
	else
	{
		header.increment	= 0;
		header.count		= 0;
		bRange				= false;
	}

	header.numBytes = calcNumBytes( header.address, header.increment, header.count );
	
	bAddrVariableLen = false;

	// This is a default value.  The caller must change this if the
	// Address/Data type member is not correct.
	if ( bRange )
		nAddrType = ADDRTYPE_RANGE_SINGLE;
	else
		nAddrType = ADDRTYPE_SINGLE;
}

// Constructor using vhdHeader to set address.  If a range is detected, and
// the Address/Data type member is the default of ADDRTYPE_SINGLE, it will
// be changed to ADDRTYPE_RANGE_SINGLE.
DMPAddress::DMPAddress( vhdHeader vhd, bool /*bRelative*/, bool /*bVirtual*/, uint1 nAddrType )
{
	this->header.address	= vhd.address;
	this->header.increment	= vhd.increment;
	this->header.count		= vhd.count;
	this->header.numBytes	= vhd.numBytes;
   this->header.varAddress = vhd.varAddress;

	this->bRange		= (vhd.count <= 1) ? false : true;
   this->bAddrVariableLen = (vhd.numBytes == 0xFF) ? true : false;

	// This is a default value.  The caller must change this if the
	// Address/Data type member is not correct.
	if ( this->bRange && (nAddrType == ADDRTYPE_SINGLE) )
		this->nAddrType = ADDRTYPE_RANGE_SINGLE;
	else
		this->nAddrType = nAddrType;
}

// Constructor used to explicitly set all values of the address.  If a range
// is detected, and the Address/Data type member is the default of
// ADDRTYPE_SINGLE, it will be changed to ADDRTYPE_RANGE_SINGLE.
DMPAddress::DMPAddress( uint4 base, uint4 increment, uint4 count,
					    bool /*bRelative*/, bool /*bVirtual*/, uint1 nAddrType )
{
	this->header.address	= base;
	this->header.increment	= increment;
	this->header.count		= count;
	this->header.numBytes	= calcNumBytes( base, increment, count );

	this->bRange		= (count <= 1) ? false : true;
	this->bAddrVariableLen = false;

	// This is a default value.  The caller must change this if the
	// Address/Data type member is not correct.
	if ( this->bRange && (nAddrType == ADDRTYPE_SINGLE) )
		this->nAddrType = ADDRTYPE_RANGE_SINGLE;
	else
		this->nAddrType = nAddrType;
}

// Clear existing values; reset all to 0/false.
void DMPAddress::Clear( void )
{
	header.address = header.increment = header.count = 0;
	header.numBytes = 0;
	bRange = false;
	nAddrType = ADDRTYPE_SINGLE;
}

std::string DMPAddress::ToString() const
{
   std::string retVal;
   if (bAddrVariableLen)
   {
      retVal.assign(header.varAddress);
   }
   else
   {
      std::ostringstream convert;
      convert << "0x" << std::setfill('0') << std::setw(sizeof(uint32_t)* 2) << std::hex << GetBaseAddr();
      if(bRange)
      {
         convert<<":"<<GetIncrement()<<":"<<GetAddrCount();
      }
      retVal.assign(convert.str());
   }
   return retVal;
}
// End DMPAddress implementation
//////////////////////////////////////////////////////////////////////

