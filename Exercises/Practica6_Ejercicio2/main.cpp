#include <iostream>
#include "functions.h"


using namespace std;

int main(){

    char caracter;

    cout<<"Introduce un caracter: ";
    cin>>caracter;

    if(esLetra(caracter)){
        cout<<"El usuario introducio una letra ("<<caracter<<")" << endl;
        if(esVocal(caracter)){
            cout<<"La letra introducida es una vocal!" << endl;
        }else{
            cout<<"La letra introducida es una consonante!" << endl;
        }

        if(esMayuscula(caracter)){
            cout<<"El caracter es una mayuscula!" << endl;
        }else{
            cout<<"El caracter no es una mayuscula!" << endl;
        }
    }else{
        cout<<"El usuario introducio otro caracter distinto a una letra (" << caracter << ")" << endl;
        if(esNumero(caracter)){
            cout<<"El caracter es un numero!";

        }
    }

}
