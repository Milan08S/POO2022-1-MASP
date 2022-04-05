//
// Created by migue on 05/04/2022.
//

#include "MiniBacarrat.h"

float miniBacarrat::jugar(float gonzosApostar) {
    mostrarReglas();
    int maxRandomNumber = 9;
    int minRandomNumber = 1;
    int num1;
    int num2;
    cartasJugador = 0;

    srand(time(nullptr));
    for( int i = 0; i <= 2; i++ ) {
        num1 = minRandomNumber + rand() % maxRandomNumber;
        cout << "Tu numero " << i << "es" << num1;
        cartasJugador += num1;
    }

    for( int j = 0; j <= 2; j++ ) {
        num2 = minRandomNumber + rand() % maxRandomNumber;
        cout << "Tu numero " << j << "es" << num2;
        cartasCasino += num1;
    }

    if( cartasJugador > 9 )
        cartasJugador = returnLastDigit( cartasJugador );
    cout << "Tu numero es " << cartasJugador;

    if( cartasCasino > 9 )
        cartasCasino = returnLastDigit( cartasCasino );
    cout << "El numero del casino es " << cartasCasino;

    float gonzosResultado = calcularResultado(gonzosApostar);

    return gonzosResultado;
}

int miniBacarrat::returnLastDigit( int digit ) { //retorna el ultimo digito en caso de que el numero sea de dos digitos
    return digit%10;
}

float  miniBacarrat::calcularResultado(float gonzosApostar) {
    float maxResult = 2;
    float minResult = 0;
    if( cartasJugador > cartasCasino ){
        cout << "Has ganado!\n";
        return maxResult * gonzosApostar;
    }
    else{
        cout << "Has perdido :(, vuelve a intentarlo\n";
        return minResult;
    }
}

void miniBacarrat::mostrarReglas() {
    cout << "Mini Bacarrat\n"
            "======================\n"
            "Mecanica de Juego:\n"
            "El sistema te dara dos numeros al azar, la suma de estos numeros dara una puntuacion, el casino tambien tendra dos numeros.\n"
            "Calcular Resultado:\n"
            "La puntuacion maxima es de 9, si la suma de las cartas es de dos digitos se escogera el ultimo digito como la puntuacion, si la puntuacion es mayor que la del casino ganas el doble de gonzos.\nSi pierdes, pierdes tus gonzos.9\n";
}