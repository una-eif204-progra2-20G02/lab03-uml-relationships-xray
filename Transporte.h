#ifndef LAB03_UML_RELATIONSHIPS_XRAY_TRANSPORTE_H
#define LAB03_UML_RELATIONSHIPS_XRAY_TRANSPORTE_H

#include <iostream>
#include <sstream>

using namespace std;

class Transporte {
private:
    string marca;
    int velocidadMaxima;
    int cantidadPasajeros;
public:
    Transporte();
    Transporte(string marca, int velocidadMaxima, int cantidadPasajeros);

    virtual ~Transporte();

    string getMarca();
    void setMarca(const string marca);

    int getVelocidadMaxima() const;
    void setVelocidadMaxima(int velocidadMaxima);

    int getCantidadPasajeros() const;
    void setCantidadPasajeros(int cantidadPasajeros);

    virtual string toString() = 0;
};


#endif //LAB03_UML_RELATIONSHIPS_XRAY_TRANSPORTE_H
