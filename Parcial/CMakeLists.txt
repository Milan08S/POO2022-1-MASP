cmake_minimum_required(VERSION 3.19)
project(CASINO-Polimorfismo)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        #Nombre del ejecutable
        casino
        #Lista de archivos a compilar en este target
         Model/Jugador.cpp Model/Juego.h Model/Mayor13.cpp Model/Mayor13.h Model/DosColores.cpp Model/DosColores.h Model/Slots.cpp Model/Slots.h Model/MiniBacarrat.h Model/MiniBacarrat.cpp Model/Casino.cpp Model/Casino.h View/View.cpp View/View.h main.cpp)