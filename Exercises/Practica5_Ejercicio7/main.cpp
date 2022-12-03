#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    float a,b,c;

    cout<<"Introduce el valor de A: ";
    cin>>a;
    cout<<"Introduce el valor de B: ";
    cin>>b;
    cout<<"Introduce el valor de C: ";
    cin>>c;

    cout<<"X vale: " << calcularX(a,b,c);;
}
