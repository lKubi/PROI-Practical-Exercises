#include <iostream>

using namespace std;

int main(){

    int cola [100];
    int contador = 0, opcion;

    do{
        cout<<"1) Anadir elemento\n2) Quitar elemento\n3) Salir" << endl;
        do{
            cout<<"Introducir una opcion valida: ";
            cin>>opcion;
        }while(opcion<1||opcion>3);

        if(opcion!=3){
            switch (opcion){
                case 1:
                    if(contador==100){
                        cout<<"Cola llena" << endl;
                    }else{
                        cout<<"Introducir elemento " << contador+1 << ": ";
                        cin>>cola[contador];
                        contador++;
                    }
                    break;
                case 2:
                    if(contador == 0){
                        cout<<"Cola vacia" << endl;
                    }else{
                        for(int i = 0; i<contador-1; i++){
                            cola[i] = cola[i+1];
                        }
                        contador--;
                    }
            }
        cout<<"Cola: " << endl;
        for(int i = 0; i<contador; i++){
            cout<<cola[i] << endl;
        }
        cout<<"===========" << endl;
        }

    }while(opcion!=3);
}
