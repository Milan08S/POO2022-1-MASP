//
// Created by migue on 20/03/2022.
//

#include "Circulo.h"

Circulo::Circulo(){
    radio = 0;
}

Circulo::Circulo(float radio) {
    this->radio = radio;
}

float Circulo::obtenerArea() {
    float Area;
    Area = M_PI * pow( radio, 2);
    return Area;
}

float Circulo::obtenerPerimetro() {
    float Perimetro;
    Perimetro = 2 * M_PI * radio;
    return Perimetro;
}

void Circulo::imprimirFigura() {
    for(int i = 0; i <= radio *2; i++){
        for( int j = 0; j <= radio * 2; j++ ){
            if ( pow( i - radio, 2.0) + pow( j - radio, 2.0 ) <= pow( radio, 2)){
                cout << "# ";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}



