#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char nombreArchivo [20];
    cout<<"Introduce el nombre del archivo: ";
    cin>>nombreArchivo;
    ofstream fichero(nombreArchivo);

    if(!fichero){
        cout<<"El fichero ha fallado!";
        return 1;
    }
    int opcion;
    float altura;
    do{
        cout<<"1) Introducir edad al archivo\n2) Salir\nOpcion: ";
        cin>>opcion;

        if(opcion == 1){
            cout<<"Introduce la altura: ";
            cin>>altura;
            fichero<<altura << endl;;
            cout<<"Altura guardad! " << endl;
        }
    }while(opcion != 2);
}
