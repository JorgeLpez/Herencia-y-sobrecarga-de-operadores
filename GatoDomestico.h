#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H
#include"Mamifero.h"

class GatoDomestico:public Mamifero
{
    private:
        string Duenio,Nombre;

    public:
        GatoDomestico(string,int,string,string,string,string);
        string getDuenio();
        string getNombre();
        void CambiarNom(string);
        void Imprimir();
        //Sobrecarga de operadores
        GatoDomestico& operator+(GatoDomestico&);
        bool operator==(GatoDomestico&);
        bool operator!=(GatoDomestico&);
        bool operator<(GatoDomestico&);
        bool operator>(GatoDomestico&);


};

#endif // GATODOMESTICO_H
