#pragma once
#include "cPersona.h"
class cDiscapacitado : public cPersona
{
private: 
	int grado_discapacidad; 
public: 
	cDiscapacitado(string nombre, int km, int cant_subte); 
	~cDiscapacitado(); 

};

