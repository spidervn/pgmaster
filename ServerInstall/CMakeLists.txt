cmake_minimum_required(VERSION 2.8)
add_compile_options(-std=c++11)

project(pginstall)
include_directories(./src)
file(GLOB SOURCES "src/main.cpp" 
					"src/impl/*.cpp")
add_executable( pginstall ${SOURCES} )