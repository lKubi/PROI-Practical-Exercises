#include <iostream>

using namespace std;

int calcularPalabras(string f);
string * split(string f);

int main(){

    string frase;

    cout << "Introduce la frase: ";
    getline(cin, frase);

    cout <<"La frase tiene " << calcularPalabras(frase) << " palabras!" << endl;
    string* palabras = split(frase);

    for(int i = 0; i < calcularPalabras(frase); i++){
        cout << "|" << palabras[i] << "|" << endl;
    }
}

int calcularPalabras(string f){
    int contador = 0;
    for(int i = 0; i < f.length(); i++){
        if(f [i] == ' '){
            contador++;
        }
    }

    return contador + 1;
}

string * split(string f){

    string * resultado = new string[calcularPalabras(f)];
    int j = 0;
    // i palabra
    // j caracter
    //for(int i = 0; i < calcularPalabras(f); i++){
    int i = 0;
    do{
        if(f[j] != ' '){
            resultado[i] += f[j];
        }else{
            i++;
        }
        j++;
    }while(f[j] != '\0');
    //}

    return resultado;
}
