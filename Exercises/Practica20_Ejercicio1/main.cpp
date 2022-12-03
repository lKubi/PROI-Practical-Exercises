#include <iostream>

using namespace std;

int main(){

    int unArray [10];
    int contador;

    for(int i = 0; i < 10; i++){
        cout<<"Introduce el valor de la posicion " << i+1 << ": ";
        cin>>*(unArray+i);

        if(*(unArray+i) == 1){
            contador++;
        }
    }
    cout << "El 1 se encuentra " << contador << " veces." << endl;
}
