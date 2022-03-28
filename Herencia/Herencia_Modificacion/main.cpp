#include "rectangulo.h"
#include "cuadrado.h"
#include "circulo.h"
#include "Triangulo.h"

using namespace::std;

void menuPrincipal(){
   cout<<"FIGURAS"<<endl;
   cout<<"=============="<<endl;
   cout<<"1. Ingresar nueva figura"<<endl;
   cout<<"2. Sumar areas de figuras"<<endl;
   cout<<"3. Sumar perimetros de figuras"<<endl;
   cout<<"0. Salir"<<endl;
   cout<<"Opcion: "<<endl;
}

void menuFiguras(){
   cout<<"¿Que figura desea agregar?"<<endl;
   cout<<"1. Cuadrado"<<endl;
   cout<<"2. Rectangulo"<<endl;
   cout<<"3. Circulo"<<endl;
   cout <<"4. Triangulo"<<endl;
   cout<<"Opcion: "<<endl;
}

void menuOpcionesFiguras(){
   cout<<"¿Que deseas hacer con la figura?"<<endl;
   cout<<"1. Calcular Area"<<endl;
   cout<<"2. Calcular Perimetro"<<endl;
   cout<<"3. Dibujar Figura"<<endl;
   cout<<"4. Dibujar Figura Color"<<endl;
   cout<<"0. Salir"<<endl;
}

int main(){
    [[maybe_unused]] int opc, opc2, opc3, opc4;
   float lado, base, altura, radio;
   Circulo newCirculo(0);
   Cuadrado newCuadrado(0);
   Rectangulo newRectangulo(0,0);
   Triangulo newTriangulo( 0, 0);

   do{
      menuPrincipal();
      cin>>opc;
      while(opc < 0 || opc > 4){
         cout<<"Ingrese una opcion valida"<<endl;
         cin>>opc;
      }
      switch (opc)
      {
      case 1:
         menuFiguras();
         cin>>opc2;
         while(opc2 < 1 || opc2 > 4){
            cout<<"Ingrese una opcion valida"<<endl;
            cin>>opc2;
         }switch(opc2){
            case 1:
               cout<<"Digite el lado en cm: "<<endl;
               cin>>lado;
               newCuadrado.setLado(lado);
               newCuadrado.agregarFigura(newCuadrado.calcularPerimetro(), newCuadrado.calcularArea());
               do{
                  menuOpcionesFiguras();
                  cin>>opc3;
                  while(opc3 < 0 || opc3 > 4){
                     cout<<"Ingrese una opcion valida"<<endl;
                     cin>>opc3;
                  }
                  if(opc3 == 1){
                     cout<<"El area de la figura es "<<newCuadrado.calcularArea()<<" cm2"<<endl;
                  }else if(opc3 == 2){
                     cout<<"El perimetro de la figura es "<<newCuadrado.calcularPerimetro()<<" cm"<<endl;
                  }else if(opc3 == 3){
                     newCuadrado.imprimirFigura();
                  }
                  else if( opc3 == 4){
                      newCuadrado.imprimirFiguraColor();
                  }
               }while(opc3 > 0 && opc3 <= 3);
               break;
            case 2:
               cout<<"Digite la base en cm: "<<endl;
               cin>>base;
               cout<<"Digite la altura en cm: "<<endl;
               cin>>altura;
               newRectangulo.setBase(base);
               newRectangulo.setAltura(altura);
               newRectangulo.agregarFigura(newRectangulo.calcularPerimetro(), newRectangulo.calcularArea());
               do{
                  menuOpcionesFiguras();
                  cin>>opc3;
                  while(opc3 < 0 || opc3 > 4){
                     cout<<"Ingrese una opcion valida"<<endl;
                     cin>>opc3;
                  }
                  if(opc3 == 1){
                     cout<<"El area de la figura es "<<newRectangulo.calcularArea()<<" cm2"<<endl;
                  }else if(opc3 == 2){
                     cout<<"El perimetro de la figura es "<<newRectangulo.calcularPerimetro()<<" cm"<<endl;
                  }else if(opc3 == 3){
                     newRectangulo.imprimirFigura();
                  }
                  else if( opc3 == 4){
                      newRectangulo.imprimirFiguraColor();
                  }
               }while(opc3 > 0 && opc3 <= 3);
               break;
            case 3:
               cout<<"Digite el radio en cm: "<<endl;
               cin>>radio;
               newCirculo.setRadio(radio);
               newCirculo.agregarFigura(newCirculo.calcularPerimetro(), newCirculo.calcularArea());
               do{
                  menuOpcionesFiguras();
                  cin>>opc3;
                  while(opc3 < 0 || opc3 > 4){
                     cout<<"Ingrese una opcion valida"<<endl;
                     cin>>opc3;
                  }
                  if(opc3 == 1){
                     cout<<"El area de la figura es "<<newCirculo.calcularArea()<<" cm2"<<endl;
                  }else if(opc3 == 2){
                     cout<<"El perimetro de la figura es "<<newCirculo.calcularPerimetro()<<" cm"<<endl;
                  }else if(opc3 == 3){
                     newCirculo.imprimirFigura();
                  }
                  else if( opc3 == 4){
                      newCirculo.imprimirFiguraColor();
                  }
               }while(opc3 > 0 && opc3 <= 3);
               break;
            case 4:
               float base;
               float altura;
               cout << "Digite la base del Triangulo "<<endl;
               cin >> base;
               cout<< "Digite la altura " << endl;
               cin >>altura;
               newTriangulo.setDatos( base, altura);
               newTriangulo.agregarFigura( newTriangulo.calcularPerimetro(), newTriangulo.calcularArea() );
               do{
                  menuOpcionesFiguras();
                  cin >>opc3;
                  while ( opc3 < 0 || opc3 > 4)
                  {
                     cout<<"Ingrese una opcion valida"<<endl;
                     cin>>opc3;
                  }
                  if(opc3 == 1){
                     cout<<"El area de la figura es "<<newTriangulo.calcularArea()<<" cm2"<<endl;
                  }else if(opc3 == 2){
                     cout<<"El perimetro de la figura es "<<newTriangulo.calcularPerimetro()<<" cm"<<endl;
                  }else if(opc3 == 3){
                     newTriangulo.imprimirFigura();
                  }
                  else if( opc3 == 4){
                      newTriangulo.imprimirFiguraColor();
                  }
               }while(opc3 > 0 && opc3 <= 3);
               break;
            default:
               break;
         }
         break;
      case 2:
         cout<<"La suma de todas las areas es de "<<newRectangulo.sumaAreas()<<" cm2"<<endl;
         break;
      case 3:
         cout<<"La suma de todos los perimetros es de "<<newRectangulo.sumaPerimetros()<<" cm"<<endl;
         break;
      default:
         break;
      }
   }while(opc > 0 && opc <= 3);
}