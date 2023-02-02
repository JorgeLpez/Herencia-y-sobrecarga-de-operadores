#ifndef FELINO_H
#define FELINO_H
#include "Mamifero.h"

class Felino:public Mamifero
{
    private:
        string Circo;

    public:
        Felino(string,int,string,string,string);
        void CambiarCirco(string);
        string getCirco();
};

#endif // FELINO_H
