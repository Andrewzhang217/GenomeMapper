cmake_minimum_required(VERSION 3.21)
project(GenomeMapper)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/**.cpp")
file(GLOB_RECURSE headers RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/**.h")
add_library(GenomeMapper ${srcs} ${headers})
# this makes the headers accessible for other projects which uses spa lib

target_include_directories(GenomeMapper PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
