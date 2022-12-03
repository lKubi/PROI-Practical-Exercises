#include <iostream>
using namespace std;

float convertir(float longitud, char conversor);

int main(){

    char opcion;
    do{
        cout<<"m) Convertir de metros a pies\np) Convertir de pies a metros\nOpcion: ";
        cin>>opcion;
        if((toupper(opcion) != 'M') && (toupper(opcion) !='P')){
            cout<<"opcion no valida!" << endl;
        }
    }while((toupper(opcion) != 'M') && (toupper(opcion) !='P'));

    cout<<"Introduce la longitud!\nLongitud: ";
    float longitud;
    cin>>longitud;

    cout<<"La conversion es: " << convertir(longitud, opcion);

}


float convertir(float longitud, char conversor){
    float conversion;

    if(conversor=='m'){
        conversion = longitud*3.281;
        return conversion;

    }else{
        conversion = longitud/3.281;
        return conversion;
    }

}
