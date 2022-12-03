#include <iostream>

using namespace std;

void pedirDatos(int *v, int tamano);
float calcularMedia(int *v, int tamano);

int main(){

    int * unVector;
    int tamano;
    cout<<"Introduce el tamano del vector: ";
    cin>>tamano;

    if((unVector = new int[tamano]) == NULL){
        cout<<"Error al asignar memoria";
        return 1;
    }

    pedirDatos(unVector, tamano);

    cout<<"La media del vector es: " << calcularMedia(unVector, tamano) << endl;
}

void pedirDatos(int *v, int tamano){
    for(int i = 0; i < tamano; i++){
        cout<<"Introduce el valor de la posicion " << i+1 << ": ";
        cin>> *(v+i);
    }
}

float calcularMedia(int *v, int tamano){
    float media = 0;
    for(int i = 0; i < tamano; i++){
        media+=*(v+i);
    }
    return media/tamano;
}
