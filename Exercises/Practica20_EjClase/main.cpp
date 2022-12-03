#include <iostream>
using namespace std;

int* redimensionar(int* unArray, int capacidadActual, int capacidadNueva);

struct alumno{
    int dni;
    int anoNacemento;
};

int main(){


    int * p1;

    if((p1 = new int(10)) == NULL){
        cout<<"Error en la signacion de memoria." << endl;
        return 1;
    }

    cout << p1 << endl;

    //Operador de indireccionamiento: *

    cout<<*p1 << endl;

    int numero = 5;

    int * p2;
    p2 = &numero;

    cout << p2 << endl;
    cout << *p2 << endl;

    delete p1;

    //aritmetica de punteros

    int * p3;
    if((p3 = new int(10)) == NULL){
        cout<<"Error en la signacion de memoria." << endl;
        return 1;
    }

    cout << p3 << endl;
    p3 = p3+1;
    cout << p3 << endl;

    // Arrays y punteros
    cout << "\n=============================Arrays=============================" << endl;

    /*int prueba [3] = {1, 2, 3};
    cout << prueba << endl;
    cout << *prueba << endl;
    cout << *(prueba+1) << endl;
    cout << *(prueba+2) << endl;
    cout << "\n";
    for(int i = 0; i<3; i++){
        cout << *(prueba+i) << endl;
    }
    */

    //Arrays Dinámicos

    int * numerosArray;

    int tamano;
    cout << "Introduce el tamano: ";
    cin >> tamano;

    if((numerosArray = new int[tamano]) == NULL){
        cout<<"Error al asignar memoria!" << endl;
        return 1;
    }

    for(int i = 0; i < tamano; i++){
        cout<<"Introduce el elemento " << i+1 << ": ";
        cin>>numerosArray[i];
    }
/*
    numerosArray [tamano] = 100;
    numerosArray [tamano + 1] = 200;

    for(int i = 0; i < tamano+2; i++){
        cout<<"El elemento " << i+1 << ": " << numerosArray[i] << endl;
    }
*/

    int *nuevoArrayNumeros = redimensionar(numerosArray, tamano, 2*tamano);

    cout<<"\nArray redimensionado\n";
    for(int i = 0; i < tamano*2; i++){
        cout<<nuevoArrayNumeros[i] << endl;
    }

    //Structs

    alumno *unAlumno;

    if((unAlumno = new alumno) == NULL){
        cout<<"Error al asignar memoria!" << endl;
        return 1;
    }

    // unAlumno.dni
    unAlumno->dni = 12345;
    unAlumno->anoNacemento = 2022;
    cout<<unAlumno->dni << endl;
}

int* redimensionar(int* unArray, int capacidadActual, int capacidadNueva){

    //1. Reservar memoria para el nuevo array

    int * nuevoArray;

    if((nuevoArray = new int[capacidadNueva]) == NULL){
        cout<<"Error al asignar la memoria!" << endl;
        return NULL;
    }

    //2. Copiar elementos

    for(int i = 0; i < capacidadActual; i++){
        nuevoArray[i] = unArray[i];
    }

    delete unArray;

    return nuevoArray;
}
