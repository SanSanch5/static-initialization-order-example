cmake_minimum_required(VERSION 3.5)

project(StaticOrder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS_RELEASE "-O1 -g -ggdb -DNDEBUG ")

add_subdirectory(foo)

add_executable(StaticOrder main.cpp)
target_link_libraries(StaticOrder PRIVATE foo)
