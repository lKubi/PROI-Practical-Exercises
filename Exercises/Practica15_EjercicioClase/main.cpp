#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream fichero("nombres.txt");

    if(!fichero){
        cout<<"Fallo al abrir el archivo" << endl;
        return 1;
    }

    char cadena [60];
    while(fichero.getline(cadena, 60)){
        cout<< "leido: " << cadena << endl;
    }

    fichero.close();
}
