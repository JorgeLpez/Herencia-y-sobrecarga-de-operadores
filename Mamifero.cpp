#include "Mamifero.h"

Mamifero::Mamifero(string Dieta,int Anio,string LugarNac,string Raza)
{
    this->Dieta=Dieta;
    this->Anio=Anio;
    this->LugarNac=LugarNac;
    this->Raza=Raza;
}

Mamifero::Mamifero(const Mamifero& F)
{
    Dieta=F.Dieta;
    Anio=F.Anio;
    LugarNac=F.LugarNac;
    Raza=F.Raza;
}

Mamifero::Mamifero(Mamifero&& F)noexcept
{
    Dieta=F.Dieta;
    Anio=F.Anio;
    LugarNac=F.LugarNac;
    Raza=F.Raza;
}

string Mamifero::getDieta()
{
    return Dieta;
}

string Mamifero::getRaza()
{
    return Raza;
}

string Mamifero::getLugarNac()
{
    return LugarNac;
}

int Mamifero::getAnio()
{
    return Anio;
}

int Mamifero::getEdad()
{
    return (2023-Anio);
}

void Mamifero::Imprimir()
{
    cout<<"Dieta: "<<getDieta()<<endl;
    cout<<"Lugar de Nacimiento: "<<getLugarNac()<<endl;
    cout<<"Año: "<<getAnio()<<endl;
    cout<<"Raza: "<<getRaza()<<endl<<endl;
}
