cmake_minimum_required(VERSION 3.5)  # Указываем минимальную версию CMake, необходимую для сборки проекта.
set(CMAKE_CXX_STANDARD 17)  # Устанавливаем стандарт C++ 17.

project(PrototypePattern)  # Задаем название проекта.

option(BUILD_TESTS "Build tests" ON)  # Опция для сборки тестов. По умолчанию включена.

set(SOURCE_FILES prototype/Prototype.cpp)  # Указываем исходные файлы для основного исполняемого файла.
add_executable(PrototypePattern ${SOURCE_FILES})  # Создаем исполняемый файл.

if(BUILD_TESTS)
  enable_testing()  # Включаем поддержку тестирования.
  file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)  # Получаем исходные файлы тестов.
  add_executable(prototests ${${PROJECT_NAME}_TEST_SOURCES})  # Создаем исполняемый файл для тестов.
  target_link_libraries(prototests ${PROJECT_NAME} gtest_main)  # Линкуем библиотеки для тестов.
  add_test(NAME prototests COMMAND prototests)  # Добавляем команду для запуска тестов.
endif()
