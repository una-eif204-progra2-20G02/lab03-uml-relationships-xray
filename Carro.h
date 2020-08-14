#pragma once
#include<iostream>
#include<sstream>
#include"TrasporteTerrestre.h"
using namespace std;

class Carro : public TrasporteTerrestre
{
private:
	string tipo;
	string modelo;
public:
	Carro();
	~Carro();
	string getTipo() const;
	void setTipo();
	string getModelo() const;
	void setModelo();
	string toString();
};
