 #include "cuadrado.h"

Cuadrado::Cuadrado(float _lado){
   this->lado = _lado;
}

float Cuadrado::calcularArea(){
   area = lado*lado;
   return area;
}

float Cuadrado::calcularPerimetro(){

   perimetro = lado+lado+lado+lado;
   return perimetro;
}

void Cuadrado::setLado(float _lado){
   this->lado = _lado;
}

void Cuadrado::imprimirFigura(){
    cout<<"CUADRADO"<<endl;
    cout<<"*******"<<endl;
    cout<<"*     *"<<endl;
    cout<<"*     *"<<endl;
    cout<<"*******"<<endl;
}

void Cuadrado::imprimirFiguraColor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_GREEN));
    cout<<"CUADRADO"<<endl;
    cout<<"*******"<<endl;
    cout<<"*     *"<<endl;
    cout<<"*     *"<<endl;
    cout<<"*******"<<endl;
    SetConsoleTextAttribute(hConsole, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN));
}