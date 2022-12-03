#include <iostream>
using namespace std;

int potencia(int b, int e);

int main(){

    cout<<"Escribe 2 numeros naturales, una base y un exponente\nBase: ";
    int base;
    cin>>base;
    cout<<"Exponente: ";
    int exponente;
    cin>>exponente;

    cout<<base << " elevado a " << exponente << " es: " << potencia(base,exponente);
}

int potencia(int b, int e){
    if (e==1){
        return b;
    }else if (e==0){
        return 1;
    }else{
        return b*potencia(b,e-1);
    }
}
