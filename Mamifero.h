#ifndef MAMIFERO_H
#define MAMIFERO_H
#include<iostream>

using namespace std;

class Mamifero
{
    private:
        string Dieta,LugarNac,Raza;
        int Anio;

    public:
        Mamifero(string,int,string,string);
        string getDieta();
        string getRaza();
        void Nacimiento();
        void Imprimir();


        friend Mamifero& operator+(Mamifero& X,Mamifero& Y){
            X.Dieta=X.Dieta+Y.Dieta;
            X.Anio=X.Anio+Y.Anio;
            X.LugarNac=X.LugarNac+Y.LugarNac;
            X.Raza=X.Raza+Y.Raza;
            return X;
        }

        friend bool operator==(Mamifero& X,Mamifero& Y){
            if(X.Dieta==Y.Dieta && X.Anio==Y.Anio && X.LugarNac==Y.LugarNac && X.Raza==Y.Raza){
                return true;
            }
            return false;
        }

        friend bool operator!=(Mamifero& X,Mamifero& Y){
            if(X.Dieta!=Y.Dieta && X.Anio!=Y.Anio && X.LugarNac!=Y.LugarNac && X.Raza!=Y.Raza){
                return true;
            }
            return false;
        }

        friend bool operator<(Mamifero& X,Mamifero& Y){
            if(X.Dieta<Y.Dieta && X.Anio<Y.Anio && X.LugarNac<Y.LugarNac && X.Raza<Y.Raza){
                return true;
            }
            return false;
        }

        friend bool operator>(Mamifero& X,Mamifero& Y){
            if(X.Dieta>Y.Dieta && X.Anio>Y.Anio && X.LugarNac>Y.LugarNac && X.Raza>Y.Raza){
                return true;
            }
            return false;
        }
};

#endif // MAMIFERO_H
