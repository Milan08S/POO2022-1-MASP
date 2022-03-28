//
// Created by migue on 27/03/2022.
//

#ifndef TAREA_FIGURAS_TRIANGULO_H
#define TAREA_FIGURAS_TRIANGULO_H
#include "figura.h"

class Triangulo : public Figura{
private:
    float base;
    float altura;
public:
    Triangulo();
    Triangulo( float a, float b);
    float calcularArea();
    float calcularPerimetro();
    void imprimirFigura();
    void setDatos( float a, float b );
    void imprimirFiguraColor();
};

#endif //TAREA_FIGURAS_TRIANGULO_H
