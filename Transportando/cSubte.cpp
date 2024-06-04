#include "cSubte.h"

cSubte::cSubte(string nombre, char Nombre):cMediodeTransporte(nombre),nombre(Nombre)
{
}

float cSubte::Tarifa(cPersona* PersonaCobrar)
{
	/*Se abona en función de la cantidad de pasajes que se realizó en el mes.
o Si realizo menos de 25 viajes en el mes -> 4$
o Si realizo 25 viajes o más ->2$*/
	float porcentaje = 0; 
	porcentaje = this->calcularBeneficio(PersonaCobrar); 
	if (porcentaje != 1)
	{
		return 4 * porcentaje; 
	}
	else
	if (PersonaCobrar->get_cantS() < 25)
	{
		return 4; 
	}
	if (PersonaCobrar->get_cantS() >= 25)
	{
		return 2; 
	}
}

cSubte::~cSubte()
{
}
