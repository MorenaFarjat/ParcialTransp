#pragma once
#include <ostream>
#include <iostream>
#include <string>
#include <list>
#include "cPersona.h"
#include "cDiscapacitado.h"

using namespace std; 
class cMediodeTransporte
{
protected: 
	string nombre; 
	float caja;
	list<cPersona*>ListaPasajeros; 

public: 
	cMediodeTransporte(string nombre); 
	virtual float Tarifa(cPersona* PersonaCobrar)=0; //virtual puro
	virtual ~cMediodeTransporte(); 
	void Agregar(cPersona* Persona1); 
	//porq no deja el * en mediodet
	friend void operator+(cMediodeTransporte& Transporte, cPersona* Persona1);
	cPersona* operator[](int index); 
	void Quitar(cPersona* PersonaBorrar); 
	void operator-(cPersona* PersonaBorrar); 
	void EliminarLista(); 
	void Listar(); 
	float calcularBeneficio(cPersona* Persona); 
	//friend ostream& operator<<(ostream& o, cMediodeTransporte& Transporte); 
};

