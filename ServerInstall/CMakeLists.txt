cmake_minimum_required(VERSION 2.8)
add_compile_options(-std=c++11)

find_package(Boost 1.72 COMPONENTS filesystem REQUIRED)

project( pginstall  )
include_directories(./src)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

file(GLOB SOURCES "src/main.cpp" 
					"src/impl/*.cpp")

add_executable( pginstall ${SOURCES} )
target_link_libraries(pginstall ${Boost_LIBRARIES})
