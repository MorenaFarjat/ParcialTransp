#include "cMediodeTransporte.h"

cMediodeTransporte::cMediodeTransporte(string nombre)
{
	this->nombre = nombre; 
	this->caja = 0; 
}

cMediodeTransporte::~cMediodeTransporte()
{
}

void cMediodeTransporte::Agregar(cPersona* Persona1)
{
	this->ListaPasajeros.push_back(Persona1); 
	this->caja += this->Tarifa(Persona1); 
	
}
cPersona* cMediodeTransporte::operator[](int index)
{
	list<cPersona*>::iterator it = this->ListaPasajeros.begin();
	int i = 0; 
	if (!this->ListaPasajeros.empty())
	{
		while (it != this->ListaPasajeros.end())
		{
			if (i == index)
			{
				return (*it);
				//lista[1]
			}
			it++;
			i++;
		}
	}
	else
		throw new exception("Error no se existe ese elemento de la lista"); 
}
void cMediodeTransporte::Quitar(cPersona* PersonaBorrar)
{
	//(*this) - PersonaBorrar; 
	list<cPersona*>::iterator it = this->ListaPasajeros.begin(); 
	while (it != this->ListaPasajeros.end())
	{
		if ((*it)->get_nombre() == PersonaBorrar->get_nombre())
		{
			this->ListaPasajeros.erase(it); 
			return; 
		}
		it++; 
	}
	throw new exception("Error no se encontro el Pasajero a borrar en la lista"); 
}
void cMediodeTransporte::operator-(cPersona* PersonaBorrar)
{
	try
	{
		this->Quitar(PersonaBorrar);
	} 
	catch(const exception *exc)
	{
		cout << exc->what() << endl; 
		delete exc; 
	}
}
void cMediodeTransporte::EliminarLista()
{
	list<cPersona*>::iterator it = this->ListaPasajeros.begin();
	if (!this->ListaPasajeros.empty())
	{
		while (it != this->ListaPasajeros.end())
		{
			this->ListaPasajeros.erase(it);
			it++;
		}
	}
}
void cMediodeTransporte::Listar()
{
	list<cPersona*>::iterator it = this->ListaPasajeros.begin(); 
	if (!this->ListaPasajeros.empty())
	{
		while (it != this->ListaPasajeros.end())
		{
			cout << *(*it) << endl; 
			it++;
		}
	}
}
float cMediodeTransporte::calcularBeneficio(cPersona* Persona)
{
	/*Al agregar un pasajero este tiene que pagar el boleto (la plata se suma a caja).
La tabla tarifaria es la siguiente:
 Los menores de 3 años no pagan.
 Los estudiantes de primaria 4 a 12 años pagan el 20% del precio máximo.
 Los estudiantes secundarios, 13 a 17 años, pagan el 50% del precio máximo.
 Los mayores a 65 años pagan 25 % del precio máximo.
 Los discapacitados no pagan.
	*/
	//cMoto* M1=dynamic_cast<cMoto*>(V1);
	cDiscapacitado* aux = dynamic_cast<cDiscapacitado*>(Persona);
	if (aux != NULL || Persona->get_edad() < 3)
	{
		return 0; 
	}
	else
	{
		if (Persona->get_edad() < 12 && Persona->get_edad()>3)
		{
			return 0.2; 
		}
		if (Persona->get_edad()>12 && Persona->get_edad()<17)
		{
			return 0.5;
		}
		if (Persona->get_edad() >= 65)
		{
			return 0.25;
		}
		else return 1; 
	}
}


