#pragma once
#include "cMediodeTransporte.h"
class cSubte:public cMediodeTransporte
{
private:
	const char nombre; 

public:
	cSubte(string nombre, char Nombre); 
	float Tarifa(cPersona* PersonaCobrar);
	~cSubte(); 
};

