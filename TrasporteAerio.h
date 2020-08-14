#pragma once
#include<iostream>
#include<sstream>
#include"Trasporte.h"
using namespace std;

class TrasporteAerio : public Trasporte
{
public:

	TrasporteAerio();
	~TrasporteAerio();

	virtual string toString() = 0;
};