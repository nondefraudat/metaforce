cmake_minimum_required(VERSION 3.21)

project(metaforce LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

include_directories("include/")

add_executable(${PROJECT_NAME} "sources/main.cxx")
