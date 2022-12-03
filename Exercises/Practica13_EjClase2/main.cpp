#include <iostream>

using namespace std;

int main(){
    int n_alumnos=2, n_notas=3, examenes;

    float notas[n_alumnos][n_notas]={
      {5.2,5.1,5.3},
      {6.1, 4.2, 6.2}
    };
    float suma;

    for(int i = 0; i<n_alumnos; i++){
            examenes = 0;
            suma= 0;
        for(int j = 0; j<n_notas; j++){
            cout<<notas[i][j] << " ";
            suma+=notas[i][j];
            examenes++;
        }
        cout<<endl;
        cout<<"[ media = " << (suma/examenes) << " ]";
        cout<<endl;
    }
}
