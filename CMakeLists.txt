cmake_minimum_required(VERSION 3.30)
project(Trifecta)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(TRIFECTA
        trifecta.h
        trifecta.cpp
)

set(ENGINE
        main.cpp
)

add_executable(Trifecta ${ENGINE} ${TRIFECTA})