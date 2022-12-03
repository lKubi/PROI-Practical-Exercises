#include <iostream>
using namespace std;

int leerValores(string mensaje);
void calcularSuma(int v1, int v2);

int main(){
    int v1,v2;

    do{
        v1=leerValores("Introduce el valor 1 (Entre 0 y 100): ");
        if(v1<0 || v1>100){
            cout<<"Valor incorrecto" << endl;
        }
    }while(v1<0 || v1>100);

    do{
        v2=leerValores("Introduce el valor 2 (Entre 0 y 100): ");
        if(v2<0 || v2>100){
            cout<<"Valor incorrecto" << endl;
        }
    }while(v2<0 || v2>100);

    calcularSuma(v1,v2);
}

int leerValores(string mensaje){
    cout<<mensaje;
    int valor;
    cin>>valor;
    return valor;
}

void calcularSuma(int v1, int v2){

    int mayor, menor, suma;

    if(v1>v2){
        mayor = v1;
        menor = v2;
    }else{
        mayor = v2;
        menor = v1;
    }

    for(int i = menor; i<=mayor; i++){
        suma+=i;
    }

    cout<<suma;
}
