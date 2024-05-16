cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)

project(PrototypePattern)

# Add all your source files here set
set(SOURCE_FILES prototype/Prototype.cpp)

add_executable(PrototypePattern ${SOURCE_FILES})
