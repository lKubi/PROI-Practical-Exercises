#include <iostream>

using namespace std;

int main(){

    int matriz1[3][3], matriz2[3][3], matriz_suma[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<"Introducir " << i+1 << " fila y " << j+1 << " columna de matriz1: ";
            cin>>matriz1[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<"Introducir " << i+1 << " fila y " << j+1 << " columna de matriz2: ";
            cin>>matriz2[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            matriz_suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<matriz_suma[i][j] << " ";
        }
        cout<<endl;
    }
}
