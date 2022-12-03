#include <iostream>

using namespace std;

int cantidadLetra(char f, char l);

int main(){

    char frase [];
    cout << "Introduce una frase: ";
    getline(cin, frase);

    frase = new char [frase.length()];

    char letra;
    cout <<"Introduce la letra que quieras buscar: ";
    getline(cin, letra);

    cout << "La letra " << "'" << letra << "'" << " aparece " << cantidadLetra(frase, letra);
}

int cantidadLetra(char f, char l){

    int contador = 0;
    int i = 0;
    while(l[i] != '\0'){
        if(f[i] == l[0]){
            contador++;
        }
        i++;
    }
    return contador;

}
