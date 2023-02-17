#include "GatoDomestico.h"

GatoDomestico::GatoDomestico(string Dieta,int Anio,string LugarNac,string Raza,string Duenio,string Nombre):Mamifero(Dieta,Anio,LugarNac,Raza)
{
    this->Duenio=Duenio;
    this->Nombre=Nombre;
}

string GatoDomestico::getDuenio()
{
    return Duenio;
}

string GatoDomestico::getNombre()
{
    return Nombre;
}

void GatoDomestico::CambiarNom(string NewName)
{
    Duenio=NewName;
}

void GatoDomestico::Imprimir()
{
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"Dueño: "<<getDuenio()<<endl;
    Mamifero::Imprimir();
}

GatoDomestico& GatoDomestico::operator+(GatoDomestico& G1)
{
    G1.Nombre+=Nombre;
    return G1;
}

bool GatoDomestico::operator==(GatoDomestico& G1)
{
    if(Mamifero::getDieta()==G1.getDieta() && Mamifero::getLugarNac()==G1.getLugarNac() && Mamifero::getRaza() == G1.getRaza() && Mamifero::getAnio()==G1.getAnio()){
        return true;
    }
    return false;
}

bool GatoDomestico::operator!=(GatoDomestico& G1)
{
    if(Mamifero::getDieta()!=G1.getDieta() && Mamifero::getLugarNac()!=G1.getLugarNac() && Mamifero::getRaza()!=G1.getRaza() && Mamifero::getAnio()!=G1.getAnio()){
        return true;
    }
    return false;
}

bool GatoDomestico::operator<(GatoDomestico& G1)
{
    if(Mamifero::getEdad()<G1.getEdad()){
        return true;
    }
    return false;
}

bool GatoDomestico::operator>(GatoDomestico& G1)
{
    if(Mamifero::getEdad()>G1.getEdad()){
        return true;
    }
    return false;
}
