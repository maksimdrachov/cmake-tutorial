cmake_minimum_required(VERSION 3.16)

project("tutorial-project" VERSION 1.0.0 LANGUAGES CXX)

# Global CMake variables are set here
set(CMAKE_CXX_STANDARD 17)

# Options
option(ENABLE_WARNINGS "Enable compiler warnings" OFF)

### CMAKE MODULES
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include(Warnings)

### SUBDIRECTORIES ###
add_subdirectory(src)
add_subdirectory(app)