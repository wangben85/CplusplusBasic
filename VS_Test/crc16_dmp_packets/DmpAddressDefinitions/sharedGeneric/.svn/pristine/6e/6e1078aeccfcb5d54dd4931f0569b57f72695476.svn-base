/***************************************************************************//**
* @file
*
*     This file contains utilites to convert between user preset and template
*     addresses and their meanings.
*
* @note    None
*
* @warning None
*******************************************************************************/


#ifndef DMPPRESETADDRUTIL_H
#define DMPPRESETADDRUTIL_H

#include <stdint.h>


/**
 * @addtogroup DMP_defs    DMP address definitions.
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif


uint32_t IsPresetProperty( uint32_t dmpAddress );
uint32_t GetPresetDmpOffset( uint32_t dmpAddress, uint32_t* presetNum, uint32_t* offset );
uint32_t GetPresetDmpAddress( uint32_t presetNum, uint32_t offset );

uint32_t IsTemplateProperty( uint32_t dmpAddress );
uint32_t GetTemplateDmpOffset( uint32_t dmpAddress, uint32_t* presetNum, uint32_t* offset );
uint32_t GetTemplateDmpAddress( uint32_t presetNum, uint32_t offset );


#ifdef __cplusplus
}
#endif


/*! @} */


#endif   // DMPPRESETADDRUTIL_H


