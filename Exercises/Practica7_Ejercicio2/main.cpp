#include <iostream>
using namespace std;

bool esPrimo(int num);

int main(){

    int num;

    cout<<"Dime un numero y te dire si es primo! (mayor que 1)\nNumero: ";
    cin>>num;

    while(num<1){
        cout<<"Numero no valido, introduce otro!\nNumero: ";
        cin>>num;
    }

    if(esPrimo(num)){
        cout<<"El numero " << num << " es primo!";
    }else{
        cout<<"El numero " << num << " no es primo!";
    }

}
