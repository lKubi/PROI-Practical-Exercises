#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    int a,b,c;

    cout<<"Siguiendo la expresion Ax^2+Bx+c=0. Introduce A, B y C.\nA: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"C: ";
    cin>>c;

    cout<<"Solucion 1: " << resolverEcuacion1(a,b,c) << endl;
    cout<<"Solucion 2: " << resolverEcuacion2(a,b,c);
}


