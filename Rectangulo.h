//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_RECTANGULO_H
#define HERENCIA_FIGURAS_RECTANGULO_H
#include "Figuras.h"

class Rectangulo : public Figura{
private:
    float Altura;
    float Base;
public:
    Rectangulo();
    Rectangulo( float Base, float Altura );
    float obtenerArea();
    float obtenerPerimetro();
    void imprimirFigura();
};

#endif //HERENCIA_FIGURAS_RECTANGULO_H
