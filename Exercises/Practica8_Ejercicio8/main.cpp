#include <iostream>
#include <cmath>
#define PI 3.1416

using namespace std;

float areaCuadrado(float lado);
float areaTriangulo(float base, float altura);
float areaCirculo(float radio);

int main(){
    int opcion;
    do{
        cout<<"Quieres calcular el area de un:\n1) Cuadrado\n2) Triangulo\n3) Circulo\nOpcion: ";
        cin>>opcion;
        if(opcion<1||opcion>3){
            cout<<"Opcion no valida!\n======================\n";
        }

    }while(opcion<1||opcion>3);

    switch (opcion){
        case 1:
            cout<<"Introduce el lado del cuadrado: ";
            float lado;
            cin>>lado;
            cout<<"El area del cuadrado es: " << areaCuadrado(lado);
            break;

        case 2:
            cout<<"Introduce la base del triangulo: ";
            float base;
            cin>>base;
            cout<<"Introduce la altura del triangulo: ";
            float altura;
            cin>>altura;
            cout<<"El area del triangulo es: " << areaTriangulo(base,altura);
            break;

        case 3:
            cout<<"Introduce el radio del circulo: ";
            float radio;
            cin>>radio;
            cout<<"El area del circulo es: " << areaCirculo(radio);
            break;
    }
}

float areaCuadrado(float lado){
    return pow(lado,2);
}
float areaTriangulo(float base, float altura){
    return (base*altura)/2;
}
float areaCirculo(float radio){
    return PI*(pow(radio,2));
}
