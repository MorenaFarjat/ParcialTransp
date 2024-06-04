#include "cColectivo.h"

cColectivo::cColectivo(string nombre, char linea, int ramal):cMediodeTransporte(nombre),linea(linea),ramal(ramal)
{

}

float cColectivo::Tarifa(cPersona* PersonaCobrar)
{
	/*
-0 a 5 km -> 5$
-5 a 10 km-> 7$
-10 a 20+ km-> 10$*/
	float porcentaje = 0; 
	porcentaje= this->calcularBeneficio(PersonaCobrar); 
	if (porcentaje != 1)
	{
		return 10 * porcentaje; 
	}
	else 
	if (PersonaCobrar->get_km() > 0 && PersonaCobrar->get_km() < 5)
	{
		return 5; 
	}
	if (PersonaCobrar->get_km() >=5 && PersonaCobrar->get_km() < 10)
	{
		return 7;
	}
	if (PersonaCobrar->get_km() >= 10 && PersonaCobrar->get_km() < 20)
	{
		return 10;
	}
	else
		throw new exception("Error al calcular tarifa"); 
}

cColectivo::~cColectivo()
{
}
