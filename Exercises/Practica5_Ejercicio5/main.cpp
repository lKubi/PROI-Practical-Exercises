#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    int coordX, pendiente, interseccion;

    cout<<"Introduce la coordenada X (enteros): ";
    cin>>coordX;
    cout<<"Introduce la pendiente (enteros): ";
    cin>>pendiente;
    cout<<"Introduce la intersección con el eje X (enteros): ";
    cin>>interseccion;

    cout<<"La coordenada Y es: " <<calcularCoordenadaY(coordX, pendiente, interseccion);

}
