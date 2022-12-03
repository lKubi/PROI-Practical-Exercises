#include <iostream>
using namespace std;

int dividir (int a, int b);

int main(){
    int num1,num2;
    cout<<"Introduce el dividendo: ";
    cin>>num1;
    cout<<"Introduce el divisor: ";
    cin>>num2;

    cout<<"La division es: " << dividir(num1,num2);
}

int dividir (int a, int b){
    int cociente;
    cociente = a/b;
    return cociente;
}

