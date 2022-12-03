#include <iostream>

using namespace std;

#define CAPACIDADE 10

void mostrarArray(float notas [], int n);
void pedirNotas(float notas[], int n);
void eliminarPosicion(float notas[], int &n, int m);
void calcularMedia(float notas[], int n);
void anadirElemento(float notas[], int &n, float m);

int main(){
    // 1.1 Definición básica asignando valores
    /*
    float notas1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << notas1[0] << " " << notas1[1] << " " << notas1[2] << endl;
    */

    // 1.2 Definición e asignación de valores en cada posición
    /*
    float notas2[5];
    notas2[0] = 12.1;
    notas2[1] = 12.2;
    notas2[2] = 12.3;
    cout << notas2[0] << " " << notas2[1] << " " << notas2[2] << endl;
    */

    // 1.3 Creación dun array de capacidade fixa pero cun número de elementos dinámico (num_alumnos)
    float notas[CAPACIDADE];
    int num_alumnos = 4; // Tamaño fixo para probar o programa máis rápido
    /*
    cout << "Introduce o número de alumnos: ";
    cin >> num_alumnos;
    */

    pedirNotas(notas,num_alumnos);

    mostrarArray(notas,num_alumnos);

    anadirElemento(notas, num_alumnos, 5);

    mostrarArray(notas, num_alumnos);

    eliminarPosicion(notas, num_alumnos, 2);

    mostrarArray(notas, num_alumnos);

    calcularMedia(notas,num_alumnos);
}

void mostrarArray(float notas [], int n){
    cout << "O array contén estes " << n << " elementos: " << endl;
    for(int i = 0; i < n; i++) {
        cout << "[" << i << "]" << " = " << notas[i] << endl;
    }

}

void pedirNotas(float notas[], int n){

    cout << "Introduce os valores do array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << i << ": ";
        cin >> notas[i];
    }

}

void eliminarPosicion(float notas[], int &n, int m){
    int posicion = m;
    for(int i = posicion; i < n-1; i++) {
        notas[i] = notas[i+1];
    }
    n--;
}

void calcularMedia(float notas[], int n){
    float suma = 0;
    for(int i = 0; i < n; i++) {
        suma = suma + notas[i];
    }

    float media = suma / n;
    cout << "A nota media é: " << media << endl;
}

void anadirElemento(float notas[], int &n, float m){

    notas[n] = m;
    n++;
}
