//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_FIGURAS_H
#define HERENCIA_FIGURAS_FIGURAS_H
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <numbers>
#include <iomanip>

using std::cout;
using std::cin;
using std::vector;
using std::pow;

class Figura{
private:

protected:
    float area;
    float perimetro;
public:
    Figura();
    virtual float obtenerArea();
    virtual float  obtenerPerimetro();
    virtual void imprimirFigura();

};

#endif //HERENCIA_FIGURAS_FIGURAS_H
