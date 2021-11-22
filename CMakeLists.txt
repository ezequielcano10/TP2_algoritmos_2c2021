cmake_minimum_required(VERSION 3.17)
project(TP2_algoritmos_2c2021)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP2_algoritmos_2c2021
        Carta.cpp
        Carta.h
        casillero.cpp
        casillero.h
        ficha.cpp
        ficha.h
        main.cpp
        Mazo.cpp
        Mazo.h
        tablero.cpp
        tablero.h Lista.h Nodo.h)
