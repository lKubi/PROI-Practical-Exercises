#include <iostream>
#include <fstream>
#define MAXCAD 100
using namespace std;
int main() {
    char cadea [MAXCAD];
    int i,j;
 // Escritura no arquivo
    ofstream fsaida("exemplo.txt"); //fluxo de saída e apertura arquivo
    if (!fsaida) {
        cout << "Erro de apertura de arquivo" << endl;
    return 1;
    }
    else {
        fsaida << "Programacion I" << endl;
        fsaida << 15 << ' ' << hex << 15 << endl;
        fsaida.close();
    }
 // Lectura do arquivo
    ifstream fentrada ("exemplo.txt"); //fluxo de entrada e apertura arquivo
    if (!fentrada) {
        cout << "Erro de apertura de arquivo" << endl;
        return 1;
    }
    else {
        fentrada.getline(cadea, MAXCAD);
        fentrada >> i >> hex >> j;
        cout << "Contido do ficheiro: "<< endl;
        cout << cadea << endl;
        cout << cadea << ' ' << i << ' '<< hex << j << endl;
        fentrada.close();
    }
 return 0;
}
