#include "Persona.h"

Persona::Persona() {}

Persona::Persona(string nombre,string apellido, int edad,string licencia) : nombre(
        nombre), apellido(apellido), edad(edad),licencia(licencia) {}

Persona::~Persona() {}

string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string nombre) {
    Persona::nombre = nombre;
}

string Persona::getApellido() {
    return apellido;
}

void Persona::setApellido(string apellido) {
    Persona::apellido = apellido;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edad) {
    Persona::edad = edad;
}


string Persona::getLicencia() {
    return licencia;
}

void Persona::setLicencia(string licencia) {
    Persona::licencia = licencia;
}

string Persona::toString() {
    return "Nombre: "+ nombre +" "+ apellido + "\n Edad: "+ to_string(edad) + "\n"
    + "Licencia: " + licencia + "\n"; //Por mejorar
}
