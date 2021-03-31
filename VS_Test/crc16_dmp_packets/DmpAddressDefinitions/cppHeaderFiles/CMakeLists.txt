###############################################################################
# Leaving min version at 2.8 for Linux for now (using 2.8.11 for Qt5 support)
if(UNIX AND NOT APPLE)
      cmake_minimum_required(VERSION 2.8)
else()
      cmake_minimum_required(VERSION 3.0)
endif()

###############################################################################
# Set up source files
#

set( DMP_ADDRESS_DEFINITIONS_SHARED_SOURCE_FILES
     PARENT_SCOPE
     )
    
file(GLOB_RECURSE ALL_CPP_HEADER_FILES 
     ${CMAKE_CURRENT_SOURCE_DIR}/*.h 
     ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)     

set( DMP_ADDRESS_DEFINITIONS_SHARED_HEADER_FILES
      ${ALL_CPP_HEADER_FILES}
      PARENT_SCOPE
    )

set( DMP_ADDRESS_DEFINITIONS_SHARED_INCLUDE_DIRS
     ${CMAKE_CURRENT_SOURCE_DIR}/
      PARENT_SCOPE
    )