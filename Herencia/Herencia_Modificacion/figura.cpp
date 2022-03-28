#include "figura.h"

using namespace::std;

void Figura::agregarFigura(float perimetro, float area){
   listFiguras.insert(make_pair(perimetro, area));
   return;
}

void Figura::imprimirFigura(){

}

float Figura::sumaPerimetros(){
   float sumatoria;
   unordered_map<float, float>::iterator iter;
   for( iter = listFiguras.begin(); iter != listFiguras.end(); iter++){
      sumatoria += iter->first;
   }
   return sumatoria;
}

float Figura::sumaAreas(){
   float sumatoria;
   unordered_map<float, float>::iterator iter;
   for( iter = listFiguras.begin(); iter != listFiguras.end(); iter++){
      sumatoria += iter->second;
   }
   return sumatoria;
}

void Figura::imprimirFiguraColor() {

}