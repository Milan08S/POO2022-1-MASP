//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_CIRCULO_H
#define HERENCIA_FIGURAS_CIRCULO_H

#include "Figuras.h"

class Circulo : public Figura{
private:
    float radio;

public:
    Circulo();
    Circulo( float radio );
    float obtenerArea();
    float obtenerPerimetro();
    void imprimirFigura();

};

#endif //HERENCIA_FIGURAS_CIRCULO_H
