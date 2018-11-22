cmake_minimum_required(VERSION 3.12)

# VARIABLES
set(AUTHOR_NAME "Mert Acel")
set(CMAKE_CXX_STANDARD 11)
set(PROJECT_NAME "Postgre_SQL")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Set g++ Parameter
set(CMAKE_CXX_FLAGS "-O2 -Wall -Wextra ")

# Project Information
project (${PROJECT_NAME} VERSION 1.0.1 DESCRIPTION "Postgre_SQL")

# Information
message(STATUS "AUTHOR_NAME          : ${AUTHOR_NAME}")
message(STATUS "PROJECT_NAME         : ${PROJECT_NAME}")
message(STATUS "CMAKE_SOURCE_DIR     : ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_SYSTEM         : ${CMAKE_SYSTEM}")


find_library(PQXX_LIB pqxx)
find_library(PQ_LIB pq)

set(SOURCE_FILES src/main.cpp )

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${PQXX_LIB} ${PQ_LIB})