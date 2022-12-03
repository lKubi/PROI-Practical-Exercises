#include <iostream>

using namespace std;

int mcd(int m, int n);

int main(){
    cout<<"Introduce 2 numeros para calcular su MCD\nNumero 1: ";
    int num1;
    cin>>num1;
    cout<<"Numero 2: ";
    int num2;
    cin>>num2;

    cout<<"El MCD de " << num1 << " y " << num2 << " es: " << mcd(num1,num2);
}

int mcd(int m, int n){
    int mayor, menor;

    if(m>=n){
        mayor = m;
        menor = n;
    }else{
        mayor = n;
        menor = m;
    }

    int resto = mayor%menor;

    if(resto==0){
        return menor;
    }else{
        return mcd(menor, resto);
    }
}
