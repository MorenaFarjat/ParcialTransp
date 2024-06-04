#include "cPersona.h"

cPersona::cPersona(string nombre, int km, int cant_subte)
{
    this->nombre = nombre; 
    this->km = km; 
    this->cant_subte = cant_subte; 
}
string cPersona::get_nombre()
{
    return this->nombre;
}

int cPersona::get_cantS()
{
    return this->cant_subte; 
}

cPersona::~cPersona()
{
}
/*
istream& cPersona::operator>>(istream& o)
{
    // TODO: insert return statement here
    cout << "Ingrese el Nombre de la Persona" << endl;
    o >> this->nombre; 
    cout << "Ingrese la edad de la Persona" << endl;
    o >> this->edad;
    cout << "Ingrese la cantidad de subtes tomados en el mes de la Persona" << endl;
    o >> this->cant_subte;
    cout << "Ingrese los km a recorrer en colectivo de la Persona" << endl;
    o >> this->km;
    return o; 
}
*/
int cPersona::get_km()
{
    return this->km;
}

int cPersona::get_edad()
{
    return this->edad; 
}
