###############################################################################
# DMP Address Definitions shared CMake File
cmake_minimum_required(VERSION 2.8)

###############################################################################
# Set up source files
#
# note: DmpAddrUtilityCusomGroup and DmpChgrAddrUtility have other unsharable
# external dependencies and cannot be included in the common cmake project

set( DMP_ADDRESS_UTILITIES_SHARED_SOURCE_FILES
     
     ${CMAKE_CURRENT_SOURCE_DIR}/DmpAddrUtility.c
     ${CMAKE_CURRENT_SOURCE_DIR}/DmpAddrUtilityProxyFwUpd.c
     ${CMAKE_CURRENT_SOURCE_DIR}/DmpPresetAddrUtility.c
     ${CMAKE_CURRENT_SOURCE_DIR}/DmpMatrixMixerAddrUtility.c

     CACHE INTERNAL "Dmp address defintions shared source files"
   )

# Set up header files
set( DMP_ADDRESS_UTILITIES_SHARED_HEADER_FILES

      ${CMAKE_CURRENT_SOURCE_DIR}/DmpAddrUtility.h
      ${CMAKE_CURRENT_SOURCE_DIR}/DmpAddrUtilityProxyFwUpd.h
      ${CMAKE_CURRENT_SOURCE_DIR}/DmpMiscDefinitions.h
      ${CMAKE_CURRENT_SOURCE_DIR}/DmpPresetAddrUtility.h
      ${CMAKE_CURRENT_SOURCE_DIR}/DmpMatrixMixerAddrUtility.h      

     CACHE INTERNAL "Dmp address defintions shared header files"
   )

# set up include directory variable for other CMakeLists.txt files to use
set(DMP_ADDRESS_UTILITIES_SHARED_INCLUDE_DIRS
   ${CMAKE_CURRENT_SOURCE_DIR}
   CACHE INTERNAL "Dmp address defintions shared include dirs"
  )
  