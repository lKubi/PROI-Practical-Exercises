#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    Ingreso vectorIngresos[1000];
    int contadorIngresos=0,contadorGastos=0;
    Gasto vectorGastos[1000];

    int opcion;
    do{
        do{
            cout<<"Introduce una opcion:\n1) Nuevo ingreso\n2) Nuevo gasto\n3) Listado ingresos\n4) Listado gastos\n5) Resumen\n6) Salir\n\nOpcion: ";
            cin>>opcion;
        }while(opcion<1||opcion>6);

        if(opcion != 6){
            switch (opcion){
                case 1:
                    cout<<"Introducir concepto del ingreso: ";
                    cin>>vectorIngresos[contadorIngresos].concepto;
                    cout<<"Introducir día del ingreso: ";
                    cin>>vectorIngresos[contadorIngresos].data.dia;
                    cout<<"Introducir mes del ingreso: ";
                    cin>>vectorIngresos[contadorIngresos].data.mes;
                    cout<<"Introducir ano del ingreso: ";
                    cin>>vectorIngresos[contadorIngresos].data.ano;
                    cout<<"Introducir cantidad del ingreso: ";
                    cin>>vectorIngresos[contadorIngresos].cantidad;
                    contadorIngresos++;
                    break;
                case 2:
                    cout<<"Introducir concepto del gasto";
                    cin>>vectorGastos[contadorGastos].concepto;
                    cout<<"Introducir día del gasto: ";
                    cin>>vectorGastos[contadorGastos].data.dia;
                    cout<<"Introducir mes del gasto: ";
                    cin>>vectorGastos[contadorGastos].data.mes;
                    cout<<"Introducir ano del gasto: ";
                    cin>>vectorGastos[contadorGastos].data.ano;
                    cout<<"Introducir cantidad del gasto: ";
                    cin>>vectorGastos[contadorGastos].cantidad;

                    //Falta meter el tipo de gasto!!

                    break;
            }
        }
    }while(opcion != 6);

}

