#include <iostream>
#include <INPUT.h>
#define MAXCAD 10
using namespace std;

int main(){

    char nombre [MAXCAD];
    lerCadea("Introduce tu nombre! ", nombre);
    cout<<nombre << endl;

    int edad = lerEnteiro("Introduce tu edad: ");
    cout<<"Tu edad es: " <<  edad << endl;
    cout<<"Tu edad +1 es: " << edad+1 << endl;

    float altura = lerReal("Introduce tu altura: ");
    cout<<"Tu altura es: " << altura << endl;
    cout<<"Tu altura +0,5 es: " << altura+0.5;
}
