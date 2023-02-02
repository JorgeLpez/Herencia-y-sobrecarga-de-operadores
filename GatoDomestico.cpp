#include "GatoDomestico.h"

GatoDomestico::GatoDomestico(string Dieta,int Anio,string LugarNac,string Raza,string Duenio):Mamifero(Dieta,Anio,LugarNac,Raza)
{
    this->Duenio=Duenio;
}

string GatoDomestico::getNombre()
{
    return Duenio;
}

void GatoDomestico::CambiarNom(string NewName)
{
    Duenio=NewName;
}
