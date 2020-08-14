#pragma once
#include<iostream>
#include<sstream>
#include"Carro.h"
using namespace std;

class Motor
{
private:
	string partes;

public:
	Motor();
	Motor(string Partes);
	~Motor();

	int getPartes() const;
	void setPartes(int Partes);
	string toString();
};