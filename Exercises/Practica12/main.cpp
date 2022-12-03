#include <iostream>

using namespace std;

struct TipoFecha{
    int dia;
    int mes;
    int ano;
};

void mostrarDatos(TipoFecha fecha);
TipoFecha leerFecha();
TipoFecha modificarFecha(TipoFecha f);

int main(){

    TipoFecha fecha = leerFecha();
    mostrarDatos(fecha);
    fecha = modificarFecha(fecha);
    mostrarDatos(fecha);
}

void mostrarDatos(TipoFecha fecha){

    cout<<fecha.dia<<"/"<<fecha.mes<<"/"<<fecha.ano << endl;
}

TipoFecha leerFecha(){

    TipoFecha f;
    cout<<"Introducir dia: ";
    cin>>f.dia;
    cout<<"Introducir mes: ";
    cin>>f.mes;
    cout<<"Introducir anho: ";
    cin>>f.ano;
    return f;
}

TipoFecha modificarFecha(TipoFecha f){
    cout<<"Introduce el nuevo dia: ";
    cin>>f.dia;
    cout<<"Introduce el nuevo mes: ";
    cin>>f.mes;
    cout<<"Introduce el nuevo anho: ";
    cin>>f.ano;
    return f;

}

