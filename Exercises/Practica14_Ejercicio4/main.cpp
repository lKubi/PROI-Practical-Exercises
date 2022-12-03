#include <iostream>

using namespace std;


void traspuesta(int m [][4]);
int main(){

    int matriz[4][4];

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){

            cout<<"Introducir el valor de la fila " << i+1 << " y la columna " << j+1 << ": ";
            cin>>matriz[j][i];
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout<<matriz[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;


    traspuesta(matriz);
}

void traspuesta(int m [4][4]){
    int m2 [4][4];
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            m2[i][j] = m[j][i];
        }
    }
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout<<m2[i][j] << " ";
        }
        cout<<endl;
    }


}
