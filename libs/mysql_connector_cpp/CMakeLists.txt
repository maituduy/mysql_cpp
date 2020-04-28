 
cmake_minimum_required(VERSION 3.15)
project(test_mysql)

find_library(MYSQL_CPP NAMES sqlpp-mysql PATHS lib)
set(CMAKE_CXX_STANDARD 11)

target_link_libraries(test_mysql ${MYSQL_CPP})
