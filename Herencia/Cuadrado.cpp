//
// Created by migue on 20/03/2022.
//

#include "Cuadrado.h"

Cuadrado::Cuadrado() {
    lado = 0;
}

Cuadrado::Cuadrado(float lado) {
    this -> lado = lado;
}

float Cuadrado::obtenerArea() {
    float Area;
    Area = pow( lado, 2);
    return Area;
}

float Cuadrado::obtenerPerimetro() {
    float Perimetro;
    Perimetro = 4 * lado;
    return Perimetro;
}

void Cuadrado::imprimirFigura() {
    for(int i = 0; i < lado; i++){
        for( int j = 0; j < lado; j++ ){
            cout <<"# ";
        }
        cout << "\n";
    }
}

