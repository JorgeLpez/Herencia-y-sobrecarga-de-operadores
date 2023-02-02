#include "Mamifero.h"

Mamifero::Mamifero(string Dieta,int Anio,string LugarNac,string Raza)
{
    this->Dieta=Dieta;
    this->Anio=Anio;
    this->LugarNac=LugarNac;
    this->Raza=Raza;
}

string Mamifero::getDieta()
{
    return Dieta;
}

string Mamifero::getRaza()
{
    return Raza;
}

void Mamifero::Nacimiento()
{
    cout<<"\nLugar nacimiento: "<<LugarNac;
    cout<<"\nAño: "<<Anio<<endl<<endl;
}

void Mamifero::Imprimir()
{
    cout<<"Dieta: "<<Dieta<<endl;
    cout<<"Lugar de Nacimiento: "<<LugarNac<<endl;
    cout<<"Año: "<<Anio<<endl;
    cout<<"Raza: "<<Raza<<endl<<endl;
}
