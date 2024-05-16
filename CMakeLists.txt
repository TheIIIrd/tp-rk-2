cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)

project(PrototypePattern)

set(SOURCE_FILES prototype/Prototype.cpp)

add_executable(PrototypePattern ${SOURCE_FILES})

# Подключение библиотеки Google Test
add_subdirectory(third-party/gtest)
include_directories(third-party/gtest/googletest/include)

enable_testing()

# Добавление исполняемого файла для теста
add_executable(test tests/test.cpp)
target_link_libraries(test gtest gtest_main)

add_test(NAME test COMMAND test1)
