cmake_minimum_required(VERSION 3.16)

project(CppProgramRecord LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest REQUIRED)

file(GLOB_RECURSE TEST_SRCS CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/test/src/*.cpp)

add_executable(${PROJECT_NAME} test/main.cpp ${TEST_SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${GTest_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PUBLIC gtest)
