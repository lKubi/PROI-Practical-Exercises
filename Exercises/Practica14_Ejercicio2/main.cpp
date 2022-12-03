#include <iostream>

using namespace std;

struct data{
    int codigo;
    string titulo;
    string autor;
    float precio;
    int ejemplares;
};

int main(){
    do{
        do{
            cout<<"1) Dar de alta un libro\n2) Buscar libro\n3) Eliminar libro\n4 ";
        }while(opcion<1 || opcion>5);
    }while(opcion!=5);
}
