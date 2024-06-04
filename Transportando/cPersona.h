#pragma once
#include "cMediodeTransporte.h"
class cPersona
{
private: 
	string nombre; 
	int km; 
	int cant_subte; 
	int edad; 

public: 
	cPersona(string nombre, int km, int cant_subte); 
	string get_nombre(); 
	int get_cantS(); 
	virtual ~cPersona(); 
	friend ostream& operator<<(ostream& o, cPersona& Persona); 
	//istream& operator>>(istream& o); 
	int get_km(); 
	int get_edad(); 
};

