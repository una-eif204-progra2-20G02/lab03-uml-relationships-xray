#ifndef LAB03_UML_RELATIONSHIPS_XRAY_TRANSPORTETERRESTRE_H
#define LAB03_UML_RELATIONSHIPS_XRAY_TRANSPORTETERRESTRE_H

#include "Transporte.h"

using namespace std;

class TransporteTerrestre:public Transporte {
private:
    int ruedas;
public:
    TransporteTerrestre();
    TransporteTerrestre(string marca, int velocidadMaxima, int cantidadPasajeros,int ruedas);
    virtual ~TransporteTerrestre();

    int getRuedas();
    void setRuedas(int ruedas);
};


#endif //LAB03_UML_RELATIONSHIPS_XRAY_TRANSPORTETERRRESTRE_H
