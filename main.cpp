#include <iostream>
#include "View.h"

int main() {
    View View;
    View.combinarReferencias();
    int opc;
    do {
        View.menu();
        cin >> opc;
        switch (opc) {
            case 1:

                View.agregarCirculo();
                break;
            case 2:

                View.agregarRectangulo();
                break;
            case 3:

                View.agregarCuadrado();
                break;
            case 4:

                View.imprimirFiguras();
                break;
            case 5:

                View.mostrarAreas();
                break;
            case 6:

                View.mostrarPerimetros();
                break;
            case 0:

                cout << "Vuelva pronto :)\n";
                break;
            default:
                cout << "Error!\n\n";

                break;
        }
    }while(opc != 0);
    return 0;
}
