#ifndef CUADRADO_H
#define CUADRADO_H

#include "figura.h"

class Cuadrado : public Figura{
   private:
      float lado;
   public:
      Cuadrado( float );
      float calcularArea();
      float calcularPerimetro();
      void imprimirFigura();
      void imprimirFiguraColor();
      void setLado(float);
};

#endif