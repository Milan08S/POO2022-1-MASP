cmake_minimum_required(VERSION 3.21)
project(Herencia_Figuras)

set(CMAKE_CXX_STANDARD 14)

add_executable(Herencia_Figuras Figuras.h Figuras.cpp Rectangulo.h Rectangulo.cpp View.h View.cpp Circulo.h Circulo.cpp Cuadrado.h Cuadrado.cpp main.cpp)
