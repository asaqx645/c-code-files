cmake_minimum_required(VERSION 3.10)
project(CPPfile1Project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

add_executable(file1 src/file1.cpp)
add_executable(linear-search src/linear-search.cpp)
add_executable(linear-search-00 src/linear-search-00.cpp)
add_executable(bubble-sort src/bubble-sort.cpp)
add_executable(huffman-compression src/huffman-compression.cpp)
add_executable(huffman-compression-timer src/huffman-compression-timer.cpp)
add_executable(binary-search src/binary-search.cpp)