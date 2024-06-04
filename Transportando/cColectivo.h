#pragma once
#include "cMediodeTransporte.h"
class cColectivo: public cMediodeTransporte
{
private: 
	const int linea; 
	const char ramal; 

public: 
	cColectivo(string nombre, char ramal, int linea); 
	float Tarifa(cPersona* PersonaCobrar); 
	~cColectivo(); 
};
