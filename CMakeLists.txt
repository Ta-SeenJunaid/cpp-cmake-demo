cmake_minimum_required(VERSION 3.16)


project(CppCMakeTutorial
VERSION 1.0
DESCRIPTION "Modular OOP C++ with CMake"
LANGUAGES CXX
)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_subdirectory(src/logger)
add_subdirectory(src/math)
add_subdirectory(src/app)