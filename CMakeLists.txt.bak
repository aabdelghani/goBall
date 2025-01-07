cmake_minimum_required(VERSION 3.15)

# Set system name and toolchain
set(CMAKE_SYSTEM_NAME Linux)

if (WIN32)
    set(CMAKE_GENERATOR "MinGW Makefiles")
endif (WIN32)

# Set C/C++ standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

# Cross-compilation toolchain configuration
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Project definition
project(SquareLine_Project C)

# Define SDL folder
set(SDL_FOLDER sdl2-dev-rpi64)
set(CMAKE_FIND_ROOT_PATH ${SDL_FOLDER})
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# Set runtime paths
set(CMAKE_BUILD_RPATH "${SDL_FOLDER}/include")
set(CMAKE_INSTALL_RPATH ${CMAKE_BUILD_RPATH})

# Include directories for project and libraries
include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/${SDL_FOLDER}/include
    ${PROJECT_SOURCE_DIR}/lvgl
    ${PROJECT_SOURCE_DIR}/lv_drivers
    ${PROJECT_SOURCE_DIR}/ui
)

# Source files for the project
file(GLOB_RECURSE LVGL_SOURCES CONFIGURE_DEPENDS lvgl/*.c)
file(GLOB_RECURSE LV_DRIVERS_SOURCES CONFIGURE_DEPENDS lv_drivers/*.c)
file(GLOB_RECURSE UI_SOURCES CONFIGURE_DEPENDS ui/*.c ui/*.cpp)

# Define the executable target
add_executable(${PROJECT_NAME} 
    main.c 
    ${LVGL_SOURCES} 
    ${LV_DRIVERS_SOURCES} 
    ${UI_SOURCES} 
)

# Link SDL2 library
target_link_libraries(${PROJECT_NAME}
    -L/usr/local/lib wiringPi                            # WiringPi library
    -L"${PROJECT_SOURCE_DIR}/${SDL_FOLDER}/lib" SDL2
)
