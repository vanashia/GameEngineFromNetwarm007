cmake_minimum_required(VERSION 3.10)

set(compiler /home/van/tools/clang9)

set(CMAKE_C_COMPILER ${compiler}/bin/clang)
set(CMAKE_CXX_COMPILER ${compiler}/bin/clang++)

project(gameEgine)

add_subdirectory(src)
