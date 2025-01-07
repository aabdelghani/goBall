cmake_minimum_required(VERSION 3.15)
set(CMAKE_SYSTEM_NAME Generic)

if (WIN32)
 set(CMAKE_GENERATOR "MinGW Makefiles")
endif (WIN32)

#set(CMAKE_BUILD_TYPE Release)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

# Cross-compilation toolchain configuration
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)


project(SquareLine_Project C)


set(SDL_FOLDER sdl2-dev-rpi64)
set(CMAKE_FIND_ROOT_PATH ${SDL_FOLDER})
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)


set(CMAKE_BUILD_RPATH "${SDL_FOLDER}/include")
set(CMAKE_INSTALL_RPATH ${CMAKE_BUILD_RPATH})

include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/${SDL_FOLDER}/include
    ${PROJECT_SOURCE_DIR}/lvgl
#    ${PROJECT_SOURCE_DIR}/lv_drivers
    ${PROJECT_SOURCE_DIR}/ui
)


FILE(GLOB_RECURSE LVGL_Sources CONFIGURE_DEPENDS ${SDL_FOLDER})
FILE(GLOB_RECURSE LVGL_Sources CONFIGURE_DEPENDS lvgl/*.c)
#FILE(GLOB_RECURSE LV_DRIVERS_Sources CONFIGURE_DEPENDS lv_drivers/*.c)
FILE(GLOB_RECURSE UI_Sources CONFIGURE_DEPENDS ui/*.c ui/*.cpp)

add_executable(${PROJECT_NAME} main.c ${LVGL_Sources} ${LV_DRIVERS_Sources} ${UI_Sources})

# Link SDL2 library
target_link_libraries(${PROJECT_NAME}
    -L/usr/local/lib wiringPi                            # WiringPi library
    -L"${PROJECT_SOURCE_DIR}/${SDL_FOLDER}/lib" SDL2
)
