//
// Created by migue on 20/03/2022.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo() {
    Base = 0;
    Altura = 0;
}

Rectangulo::Rectangulo(float Base, float Altura) {
    this->Base = Base;
    this->Altura = Altura;
}

float Rectangulo::obtenerArea() {
    float Area;
    Area = Base * Altura;
    return Area;
}

float Rectangulo::obtenerPerimetro() {
    float Perimetro;
    Perimetro = 2 * Base + 2 * Altura;
    return  Perimetro;
}

void Rectangulo::imprimirFigura() {
    for(int i = 0; i < Altura; i++){
        for( int j = 0; j < Base; j++ ){
            cout <<"* ";
        }
        cout << "\n";
    }
}