#include <iostream>

using namespace std;

int main(){

    float f = 10;

    float * p = &f;
    cout<<"Antes de incrementar\n";
    cout<< &f << endl; //Variable por referencia
    cout<< &p << endl; //Direccion de memoria del puntero
    cout<< p << endl; // Direccion de memoria a la que apunta el puntero
    cout<< *p << endl; // Contenido del puntero

    p++;
    cout<<"\nDespues de incrementar\n\n";
    cout<< &f << endl; //Variable por referencia
    cout<< &p << endl; //Direccion de memoria del puntero
    cout<< p << endl; // Direccion de memoria a la que apunta el puntero
    cout<< *p << endl; // Contenido del puntero

    float r = 15;
    float * q = &r;

    cout<<"\nDespues del nuevo puntero\n\n";
    cout<< &f << endl; //Variable por referencia
    cout<< &p << endl; //Direccion de memoria del puntero
    cout<< p << endl; // Direccion de memoria a la que apunta el puntero
    cout<< *p << endl; // Contenido del puntero
}
