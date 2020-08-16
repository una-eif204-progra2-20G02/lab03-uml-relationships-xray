#ifndef LAB03_UML_RELATIONSHIPS_XRAY_PERSONA_H
#define LAB03_UML_RELATIONSHIPS_XRAY_PERSONA_H

#include <iostream>
#include <sstream>
#include <string>


using namespace std;

class Persona {
private:
    string nombre;
    string apellido;
    int edad;
    string licencia;
public:
    Persona();
    Persona(string nombre,string apellido, int edad,string licencia);
    virtual ~Persona();

    string getNombre();
    void setNombre(string nombre);

    string getApellido();
    void setApellido(string apellido);

    int getEdad();
    void setEdad(int edad);

    string getLicencia();
    void setLicencia(string licencia);

    string toString();
};


#endif //LAB03_UML_RELATIONSHIPS_XRAY_PERSONA_H
