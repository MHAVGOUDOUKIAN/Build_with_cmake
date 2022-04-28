cmake_minimum_required(VERSION 3.18)
set(CMAKE_CXX_STANDARD 11)

set (PROJECT_NAME Maths)
project(${PROJECT_NAME})

set( SOURCES
    Maths.cpp
)

SET( HEADERS
    Maths.hpp
)

#J'utilise la méthode add_library et non exectuable car c'est une librairie que je souhaite générer
add_library(Maths
    ${SOURCES}
    ${HEADERS}
)