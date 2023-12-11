cmake_minimum_required(VERSION 3.15.0 FATAL_ERROR)

set(CMAKE_SYSTEM_VERSION 10.0 CACHE STRING "" FORCE)

project(internal_hvh CXX)

set(CMAKE_VS_PLATFORM_NAME "x86")

################################################################################
# Global configuration types
################################################################################
set(CMAKE_CONFIGURATION_TYPES
    "Debug"
    "Release"
    "RelWithDebInfo"
    CACHE STRING "" FORCE
)

################################################################################
# Sub-projects
################################################################################
add_subdirectory(internal_hvh)
