cmake_minimum_required (VERSION 3.18.0)
project (library2)

FILE(GLOB SOURCES src/*.cpp)

add_library (library2 ${SOURCES})

# 3rd party libraries
# Only add Google Test and tests if this is the main project
if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    add_subdirectory(googletest)
    enable_testing()
    add_subdirectory(tests)
endif()