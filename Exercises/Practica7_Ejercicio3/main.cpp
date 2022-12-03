#include <iostream>

using namespace std;

int main(){
    int mayor=-999, menor=999, nuevo=0;

    for(;nuevo!=-99;){
        cout<<"Dime un numero nuevo (introducir -99 para salir): ";
        cin>>nuevo;
        if(nuevo!=-99){
            if(nuevo>=mayor){
                mayor=nuevo;
            }if(nuevo<=menor){
                menor = nuevo;
            }

            cout<<"Nuevo: " << nuevo << "\nMayor: " << mayor << "\nMenor: " << menor << endl;
            cout<<"==================" << endl;
        }
    }
}
