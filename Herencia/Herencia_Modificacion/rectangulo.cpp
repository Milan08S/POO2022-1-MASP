#include "rectangulo.h"

Rectangulo::Rectangulo(float _base, float _altura){
   this->base = _base;
   this->altura = _altura;
   return;
}

float Rectangulo::calcularArea(){
   float area;
   area = base*altura;
   return area;
}

float Rectangulo::calcularPerimetro(){
   float perimetro;
   perimetro = base+base+altura+altura;
   return perimetro;
}

void Rectangulo::setBase(float _base){
   this->base = _base;
   return;
}

void Rectangulo::setAltura(float _altura){
   this->altura = _altura;
   return;
}

void Rectangulo::imprimirFigura() {
    cout<<"RECTANGULO"<<endl;
    cout<<"**************"<<endl;
    cout<<"*            *"<<endl;
    cout<<"*            *"<<endl;
    cout<<"**************"<<endl;

   return;
}

void Rectangulo::imprimirFiguraColor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN));
    cout<<"RECTANGULO"<<endl;
    cout<<"**************"<<endl;
    cout<<"*            *"<<endl;
    cout<<"*            *"<<endl;
    cout<<"**************"<<endl;
    SetConsoleTextAttribute(hConsole, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN));
}