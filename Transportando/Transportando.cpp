// Transportando.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
void operator+(cMediodeTransporte& Transporte, cPersona* Persona1)
{
    Transporte.Agregar(Persona1);
}
ostream& operator<<(ostream& o, cPersona& Persona)
{
    o << Persona.nombre << endl;
    return o;
}

#include <iostream>
#include "cMediodeTransporte.h"
#include "cColectivo.h"
#include "cSubte.h"

int main()
{
    
    //string nombre, char ramal, int linea
    cMediodeTransporte* Cole1 = new cColectivo("Cole", 'A', 37); 
    //string nombre, int km, int cant_subte
   cPersona* Persona1 = new cPersona("Morena", 3, 0); 
   cPersona* Persona2 = new cDiscapacitado("Facundo", 5, 0); 
   cMediodeTransporte* Subte1 = new cSubte("Subte", 'B');
   *(Cole1) + Persona2; 

    /*Severity	Code	Description	Project	File	Line	Suppression State
Error (active)	E2140	expression must have integral 
or unscoped enum type	Transportando	
C:\Users\farja\OneDrive - Universidad Favaloro\Escritorio\Lab
Programacion\Parcialito\ParcialTransporte2\Transportando\Transportando.cpp	14	



Severity	Code	Description	Project	File	Line	Suppression State
Error (active)	E0042	operand types are incompatible
("cMediodeTransporte *" and "cPersona *")	Transportando
C:\Users\farja\OneDrive - Universidad Favaloro\Escritorio\Lab Programacion\Parcialito\ParcialTransporte2\Transportando\Transportando.cpp	17

    */

    return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
