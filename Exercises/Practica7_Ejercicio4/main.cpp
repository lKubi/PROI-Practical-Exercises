#include <iostream>

using namespace std;

int calcularFactorial(int num);

int main(){

    int num;

    cout<<"Dime un numero para calcular el factorial!\nNumero: ";
    cin>>num;

    cout<<"El factorial de " << num << " es: " << calcularFactorial(num);

}
