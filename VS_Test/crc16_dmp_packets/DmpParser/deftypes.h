/*deftypes.h
  This is the list of standard types used in common code.
  Except for uint, they represent types that are always the same size,
    no matter what platform they are on.
  
  Note that int is also a standard type that is acceptable (although
    not always the same size)

*/
#ifndef _DEFTYPES_H_
#define _DEFTYPES_H_

#if defined(_MSC_VER) && _MSC_VER < 1900
   #include "mstdint.h"
#else
   #include <stdint.h>
#endif

typedef unsigned int       uint;    //An arbitrary unsigned integer
typedef char               int1;    //An integer 1 byte long
typedef unsigned char      uint1;   //An unsigned integer 1 byte long
typedef short              int2;    //An integer 2 bytes long
typedef unsigned short     uint2;   //An unsigned integer 2 bytes long
typedef int32_t            int4;    //An integer 4 bytes long
typedef uint32_t           uint4;   //An unsigned integer 4 bytes long
typedef long long          int8;    //An integer 8 bytes long
typedef unsigned long long uint8;   //An unsigned integer 8 bytes long

#endif  /*_DEFTYPES_H_*/
