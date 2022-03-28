#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include <unordered_map>
#include <math.h>
#include <conio.h>
#include <windows.h>

using std::unordered_map;
using std::cin;
using std::cout;
using std::pow;
using std::getchar;
using std::endl;

class Figura{
private:
    unordered_map<float, float> listFiguras;
protected:
    float area;
    float perimetro;
public:
    void agregarFigura(float _perimetro, float _area);
    virtual void imprimirFiguraColor();
    virtual void imprimirFigura();
    float sumaPerimetros();
    float sumaAreas();
};

#endif