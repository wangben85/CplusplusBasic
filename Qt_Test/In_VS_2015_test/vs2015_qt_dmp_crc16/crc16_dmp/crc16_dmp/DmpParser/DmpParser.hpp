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
* @note    All functions follow ETC's coding standards and conventions.
*          Don't ask for it to be changed!
*******************************************************************************/

#ifndef DMP_PARSER_HPP
#define DMP_PARSER_HPP

#include "deftypes.h" // needed for DMPTypes.h
#include "DMPTypes.h"
#include <stdio.h>

/**
 * @addtogroup Network
 * @{
 *    @addtogroup Network_Shared
 *    @{
 *
 */

namespace DMPX
{
   //! @warning - before using this function VERIFY if you NEED to use!!!!
   uint2 CreateDmpMsg( uint1* pPackBuffer, uint1 vector, const DMPAddress& address, const uint1* pdata, const TypeSize& t );
   uint2 GetDmpMsgSize(uint1 vector, const DMPAddress& address, const TypeSize& t);

   //! @warning - before using this function VERIFY if you NEED to use!!!!
   bool ParseDmpMsg ( const uint1* pBuffer, uint1& vector, DMPAddress& address, const uint1*& pData, uint2& dataLen );

   //! @warning - before using this function VERIFY if you NEED to use!!!!
   bool UnPackData(const DMPAddress& address,  const uint1* pInData, const uint2 inDataLen, uint1* pOutData, size_t& OutBufSize,  const TypeSize& t);


   //! @warning - deprecated legacy API, this is here only to support existing code, new code shall NOT use this!!!!
   uint2 CreateDmpMsg( uint1* pPackBuffer, uint1 vector, const DMPAddress& address, const uint1* pdata, uint2 dataLen, const TypeSize& t );
}

/*! @} */
/*! @} */

#endif // DMP_PARSER_HPP



