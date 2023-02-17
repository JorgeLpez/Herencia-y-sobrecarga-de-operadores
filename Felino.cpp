#include "Felino.h"
#include<iostream>
using namespace std;

Felino::Felino(string Dieta,int Anio,string LugarNac,string Raza,string Circo):Mamifero(Dieta,Anio,LugarNac,Raza)
{
    this->Circo=Circo;
}

string Felino::getCirco()
{
    return Circo;
}

void Felino::CambiarCirco(string NewName)
{
    Circo=NewName;
}

void Felino::Imprimir()
{
    cout<<"Circo: "<<getCirco()<<endl;
    Mamifero::Imprimir();
}
