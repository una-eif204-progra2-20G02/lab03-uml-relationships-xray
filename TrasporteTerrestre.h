#pragma once
#include<iostream>
#include<sstream>
#include"Trasporte.h"
using namespace std;

class TrasporteTerrestre : public Trasporte
{

public:

	TrasporteTerrestre();
	~TrasporteTerrestre();

	virtual string toString() = 0;
};