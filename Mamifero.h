#ifndef MAMIFERO_H
#define MAMIFERO_H
#include<iostream>

using namespace std;

class Mamifero
{
    private:
        int Anio,_length;
        string Dieta,LugarNac,Raza,_data;

    public:
        Mamifero(string,int,string,string);
        Mamifero(const Mamifero&);
        Mamifero(Mamifero&&)noexcept;
        string getDieta();
        string getRaza();
        string getLugarNac();
        int getAnio();
        int getEdad();
        void Imprimir();
};

#endif // MAMIFERO_H
