//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

float DosColores::jugar(float gonzosApostar) {
    mostrarReglas();
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    colorCasino = rand() % 2; // Numero entre 0 y 1
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Elije un color: " << endl;
    cout << "1. Blanco" << endl;
    cout << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador; // Se ajusta el valor del color
    cout << "Numero casino: " << numeroCasino << endl;
    cout << "Color casino: ";
    if (colorCasino == 0) {
        cout << "Blanco." << endl;
    } else {
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

void DosColores::mostrarReglas() {
    cout << "Dos Colores\n"
            "=============================\n"
            "• Mecánica de Juego\n"
            "El usuario tira un dedo (de 6 caras) y escoge entre 2 colores (Blanco o Negro), la idea es coincidir con el valor del dado y el color que luego le saldrá al casino. El sistema le pregunta al usuario el color a elegir (Blanco o Negro) y el valor apostado, luego generará un color y un número aleatorio para el casino.\n"
            "\n"
            "• Calcular Resultado\n"
            "Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado. Si el usuario coincide sólo con el valor del dado ganará 0.5 veces lo apostado, si el usuario coincide sólo con el color elegido no gana ni pierde nada, si el usuario no coincide en nada, pierde todo el dinero apostado.";
}


float DosColores::calcularResultado(float gonzosApostar) {
    float lowestResult = 0;
    float maxResult = 4;
    float midResult = 1.5;

    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if (numeroJugador == numeroCasino && colorJugador == colorCasino) {
        return maxResult * gonzosApostar;
    }
        // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if (numeroJugador == numeroCasino) {
        return midResult * gonzosApostar;
    }
        // no gana ni pierde
    else if (colorJugador == colorCasino) {
        return gonzosApostar;
    }
        // pierde lo apostado
    else {
        return lowestResult;
    }
}
/* Como el constructor se definio por defecto no hay que poner constructo vacio
DosColores::~DosColores() {

}
*/