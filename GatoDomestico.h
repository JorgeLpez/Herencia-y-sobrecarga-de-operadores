#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H
#include"Mamifero.h"

class GatoDomestico:public Mamifero
{
    private:
        string Duenio;

    public:
        GatoDomestico(string,int,string,string,string);
        string getNombre();
        void CambiarNom(string);
};

#endif // GATODOMESTICO_H
