cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)

project(PrototypePattern)

# Подключение библиотеки Google Test
add_subdirectory(third-party/gtest)
include_directories(third-party/gtest/googletest/include)

set(SOURCE_FILES prototype/Prototype.cpp)

add_executable(PrototypePattern ${SOURCE_FILES})

# Добавление исполняемого файла для теста
add_executable(test1 test1.cpp)
target_link_libraries(test1 gtest gtest_main)
