//
// Created by migue on 20/03/2022.
//

#include "View.h"

void View::combinarReferencias() {
    Figura FiguraU;
    Rectangulo RectanguloU;
    Cuadrado CuadradoU;
    Circulo CirculoU;
}

void View::menu(){
    cout << "Menu\n "
            "================\n "
            "1. Agregar Circulo\n "
            "2. Agregar Rectangulo\n "
            "3. Agregar Cuadrado\n "
            "4. Imprimir Figuras\n "
            "5. Mostrar Areas\n "
            "6. Mostrar Perimetros\n "
            "0. Salir\n"
            "Opcion:  ";
}

void View::agregarCirculo() {
    float radio;
    cout << "Ingrese el radio del circulo:\n";
    cin >> radio;
    Circulo TempCirculo( radio );
    Figuras.push_back(new Circulo(TempCirculo));
    cout << "\nEl circulo ha sido agregado\n";
}

void View::agregarRectangulo() {
    float base, altura;
    cout << "Ingrese la base:\n";
    cin >> base;
    cout << "Ingrese la altura: \n";
    cin >> altura;
    Rectangulo TempRectangulo( base, altura );
    Figuras.push_back( new Rectangulo(TempRectangulo ) );
    cout << "\nEl Rectangulo ha sido agregado\n";
}

void View::agregarCuadrado() {
    float lado;
    cout << "Ingrese la medida de un lado:\n";
    cin >> lado;
    Cuadrado TempCuadrado( lado );
    Figuras.push_back( new Cuadrado( TempCuadrado ) );
    cout << "El cuadrado ha sido agregado\n";
}

void View::imprimirFiguras() {
    for( int i = 0; i < Figuras.size(); i++ ){
        Figuras[ i ]->imprimirFigura();
        cout << "\n\n";
    }
}

void View::mostrarAreas() {
    float total = 0;
    for( int i = 0; i < Figuras.size(); i++ ){
        cout << "Area: " << Figuras[ i ]->obtenerArea() << "\n\n";
        Figuras[ i ]->imprimirFigura();
        total += Figuras[ i ]->obtenerArea();
        cout << "\n\n";
    }
    cout << "El total es:" << total << "\n";
}

void View::mostrarPerimetros() {
    for( int i = 0; i < Figuras.size(); i++ ){
        cout << "Perimetro: " <<Figuras[ i ]->obtenerPerimetro() << "\n\n";
        Figuras[ i ]->imprimirFigura();
        cout << "\n\n";
    }
}


