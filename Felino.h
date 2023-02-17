#ifndef FELINO_H
#define FELINO_H
#include "Mamifero.h"

class Felino:public Mamifero
{
    private:
        string Circo;

    public:
        Felino();
        Felino(string,int,string,string,string);
        void CambiarCirco(string);
        string getCirco();
        void Imprimir();
};

#endif // FELINO_H
