cmake_minimum_required(VERSION 3.10)
project(PRT7)

set(CMAKE_CXX_STANDARD 11)
set(SOURCES
    src/main.cpp
    src/TramaBase.h
    src/TramaLoad.cpp src/TramaLoad.h
    src/TramaMap.cpp src/TramaMap.h
    src/ListaDeCarga.cpp src/ListaDeCarga.h
    src/RotorDeMapeo.cpp src/RotorDeMapeo.h
)

add_executable(PRT7 ${SOURCES})
