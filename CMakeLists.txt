cmake_minimum_required(VERSION 2.8.12)

# name of project
project(sleep)

# Using the "cmake" generator 
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

# Add executable to the project using source files
add_executable(sleep sleep.cpp)

# Linking imported target package
target_link_libraries(sleep CONAN_PKG::poco)

# Turning on testing with cmake
enable_testing()

# Adding example test for ctest
add_test(NAME myTest COMMAND sleep)
