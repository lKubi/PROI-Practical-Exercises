#include <iostream>
using namespace std;

int main(){
    int numNotas;
    do{
        cout<<"Introducir numero de notas: ";
        cin>>numNotas;
    }while(numNotas<=0);
    float notas[numNotas];

    for(int i = 0; i<numNotas; i++){
        cout<<"Introducir la nota " << i+1 << ": ";
        cin>>notas[i];
    }

    //Añadir elemento al final

    notas[numNotas] = 4.3;
    numNotas++;
    cout<<"Notas!" << endl;
    for(int i = 0; i<numNotas; i++){
        cout<<notas[i] << endl;
    }
    //Eliminar posicion
    int posicion;
    cout<<"Que posicion quieres eliminar?: ";
    cin>>posicion;
    posicion--;
    for(int i = posicion; i<numNotas;i++){
        notas[i]=notas[i+1];
    }
    numNotas--;
    cout<<"Notas!" << endl;
    for(int i = 0; i<numNotas; i++){
        cout<<notas[i] << endl;
    }
}
