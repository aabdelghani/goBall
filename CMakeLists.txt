cmake_minimum_required(VERSION 3.15)
set(CMAKE_SYSTEM_NAME Generic)

if (WIN32)
    set(CMAKE_GENERATOR "MinGW Makefiles")
endif (WIN32)

# Set C and C++ standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

# Cross-compilation toolchain configuration
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Main project
project(SquareLine_Project C)

# SDL2 configuration
set(SDL_FOLDER sdl2-dev-rpi64)
set(CMAKE_FIND_ROOT_PATH ${SDL_FOLDER})
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(CMAKE_BUILD_RPATH "${SDL_FOLDER}/include")
set(CMAKE_INSTALL_RPATH ${CMAKE_BUILD_RPATH})

# Include directories
include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/${SDL_FOLDER}/include
    ${PROJECT_SOURCE_DIR}/lvgl
    ${PROJECT_SOURCE_DIR}/ui
    ${PROJECT_SOURCE_DIR}/utils/piolib/include  # Include piolib headers
)

# Gather source files
FILE(GLOB_RECURSE LVGL_Sources CONFIGURE_DEPENDS ${SDL_FOLDER})
FILE(GLOB_RECURSE LVGL_Sources CONFIGURE_DEPENDS lvgl/*.c)
FILE(GLOB_RECURSE UI_Sources CONFIGURE_DEPENDS ui/*.c ui/*.cpp)

# Add piolib subdirectory
add_subdirectory(utils/piolib)

# Add executable
add_executable(${PROJECT_NAME} main.c ${LVGL_Sources} ${UI_Sources})

# Link libraries
target_link_libraries(${PROJECT_NAME}
    -L/usr/local/lib wiringPi  # WiringPi library
    -L"${PROJECT_SOURCE_DIR}/${SDL_FOLDER}/lib" SDL2
    pio  # Link piolib library
    SDL2_mixer
)

# Set compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")

if (CMAKE_COMPILER_IS_GNUCC)
    add_definitions(-ffunction-sections)
endif ()
