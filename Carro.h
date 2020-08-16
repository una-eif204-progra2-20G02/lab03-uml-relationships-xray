#ifndef LAB03_UML_RELATIONSHIPS_XRAY_CARRO_H
#define LAB03_UML_RELATIONSHIPS_XRAY_CARRO_H

#include "TransporteTerrestre.h"
#include "Persona.h"
#include "Motor.h"
#include <string>

using namespace std;

class Carro: public TransporteTerrestre {
private:
    Motor* motor;
    string placa;
    Persona* duenno;
public:
    Carro();
    Carro(string marca, int velocidadMaxima, int cantidadPasajeros, int ruedas,Motor* motor,
          string placa, Persona* duenno);
    virtual ~Carro();

    Motor* getMotor();
    void setMotor(Motor* motor);

    string getPlaca();
    void setPlaca(string placa);

    Persona* getDuenno() ;
    void setDuenno(Persona* duenno);

    string toString();
};


#endif //LAB03_UML_RELATIONSHIPS_XRAY_CARRO_H
