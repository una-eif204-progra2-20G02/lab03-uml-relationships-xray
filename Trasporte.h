#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Trasporte
{
private:
	string nombre;
	int velocidadMax;

public:
	
	Trasporte();
	Trasporte(string nombre, int velocidadMax);
	~Trasporte();

	int getNombre() const;
	void setNombre(int nombre);
	int getVelocidadMax() const;
	void setVelocidadMax(int velocidadMax);

	virtual string toString() = 0;
};