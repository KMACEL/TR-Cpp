cmake_minimum_required(VERSION 3.5)

project (hello)

set(CMAKE_CXX_STANDARD 14)

set(AUTHOR_NAME "Mert Acel")
message("${AUTHOR_NAME}")

# UNIX, WIN32, WINRT, CYGWIN, APPLE 
if(UNIX)
   message("Sistem : ${CMAKE_SYSTEM_NAME} ")
elseif(WIN32)
    message("Sistem : ${CMAKE_SYSTEM_NAME}i")
endif()

message("\nPath Bilgisi")
message("CMAKE_BINARY_DIR     : ${CMAKE_BINARY_DIR}") 
message("CMAKE_HOME_DIRECTORY : ${CMAKE_HOME_DIRECTORY}") 
message("CMAKE_SOURCE_DIR     : ${CMAKE_SOURCE_DIR}") 
message("CMAKE_INCLUDE_PATH   : ${CMAKE_INCLUDE_PATH}") 

message("\nSistem Bilgisi")
message("CMAKE_SYSTEM           : ${CMAKE_SYSTEM}") 
message("CMAKE_SYSTEM_NAME      : ${CMAKE_SYSTEM_NAME}")
message("CMAKE_SYSTEM_VERSION   : ${CMAKE_SYSTEM_VERSION}")
message("CMAKE_SYSTEM_PROCESSOR : ${CMAKE_SYSTEM_PROCESSOR}")
message("CMAKE_HOST_SYSTEM_NAME : ${CMAKE_HOST_SYSTEM_NAME}")


if(${CMAKE_SYSTEM_NAME} MATCHES Linux)
     add_definitions(-DCMAKETEST="Linux PC")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
     add_definitions(-DCMAKETEST="Windows PC")
endif()

add_executable(hello src/main.cpp)
