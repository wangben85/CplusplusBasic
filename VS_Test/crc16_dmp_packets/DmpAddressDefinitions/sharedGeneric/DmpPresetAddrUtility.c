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


#include "DmpPresetAddrUtility.h"
#include "DmpUserPresetsAddrDefinitions.h"
#include "assert.hpp"


static const uint32_t DMP_USER_PRESET_OFFSET_MASK = 0x01000F00;
static const uint32_t DMP_TEMPLATE_OFFSET_MASK = 0x01001F00;

static const uint32_t DMP_PRESET_TEMPLATE_NUM_MASK = 0xFF;


/**
 * @addtogroup DMP_defs    DMP address definititions.
 * @{
 */


/***************************************************************************//**
 * Get the preset number and offset from a preset DMP address
 *
 * @param [in]    dmpAddress  The address to use
 * @param [out]   presetNum   The associated preset number
 * @param [out]   offset      The associated offset
 *
 * @return        1 if address is a valid preset property and pointers are
 *                valid. 0 otherwise.
 *
 * @note          None
 *
 * @warning       None
 ******************************************************************************/
uint32_t GetPresetDmpOffset( uint32_t dmpAddress, uint32_t* presetNum, uint32_t* offset )
{
   uint32_t ret_val = 0;

   if ( 0 != presetNum && 0!= offset )
   {
      if ( IsPresetProperty( dmpAddress ) )
      {
         *presetNum = dmpAddress & DMP_PRESET_TEMPLATE_NUM_MASK;
         *offset = dmpAddress & DMP_USER_PRESET_OFFSET_MASK;
         ret_val = 1;
      }
   }
   else
   {
      // ASSERT_INFO( "Invalid pointer" );
   }

   return ret_val;
}


/***************************************************************************//**
 * Get the template number and offset from a template DMP address
 *
 * @param [in]    dmpAddress  The address to use
 * @param [out]   presetNum   The associated preset number
 * @param [out]   offset      The associated offset
 *
 * @return        1 if address is a valid template property and pointers are
 *                valid. 0 otherwise.
 *
 * @note          None
 *
 * @warning       None
 ******************************************************************************/
uint32_t GetTemplateDmpOffset( uint32_t dmpAddress, uint32_t* presetNum, uint32_t* offset )
{
   uint32_t ret_val = 0;

   if ( 0 != presetNum && 0!= offset )
   {
      if ( IsTemplateProperty( dmpAddress ) )
      {
         *presetNum = dmpAddress & DMP_PRESET_TEMPLATE_NUM_MASK;
         *offset = dmpAddress & DMP_TEMPLATE_OFFSET_MASK;
         ret_val = 1;
      }
   }
   else
   {
      // ASSERT_INFO( "Invalid pointer" );
   }

   return ret_val;
}


/***************************************************************************//**
 * Get the preset DMP address from an offset and preset number.
 *
 * @param [in]    presetNum   The preset number to use
 * @param [in]    offset      The offset to use
 *
 * @return        The complete DMP address
 *
 * @note          None
 *
 * @warning       None
 ******************************************************************************/
uint32_t GetPresetDmpAddress( uint32_t presetNum, uint32_t offset )
{
   return presetNum | offset;
}


/***************************************************************************//**
 * Get the preset or template DMP address from an offset and preset number.
 *
 * @param [in]    presetNum   The preset number to use
 * @param [in]    offset      The offset to use
 *
 * @return        The complete DMP address
 *
 * @note          None
 *
 * @warning       None
 ******************************************************************************/
uint32_t GetTemplateDmpAddress( uint32_t presetNum, uint32_t offset )
{
   return presetNum | offset;
}


/***************************************************************************//**
 * Check if an address is a preset property
 *
 * @param [in]    dmpAddress  The address to check.
 *
 * @return        1 if a preset address, 0 if not
 *
 * @note          None
 *
 * @warning       None
 ******************************************************************************/
uint32_t IsPresetProperty( uint32_t dmpAddress )
{
   switch( dmpAddress | 0xFF )
   {
      case DMP_USER_PRESETS_SAVE_MASK:
      case DMP_USER_PRESETS_RESTORE_MASK:
      case DMP_USER_PRESETS_NAME_MASK:
      case DMP_USER_PRESETS_MASK:
      case DMP_USER_PRESETS_STATUS_MASK:
      case DMP_USER_PRESETS_TIMESTAMP_MASK:
      case DMP_USER_PRESETS_CLEAR_MASK:
         return 1;
         break;

      default:
         return 0;
         break;
   }
}


/***************************************************************************//**
 * Check if an address is a template property
 *
 * @param [in]    dmpAddress  The address to check.
 *
 * @return        1 if a template address, 0 if not
 *
 * @note          None
 *
 * @warning       None
 ******************************************************************************/
uint32_t IsTemplateProperty( uint32_t dmpAddress )
{
   switch( dmpAddress | 0xFF )
   {
      case DMP_TEMPLATES_SAVE_MASK:
      case DMP_TEMPLATES_RESTORE_MASK:
      case DMP_TEMPLATES_NAME_MASK:
      case DMP_TEMPLATES_MASK:
         return 1;
         break;

      default:
         return 0;
         break;
   }
}

/*! @} */





