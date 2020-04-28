 
cmake_minimum_required(VERSION 3.15)
project(test_mysql)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake/Modules)

include_directories(
		include
		libs/Date/include
		libs/mysql_connector_cpp/include
		libs/mysql_layer_cpp/include
	)

set(CMAKE_CXX_STANDARD 11)

find_package(MySql REQUIRED)

file(GLOB SOURCES "src/main.cc" "src/ManagerDatabase/*.cpp")

add_executable(test_mysql ${SOURCES})
target_link_libraries(test_mysql ${MYSQL_LIBRARIES})

add_subdirectory(libs/mysql_connector_cpp)


