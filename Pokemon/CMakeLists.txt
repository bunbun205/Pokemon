cmake_minimum_required(VERSION 3.20)
project(Pokemon LANGUAGES CXX)

# ------------------------
# Set C++ standard
# ------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ------------------------
# Set output directories
# ------------------------
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# ------------------------
# Define source files
# ------------------------
set(SOURCES
        ${CMAKE_SOURCE_DIR}/main.cpp
)

# ------------------------
# Add executable
# ------------------------
add_executable(Pokemon ${SOURCES})

# ------------------------
# Include directories
# ------------------------
target_include_directories(Pokemon PRIVATE ${CMAKE_SOURCE_DIR})

# ------------------------
# Compiler options for Debug/Release
# ------------------------
# Win32/x64 distinction is not needed on Linux, but we replicate Debug/Release
target_compile_options(Pokemon PRIVATE
        $<$<CONFIG:Debug>:-g -Wall -Wextra -Wpedantic>
        $<$<CONFIG:Release>:-O3 -Wall -Wextra -Wpedantic>
)

# ------------------------
# Preprocessor definitions
# ------------------------
target_compile_definitions(Pokemon PRIVATE
        $<$<CONFIG:Debug>:_DEBUG;_CONSOLE>
        $<$<CONFIG:Release>:NDEBUG;_CONSOLE>
)

# ------------------------
# Linker options
# ------------------------
# Console subsystem is default on Linux
