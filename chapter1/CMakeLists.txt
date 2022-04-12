cmake_minimum_required(VERSION 3.20)
project(modern_cxx_chapter1)

set(CMAKE_CXX_STANDARD 14)

add_executable(modern_cxx main.cpp ../misc/sandbox.cpp ../chapter3/item13_const_iterator.cpp ../chapter4/item18_unique_ptr.cpp STL_utilities.cpp)

add_executable(STL_utilities_test STL_utilities.cpp)