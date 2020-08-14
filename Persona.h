#pragma once
#include<iostream>
#include<sstream>
#include"Carro.h"
using namespace std;

class Persona
{
private:
	string nombre;
	int edad;
public:
	Persona();
	Persona(string nombre, int edad);
	~Persona();
	int getNombre() const;
	void setNombre(int nombre);
	int getEdad() const;
	void setEdad(int edad);
	string toString;
};