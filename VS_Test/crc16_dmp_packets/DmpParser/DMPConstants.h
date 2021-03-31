#ifndef DMP_CONSTANTS_H
#define DMP_CONSTANTS_H

// Vector Value = Message Code + Data and Address Codes
enum DmpMessageCode
{
   DMP_GET_PROPERTY =          1,    // from controller
   DMP_SET_PROPERTY =          2,    // from controller
   DMP_GET_PROP_REPLY =        3,    // from device
   DMP_EVENT =                 4,    // from device
   DMP_MAP_PROPERTY =          5,    // from controller
   DMP_UNMAP_PROPERTY =        6,    // from controller
   DMP_SUBSCRIBE =             7,    // from controller
   DMP_UNSUBSCRIBE =           8,    // from controller
   DMP_GET_PROP_FAIL =         9,    // from device
   DMP_SET_PROP_FAIL =         10,   // from device
   DMP_MAP_PROP_FAIL =         11,   // from device
   DMP_SUBSCRIBE_ACCEPT =      12,   // from device
   DMP_SUBSCRIBE_REJECT =      13,   // from device
   DMP_ALLOCATE_MAP =          14,   // from controller
   DMP_ALLOCATE_MAP_REPLY =    15,   // from device
   DMP_DEALLOCATE_MAP =        16,   // from controller
};


enum DmpErrorReturnValue
{
   NOERR_SUCCESS =                0, // Operation was successful
   ERR_NON_SPECIFIC =             1, // Non-specific or non-DMP reason
   ERR_NOT_A_PROPERTY =           2, // The address does not correspond to a property
   ERR_WRITE_ONLY =               3, // The property's value may not be read
   ERR_NOT_WRITABLE =             4, // The property's value may not be written
   ERR_DATA_ERROR =               5, // The data does not correspond to the property
   ERR_MAP_NOT_SUPPORTED =        6, // Mapping is not supported by the component
   ERR_MAP_SPACE_NOT_AVAILABLE =  7, // A virtual address space is not available
   ERR_PROP_NOT_MAPPABLE =        8, // Mapping is not supported on this property
   ERR_VIRT_MAP_NOT_ALLOCATED =   9, // The virtual property map is not allocated
   ERR_SUB_NOT_SUPPORTED =        10,// Subscriptions on the specified property are not supported by the device
   ERR_NO_SUBS_SUPPORTED =        11,// Subscriptions not supported on any property
};


enum DmpAddressType
{
   ADDRTYPE_SINGLE       = 0,
   ADDRTYPE_RANGE_SINGLE = 1,
   ADDRTYPE_RANGE_FIXED  = 2,
   ADDRTYPE_RANGE_MIXED  = 3,
};


// Internal errors that can be returned
enum DMPError
{
   DMPSuccess = 0,   // operation successful
   DMPFail,          // unspecified failure
   DMPExists,        // item already exists
   DMPNotFound,      // item not found
   DMPNoData,        // no data found
   DMPTooLong,       // data would not fit
   DMPWriteError,    // write-only or not writable
   DMPUnsupported    // operation not supported
};


// The possible data types of a DMP property
typedef enum
{
   DMPUnknown = 0, // type is unknown (e.g. does not exist)
   DMPs1int,
   DMPs2int,
   DMPs4int,
   DMPs8int,
   DMPu1int,
   DMPu2int,
   DMPu4int,
   DMPu8int,
   DMPfloat,
   DMPdouble,
   DMPfixBinOb,    // Fixed size binary object type
   DMPvarBinOb,    // Variable size binary object type which can
                   //   also handle Unicode UTF-8 or UTF-16 strings
   DMPbool
} DMPType;


#endif /* ifndef DMP_CONSTANTS_H */
