#include <iostream>
using namespace std;

int pedirNumero();

int main(){

    int num;
    char opcion;

    do{
        num=pedirNumero();
        while(num<1 || num>9){
            cout<<"Numero incorrecto!" << endl;
            num=pedirNumero();
        }

        for(int i = 0; i<=10; i++){
            cout<<num << " * " << i << ": " << num*i << endl;
        }
        cout<<"Quieres salir (s) o calcular otro numero (c)?\nOpcion: ";
        cin>>opcion;
    }while(opcion!='s');

}

int pedirNumero(){
    int num;
    cout<<"Introduce un numero para mostrar su tabla de multiplicar!\nNumero: ";
    cin>>num;
    return num;
}
