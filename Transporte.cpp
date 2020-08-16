#include "Transporte.h"

Transporte::Transporte() {}

Transporte::Transporte(string marca, int velocidadMaxima, int cantidadPasajeros) : marca(marca), velocidadMaxima(
        velocidadMaxima), cantidadPasajeros(cantidadPasajeros) {}

Transporte::~Transporte() {}

string Transporte::getMarca(){
    return marca;
}

void Transporte::setMarca(string marca) {
    Transporte::marca = marca;
}

int Transporte::getVelocidadMaxima() const {
    return velocidadMaxima;
}

void Transporte::setVelocidadMaxima(int velocidadMaxima) {
    Transporte::velocidadMaxima = velocidadMaxima;
}

int Transporte::getCantidadPasajeros() const {
    return cantidadPasajeros;
}

void Transporte::setCantidadPasajeros(int cantidadPasajeros) {
    Transporte::cantidadPasajeros = cantidadPasajeros;
}
