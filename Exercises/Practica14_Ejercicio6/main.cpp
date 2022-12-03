#include <iostream>
#include <stdlib.h>
#include <time.h>
#define TAMANO 10
using namespace std;

void mostrar(int v[]);
int masRepetido(int v[]);

int main(){

    srand(time(NULL));
    int numeros[TAMANO];
    for(int i = 0; i<TAMANO; i++){
        numeros[i] = rand() % 20+1;
    }

    mostrar(numeros);
    cout<<"El mas repetido es: " << masRepetido(numeros);
}

void mostrar(int v[]){
    for(int i = 0; i<TAMANO; i++){
        cout<<v[i] << ' ';
    }
    cout<<endl;
}

int masRepetido(int v[]){
    int v2 [21];
    for(int i = 0; i<21;i++){
        v2[i] = 0;
    }

    for(int i = 0; i<TAMANO; i++){
        v2[v[i]-1]++;
    }

    int mayor = 0;
    int mayorIndice;
    for(int i = 0; i<20;i++){
        if(mayor<v2[i]){
            mayor = v2[i];
            mayorIndice = i;
        }
    }

    return mayorIndice+1;
}
