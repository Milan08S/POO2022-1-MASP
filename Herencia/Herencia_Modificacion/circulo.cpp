#include "circulo.h"

Circulo::Circulo(float _radio){
   this->radio = _radio;
   return;
}

float Circulo::calcularArea(){
   float pi = 3.14159265359;
   area = pi*(radio*radio);
   return area;
}

float Circulo::calcularPerimetro(){
   float pi = 3.14159265359;
   perimetro = 2*pi*radio;
   return perimetro;
}

void Circulo::setRadio(float _radio){
   this->radio = _radio;
   return;
}

void Circulo::imprimirFigura(){
    cout<<"CIRCULO"<<endl;
    cout<<"  *****  "<<endl;
    cout<<" *     * "<<endl;
    cout<<"*       *"<<endl;
    cout<<" *     * "<<endl;
    cout<<"  *****  "<<endl;
   return;
}

void Circulo::imprimirFiguraColor() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN));
    cout<<"CIRCULO"<<endl;
    cout<<"  *****  "<<endl;
    cout<<" *     * "<<endl;
    cout<<"*       *"<<endl;
    cout<<" *     * "<<endl;
    cout<<"  *****  "<<endl;
        SetConsoleTextAttribute(hConsole, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN));

}