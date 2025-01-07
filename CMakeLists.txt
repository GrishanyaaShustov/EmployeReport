cmake_minimum_required(VERSION 3.30)
project(EmployeReport)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/Headers)

add_executable(EmployeReport main.cpp
        Headers/EmployeReport.h
        src/EmployeReport.cpp
        src/InputEmploye.cpp
        headers/InputEmploye.h
        src/testObjects.cpp
        headers/testObjects.h)
