#include"Felino.h"
#include"GatoDomestico.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int opc,opc2;
    string NewName;
    Felino EstrellaCirco("Carne",2020,"Zoo","Tigre","Atayde");
    GatoDomestico Minino("Croquetas",2010,"Casa","Persa","Jose","Charly");
    GatoDomestico Minino2("Croquetas",2010,"Casa","Persa","Jorge","Charly");

    //uso del operador y constructor copia
    Felino F=EstrellaCirco;
    F.Imprimir();
    //uso del operador y constructor move
    GatoDomestico M(move(Minino2));
    M.Imprimir();


    do{
        //system("cls");
        cout<<"\n\t***MENÚ DE OPCIONES***"<<endl;
        cout<<"1. Dieta"<<endl;
        cout<<"2. Año y lugar de nacimiento."<<endl;
        cout<<"3. Cambiar nombre del dueño de Minino."<<endl;
        cout<<"4. Raza."<<endl;
        cout<<"5. Cambiar nombre del circo en el que actúa EstrellaCirco."<<endl;
        cout<<"6. Realizar operaciones con los objetos."<<endl;
        cout<<"7. Salir."<<endl;
        cout<<"Ingresa la opción: ";
        cin>>opc;

        switch(opc){

            case 1: system("cls");
                    cout<<"\n\t***Estrella circo***\n"<<"Dieta: "<<EstrellaCirco.getDieta()<<endl;
                    cout<<"\n\t***Minino***\n"<<"Dieta: "<<Minino.getDieta()<<endl<<endl;
                    system("pause");
                    break;

            case 2: system("cls");
                    cout<<"\n\t***Estrella circo***";
                    cout<<EstrellaCirco.getLugarNac()<<"\n"<<EstrellaCirco.getAnio()<<endl;
                    cout<<"\t***Minino***";
                    cout<<Minino.getLugarNac()<<"\n"<<Minino.getAnio()<<endl;
                    system("pause");
                    break;

            case 3: system("cls");
                    cout<<"Nombre actual del dueño de minino: "<<Minino.getDuenio();
                    cout<<"\n\nIngresa el nuevo nombre: ";
                    cin>>NewName;
                    Minino.CambiarNom(NewName);
                    cout<<"\nNombre del dueño actualizado a '"<<Minino.getDuenio()<<"' correctamente!"<<endl<<endl;
                    system("pause");
                    break;

            case 4: system("cls");
                    cout<<"\n\t***Estrella circo***\n"<<"Raza: "<<EstrellaCirco.getRaza()<<endl;
                    cout<<"\n\t***Minino***\n"<<"Raza: "<<Minino.getRaza()<<endl<<endl;
                    system("pause");
                    break;

            case 5: system("cls");
                    cout<<"Nombre actual del circo: "<<EstrellaCirco.getCirco();
                    cout<<"\n\nIngresa el nuevo nombre: ";
                    cin>>NewName;
                    EstrellaCirco.CambiarCirco(NewName);
                    cout<<"\nNombre del circo Actualizado a '"<<EstrellaCirco.getCirco()<<"' correctamente!"<<endl<<endl;
                    system("pause");
                    break;

            case 6: system("cls");
                    cout<<"Elije que operación deseas realizar: \n1. ==\n2. !=\n3. +\n4. <\n5. >\nIngresa la Opción: ";
                    cin>>opc2;
                    if(opc2==1){
                        cout<<"\nMinio2 == Minino "<<((Minino2==Minino)?"Si":"No")<<endl<<endl;
                    }else if(opc2==2){
                        cout<<"\nMinino2 != Minino "<<((Minino2!=Minino)?"Si":"No")<<endl<<endl;
                    }else if(opc2==3){
                        cout<<"\nMinino2 + Minino"<<endl;
                        GatoDomestico Minino3=Minino2+Minino;
                        cout<<Minino3.getNombre()<<endl<<endl;
                    }else if(opc2==4){
                        cout<<"\nMinino2 < Minino "<<((Minino2<Minino)?"Si":"No")<<endl<<endl;
                    }else if(opc2==5){
                        cout<<"\nMinino2 > Minino "<<((Minino2>Minino)?"Si":"No")<<endl<<endl;
                    }else{
                        cout<<"La opción no existe!"<<endl;
                    }
                    system("pause");
                    break;
        }
    }while(opc!=7);

    return 0;
}
