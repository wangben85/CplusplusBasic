/***************************************************************************//**
* @file
*
*     Functions to retrieve channel and offset information from a given
*     DMP address.
*
* @note
*     These functions are shared used on the charger
*
* @warning  None
*
*******************************************************************************/


#include "DmpChgrAddrUtility.h"
#include "DmpChargerAddrDefinitions.h"
#ifndef __ICCAVR__
// #include <vxWorks.h>
#endif

#ifndef FALSE
#define FALSE  0
#endif

#ifndef TRUE
#define TRUE   (!FALSE)
#endif

/**
 * @addtogroup DMP_defs    DMP address definititions.
 * @{
 */


// Definitions defined on the DDL page on the Deki.

/***************************************************************************//**
* Function to retrieve bay/slot and offset information for a given DMP address.
*
* @return  True if the address is charger bay/slot-based, false otherwise.
*
* @param [in]     dmpAddress    DMP address
* @param [out]    battBay       Bay/Slot the DMP address refers to
* @param [out]    offset        Base address for the bay/slot parameter (a DMP_CH_SLOT_*_OFFSET value)
*
* @warning
*     None
*     
* @note
*     Originally, the header files defined DMP_CH_SLOT_*_OFFSET values relative to
*     the bay/slot base address 0x010E1000.  The offsets were in the range of 0x00-0x02.
*     
*     Now, the header files include the base address in the DMP_CH_SLOT_*_OFFSET values,
*     so the "offsets" are in the range of 0x010E1000-0x010E2002.  The "offsets" are
*     no longer offsets, but are now base addresses.  However, the "offset" returned
*     by this routine can still be compared directly with the DMP_CH_SLOT_*_OFFSET values.
*     
*     It is just unfortunate that macro names, function names, and arguments still
*     indicate "offset".
*******************************************************************************/
uint8_t   GetDmpBattBayOffset( uint32_t dmpAddress, uint8_t *battBay, uint32_t *offset )
{
   uint8_t isBattBayProp = FALSE;

   if ( (NULL != battBay) && (NULL != offset) )
   {
      if ( DMP_CH_IS_A_BAY_ADDRESS == ( dmpAddress &  DMP_CH_IS_A_BAY_MASK ) )
      {
         // obtain the bay number
         *battBay = ( ( dmpAddress &  ~DMP_CH_IS_A_BAY_MASK ) >> DMP_BATT_BAY_SHIFT );

         // obtain the offset
         *offset = dmpAddress & DMP_BATT_BAY_OFFSET_MASK;

         // verify the battery bay value
         if ( *battBay < DMP_NUM_BATT_BAYS )
         {
            isBattBayProp = TRUE;
         }
      }
   }

   return isBattBayProp;
}


/***************************************************************************//**
* Function to retrieve battery and offset information from a given DMP address.
*
* @return  True if the address is battery-based, false otherwise.
*
* @param [in]     dmpAddress    DMP address
* @param [out]    batt          Battery the DMP address refers to
* @param [out]    offset        Base address for the battery parameter (a DMP_CH_BATT_*_OFFSET value)
*
* @warning
*     None
*     
* @note
*     Originally, the header files defined DMP_CH_BATT_*_OFFSET values relative to
*     the battery base address 0x010E2000.  The offsets were in the range of 0x00-0x0F.
*     
*     Now, the header files include the base address in the DMP_CH_BATT_*_OFFSET values,
*     so the "offsets" are in the range of 0x010E2000-0x010E200F.  The "offsets" are
*     no longer offsets, but are now base addresses.  However, the "offset" returned
*     by this routine can still be compared directly with the DMP_CH_BATT_*_OFFSET values.
*     
*     It is just unfortunate that macro names, function names, and arguments still
*     indicate "offset".
*******************************************************************************/
uint8_t   GetDmpBattOffset( uint32_t dmpAddress, uint8_t *batt, uint32_t *offset )
{
   uint8_t isBattProp = FALSE;

   if ( (NULL != batt) && (NULL != offset))
   {
      if ( DMP_CH_IS_A_BATT_ADDRESS == ( dmpAddress &  DMP_CH_IS_A_BATT_MASK ) )
      {
         // obtain the battery number
         *batt = ( ( dmpAddress &  ~DMP_CH_IS_A_BATT_ADDRESS ) >> DMP_BATT_SHIFT );
         // obtain the offset
         *offset = dmpAddress & DMP_BATT_OFFSET_MASK;

         // verify the battery bay value
         if ( *batt < DMP_NUM_BATTERIES )
         {
          isBattProp = TRUE;
         }
      }
   }

   return isBattProp;
}


/***************************************************************************//**
* Function to retrieve the full DMP channel address from a given bay/slot and offset.
*
* @param [in]  battBay     Bay/Slot number
* @param [in]  offset      Base address for the bay/slot parameter (a DMP_CH_SLOT_*_OFFSET value)
*
* @return  The full DMP address
*     
* @note
*     Originally, the header files defined DMP_CH_SLOT_*_OFFSET values relative to
*     the bay/slot base address 0x010E1000.  The offsets were in the range of 0x00-0x02.
*     
*     Now, the header files include the base address in the DMP_CH_SLOT_*_OFFSET values,
*     so the "offsets" are in the range of 0x010E1000-0x010E2002.  The "offsets" are
*     no longer offsets, but are now base addresses.  However, DMP_CH_SLOT_*_OFFSET
*     values are still passed to this routine in the "offset" argument.
*     
*     It is just unfortunate that macro names, function names, and arguments still
*     indicate "offset".
*******************************************************************************/
uint32_t GetDmpBattBayAddress( uint8_t battBay, uint32_t offset )
{
   uint32_t dmpAddress = offset;    // Includes the base address

   // add in bay
   dmpAddress |= ( (uint32_t)battBay << DMP_BATT_BAY_SHIFT );

   return dmpAddress;
}


/***************************************************************************//**
* Function to retrieve the full DMP channel address from a given battery and offset.
*
* @return  The full DMP address
*
* @param [in] batt         battery number
* @param [in] offset       Base address for the battery parameter (a DMP_CH_BATT_*_OFFSET value)
*
* @warning     None
*
* @note
*     Originally, the header files defined DMP_CH_BATT_*_OFFSET values relative to
*     the battery base address 0x010E2000.  The offsets were in the range of 0x00-0x0F.
*     
*     Now, the header files include the base address in the DMP_CH_BATT_*_OFFSET values,
*     so the "offsets" are in the range of 0x010E2000-0x010E200F.  The "offsets" are
*     no longer offsets, but are now base addresses.  However, DMP_CH_BATT_*_OFFSET
*     values are still passed to this routine in the "offset" argument.
*     
*     It is just unfortunate that macro names, function names, and arguments still
*     indicate "offset".
*******************************************************************************/
uint32_t GetDmpBattAddress( uint8_t batt, uint32_t offset )
{
   uint32_t dmpAddress = offset;    // Includes the base address

   // add in battery
   dmpAddress |= ( (uint32_t)batt << DMP_BATT_SHIFT );

   return dmpAddress;
}

/*! @} */





