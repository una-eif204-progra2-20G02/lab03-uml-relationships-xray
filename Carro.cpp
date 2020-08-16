#include "Carro.h"

Carro::Carro() {}

Carro::Carro(string marca, int velocidadMaxima, int cantidadPasajeros, int ruedas, Motor* motor,
             string placa,Persona* duenno) : TransporteTerrestre(marca, velocidadMaxima, cantidadPasajeros,
                                                                         ruedas), motor(motor), placa(placa),
                                                     duenno(duenno) {}

Carro::~Carro() {}

Motor* Carro::getMotor() {
    return motor;
}

void Carro::setMotor(Motor *motor) {
    Carro::motor = motor;
}

string Carro::getPlaca() {
    return placa;
}

void Carro::setPlaca(string placa) {
    Carro::placa = placa;
}

Persona* Carro::getDuenno(){
    return duenno;
}

void Carro::setDuenno(Persona* duenno) {
    Carro::duenno = duenno;
}

string Carro::toString() {
    return "";   //Por definir
}
