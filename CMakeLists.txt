cmake_minimum_required(VERSION 3.10)

SET(CMAKE_C_COMPILER "clang")
SET(CMAKE_CXX_COMPILER "clang++")
SET(CMAKE_LINKER "lld")

project(Githelper)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(gith include/gith.h src/gith.c)

install(TARGETS gith DESTINATION bin)
