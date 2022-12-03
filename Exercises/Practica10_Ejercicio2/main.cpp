#include <iostream>
#include <combinatoria.h>
using namespace std;

int main(){

    int opcion;
    do{
        cout<<"MENU\Que operacion deseas relaizar?\n1.- Combinaciones\n2.- Variaciones\n3.- Permutaciones\n4.- Salir\nOpcion: ";
        cin>>opcion;
    }while(opcion<1 || opcion > 4);

    int m,n;
    switch(opcion){
        case 1:
            cout<<"COMBINACIONES\nIntroducir el valor de m\nValor: ";
            cin>>m;
            cout<<"Introducir el valor de n\nValor: ";
            cin>>n;
            cout<< "Combinacion: " << combinacions(m,n);
            break;

        case 2:
            cout<<"Variaciones\nIntroducir el valor de m\nValor: ";
            cin>>m;
            cout<<"Introducir el valor de n\nValor: ";
            cin>>n;
            cout<< "Variaciones: " << variacions(m,n);
            break;

        case 3:
            cout<<"Permutaciones\nIntroducir el valor de m\nValor: ";
            cin>>m;
            cout<< "Permutacion: " << permutacions(m);
            break;

        case 4:
            cout<<"Saliendo!";
            break;
    }
}
