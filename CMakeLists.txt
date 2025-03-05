cmake_minimum_required(VERSION 3.30)
project(merge_sort)

set(CMAKE_CXX_STANDARD 20)
enable_testing()

find_package(GTest CONFIG REQUIRED)

set(SOURCES MergeSort.cpp)
set(TEST_SOURCES TestMerge.cpp)

add_library(MergeLib ${SOURCES})

add_executable(MergeSort main.cpp MergeSort.cpp)

add_executable(MergeTest ${TEST_SOURCES})

target_link_libraries(MergeTest PRIVATE MergeLib GTest::gtest GTest::gtest_main)

add_test(NAME MergeTest COMMAND MergeTest)