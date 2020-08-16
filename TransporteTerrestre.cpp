#include "TransporteTerrestre.h"

TransporteTerrestre::TransporteTerrestre() {}

TransporteTerrestre::TransporteTerrestre(string marca, int velocidadMaxima, int cantidadPasajeros,int ruedas) : Transporte(
        marca, velocidadMaxima, cantidadPasajeros) {this->ruedas = ruedas;}

TransporteTerrestre::~TransporteTerrestre() {}

int TransporteTerrestre::getRuedas(){
    return ruedas;
}

void TransporteTerrestre::setRuedas(int ruedas) {
    TransporteTerrestre::ruedas = ruedas;
}

