/***************************************************************************//**
* @file
*
*     Functions to retrieve channel and offset information from a given
*     DMP address.
*
* @note
*     These functions are shared between the portables and the rack units.
*
* @warning  None
*
*******************************************************************************/


#include "DmpAddrUtility.h"
#include "RfChannelDefinitions.h"


/**
 * @addtogroup DMP_defs    DMP address definititions.
 * @{
 */


// Definitions defined on the DDL page on the Deki.
// http://deki.shure.com/Line_4_Project/Line_4_Architecture/3._Views/Data_Model/DDL_Addressing#(02_xx_xx_xx)_Channel_properties

/***************************************************************************//**
* Inline function to retrieve channel and offset information from a given
* DMP address
*
* @return  True if the address is channel-based, false otherwise.
*
* @param [in]     dmpAddress    DMP address
* @param [out]    channel       Channel the DMP address refers to
* @param [out]    offset        Offset from the channel base the address is
*
* @note
*     A quick example of how this function is intended to be used:
* @par
*     There exists two DMP addresses:
*     02 00 08 04 Channel 1 Primary Frequency
*     02 01 08 04 Channel 2 Primary Frequency
* @par
*     A DMP handler intended to process Primary Frequency would call
*     this function with either address above. For the first property,
*     it would return Channel 1 with an offset of 0x0804. For the 2nd,
*     it would return Channel 2 with an offset of 0x0804. The DMP
*     handler would then decode any offset of 0x0804 as a Primary
*     Frequency and use the channel information returned to determine
*     which channel the primary frequency request was intended for.
*
* @warning
*     None
********************************************************************************
*/
uint8_t  GetDmpChannelOffset( uint32_t dmpAddress, RfChannel_t *channel, uint32_t *offset )
{
   uint8_t isChannelProp = 0;

   if ( (0 != channel) && (0 != offset))
   {
      if ( DMP_CHANNEL_BASED_ADDRESS == ( dmpAddress & DMP_CHANNEL_BASED_MASK ) )
      {
         // obtain the channel
         *channel = (RfChannel_t)( ( dmpAddress & DMP_CHANNEL_MASK ) >> DMP_CHANNEL_SHIFT );
         // obtain the offset
         *offset = dmpAddress & DMP_CHANNEL_OFFSET_MASK;
#ifdef NO_RF_CHANNEL_RANGE_CHECK
         //Do not range check channel, leave it to calling functions
#else
         if ( *channel < NUM_RF_CHANNELS )
#endif
         {
            isChannelProp = 1;
         }
      }
   }

   return isChannelProp;
}


/***************************************************************************//**
* Inline function to retrieve the full DMP channel address from a given
* channel and offset.
*
* @return  The full DMP address
*
* @param [in] channel       Channel
* @param [in] offset        Offset from the channel base
*
* @note        None
*
* @warning     None
*
*******************************************************************************
*/
uint32_t GetDmpChannelAddress ( RfChannel_t channel, uint32_t offset )
{
   uint32_t dmpAddress = DMP_CHANNEL_BASED_ADDRESS;

   // add in channel
   dmpAddress |= ( ( (uint32_t)channel << DMP_CHANNEL_SHIFT ) & DMP_CHANNEL_MASK );
   // add in offset
   dmpAddress |= ( offset & DMP_CHANNEL_OFFSET_MASK );

   return dmpAddress;
}


/***************************************************************************//**
* Inline function to retrieve box number, channel and offset information from a given
* DMP address
*
* @return  True if the address is box-channel-based, false otherwise.
*
* @param [in]     dmpAddress    DMP address
* @param [out]    box           Box number the DMP address refers to
* @param [out]    channel       Channel the DMP address refers to
* @param [out]    offset        Offset from the channel base the address is
*
* @note
*     A quick example of how this function is intended to be used:
* @par
*     There exists two DMP addresses:
*     06 08 08 04 Box 2 Channel 1 Primary Frequency
*     06 09 08 04 Box 2 Channel 2 Primary Frequency
* @par
*     A DMP handler intended to process Primary Frequency would call
*     this function with either address above. For the first property,
*     it would return Box 2 Channel 1 with an offset of 0x0804. For the 2nd,
*     it would return Box 2 Channel 2 with an offset of 0x0804. The DMP
*     handler would then decode any offset of 0x0804 as a Primary
*     Frequency and use the channel information returned to determine
*     which channel the primary frequency request was intended for.
*
* @warning
*     None
********************************************************************************
*/
uint8_t GetDmpBoxChannelOffset( uint32_t dmpAddress, uint32_t *box, RfChannel_t *channel, uint32_t *offset )
{
   uint8_t isChannelProp = 0;

   if ( (0 != box) && (0 != channel) && (0 != offset))
   {
      if ( DMP_BOXCHAN_BASED_ADDRESS == ( dmpAddress & DMP_CHANNEL_BASED_MASK ) )
      {
         // obtain the channel
         *box = (uint8_t)( ( dmpAddress & DMP_BOXCHAN_BOX_MASK ) >> DMP_BOXCHAN_BOX_SHIFT );
         // obtain the channel
         *channel = (RfChannel_t)( ( dmpAddress & DMP_BOXCHAN_CHAN_MASK ) >> DMP_BOXCHAN_CHAN_SHIFT );
         // obtain the offset
         *offset = dmpAddress & DMP_CHANNEL_OFFSET_MASK;

         isChannelProp = 1;
      }
   }

   return isChannelProp;
}

/***************************************************************************//**
* Inline function to retrieve the full DMP address from a given box number,
* channel and offset.
*
* @return  The full DMP address
*
* @param [in] box           Box number
* @param [in] channel       Channel
* @param [in] offset        Offset from the channel base
*
* @note        None
*
* @warning     None
*
*******************************************************************************
*/
uint32_t GetDmpBoxChannelAddress( uint32_t box, RfChannel_t channel, uint32_t offset )
{
   uint32_t dmpAddress = DMP_BOXCHAN_BASED_ADDRESS;

   // add inbox
   dmpAddress |= ( ( (uint32_t)box << DMP_BOXCHAN_BOX_SHIFT ) & DMP_BOXCHAN_BOX_MASK );
   // add in channel
   dmpAddress |= ( ( (uint32_t)channel << DMP_BOXCHAN_CHAN_SHIFT ) & DMP_BOXCHAN_CHAN_MASK );
   // add in offset
   dmpAddress |= ( offset & DMP_CHANNEL_OFFSET_MASK );

   return dmpAddress;
}

/*******************************************************************************
 * function to get the address based on the channel, linkSlot and offset
 *
 * @return  DMP address based on the channel, linkSlot and offset
 *
 * @param [in]        chan        the RF channel of the APT
 * @param [in]        slot        the linkSlot (Primary/Secondary)
 * @param [in]        offset      the offset
 *
 * @note
 *     None
 *
 * @warning
 *     None
 ********************************************************************************/
uint32_t GetLinkedDevAddress(uint8_t chan, uint8_t slot, uint32_t offset)
{
   uint32_t dmpAddr;
   
   dmpAddr = GetDmpChannelAddress((RfChannel_t)chan, offset) + slot;
   return dmpAddr;
}

/*! @} */





