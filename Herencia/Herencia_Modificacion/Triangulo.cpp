//
// Created by migue on 27/03/2022.
//
#include "Triangulo.h"

Triangulo::Triangulo(float a, float b) {
    this -> base = a;
    this -> altura = b;
}

float Triangulo::calcularArea() {
    float Area;
    Area = base* pow( altura, 2 );
    return Area;

}

float Triangulo::calcularPerimetro() {
    float Perimetro;
    Perimetro = base * 3;
    return Perimetro;

}

void Triangulo::imprimirFigura() {
    for( int i = 1; i <= altura ;i++){
        for( int j = 1; j <= i; j++ ){
            cout <<"*";
        }
        cout << "\n";
    }
    getchar();
}

void Triangulo::imprimirFiguraColor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN));
    for( int i = 1; i <= altura ;i++){
        for( int j = 1; j <= i; j++ ){
            cout <<"*";
        }
        cout << "\n";
    }
    getchar();
    SetConsoleTextAttribute(hConsole, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN));
}

void Triangulo::setDatos( float a, float b){
    this->base = a;
    this->altura = b;
}