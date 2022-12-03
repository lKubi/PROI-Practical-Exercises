#include <iostream>
using namespace std;

int sumaDigitos(int n);

int main(){

    int n;
    cout<<"Introduce un numero para sumar sus digitos.\nNumero: ";
    cin>>n;
    cout<<"La suma de los digitos de " << n << " es: " << sumaDigitos(n);
}


int sumaDigitos(int n){
    if(n==0){
        return 0;
    }else{
        return (n%10 +  sumaDigitos(n/10));
    }
}
