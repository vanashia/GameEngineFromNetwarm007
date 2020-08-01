cmake_minimum_required(VERSION 3.10)

set(compiler /home/van/tools/clang9)

set(CMAKE_C_COMPILER ${compiler}/bin/clang)
set(CMAKE_CXX_COMPILER ${compiler}/bin/clang++)

project(gameEgine)

include_directories(${PROJECT_SOURCE_DIR}/src/Interface)
include_directories(${PROJECT_SOURCE_DIR}/src/Common)

add_subdirectory(src)
add_subdirectory(Empty)
add_subdirectory(platform)
