//
// Created by migue on 05/04/2022.
//

#ifndef CASINO_POLIMORFISMO_MINIBACARRAT_H
#define CASINO_POLIMORFISMO_MINIBACARRAT_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>

class miniBacarrat : public Juego{
protected:
    int cartasJugador;
    int cartasCasino;

    float calcularResultado( float gonzosApostar ) override;
public:
    ~miniBacarrat() override = default;

    float jugar(float gonzosApostar) override;

    void mostrarReglas() override;

    int returnLastDigit( int digit );

};

#endif //CASINO_POLIMORFISMO_MINIBACARRAT_H
