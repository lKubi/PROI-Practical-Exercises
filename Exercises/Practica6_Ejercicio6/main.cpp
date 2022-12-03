#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    char caracter;
    float num1,num2;

    do{
        cout<<"Introduce una operacion matematica.\n  + -> Suma.\n  - -> Resta.\n  * -> Multriplicacion.\n  - -> Division.\n  F -> Finalizar.\nOpcion: ";
        cin>>caracter;
        if(caracter!='F'){
            cout<<"Introduce un numero: ";
            cin>>num1;
            cout<<"Introduce otro numero: ";
            cin>>num2;

            if(operacionValida(caracter)){
                if(caracter=='/' && num2==0){
                    cout<<"No se puede realizar la operacion ya que no se puede dividir entre 0!" << endl;
                }else{

                cout<<"El resultado es: " << operacion(caracter, num1, num2) << endl;
                cout<<"==================" << endl;

                }

            }else{
                cout<<"El caracter no se refiere a ninguna operacion valida!" << endl;
            }
        }
    }while(caracter!='F');

    cout<<"Programa terminado!";
}
