#pragma once
#include<iostream>
#include<sstream>
#include"Trasporte.h"
using namespace std;

class TrasporteAcuatico : public Trasporte
{
public:

	TrasporteAcuatico();
	~TrasporteAcuatico();

	virtual string toString() = 0;
};