# Sources and Headers
set(LIBRARY_SOURCES
    "division.cpp")
set(LIBRARY_HEADERS
    "division.h")
set(LIBRARY_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR})

# division library
set(LIBRARY_NAME "division")

add_library(${LIBRARY_NAME}
    STATIC
        ${LIBRARY_SOURCES}
        ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_NAME} 
    PUBLIC
        ${LIBRARY_INCLUDES})