#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    int num;


    cout<<"Dime un numero y te diré si es multiplo de 3 y 5!\nNumero: ";
    cin>>num;

    comprobar(esMult3(num),esMult5(num));
}
