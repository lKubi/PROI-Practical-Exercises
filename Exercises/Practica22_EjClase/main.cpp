#include <iostream>
#include <string.h>

using namespace std;

int main(){
/*    char cadena1 [30];
    cout << "Cadena1: ";
    cin >> cadena1;
    cout<<"Contenido: " << cadena1 << endl;

    char cadena2 [30];
    cout << "Cadena2: ";
    cin >> cadena2;
    cout<<"Contenido: " << cadena2 << endl;

    char cadena3[30];
    cout << "Cadena3: ";
    cin.getline(cadena3, 30);
    cout << "Contenido: " << cadena3 << endl;
*/

    // strcmp strcpy strlen
    char texto[] = "Bienvenidos a PROI!";

    char busca [] = "a";

    char * resultado = strstr(texto, busca);

    if(resultado == NULL){
        cout << "No encontrado!";
    }else{
        cout << resultado << " " << &resultado << endl;
    }

    strcat(texto, " Viernes 2 de Diciembre de 2022.");

    cout << texto << endl;

    string prueba1 = "Prueba de un string! v1";
    string prueba2("Prueba de un string! v2");
    string prueba3(20, '*');
    cout << prueba1 << " " << prueba1.length() << endl;
    cout << prueba2 << " " << prueba2.length() << endl;
    cout << prueba3 << " " << prueba3.length() << endl;
    cout << prueba1 [0] << endl;
    cout << prueba1.substr(0, 5) << endl;

    if(prueba1 == prueba2){
        cout << "Son iguales" << endl;
    }else{
        cout << "No son iguales"<< endl;
    }

    size_t resultadoFind = prueba1.find("string!");
    if(resultadoFind == string::npos){
        cout << "No se encontro" << endl;
    }else{
        cout << "Encontrado => " << resultadoFind << endl;
        cout << prueba1.substr(resultadoFind) << endl;
    }

    prueba1.append("bla bla bla");
    cout << prueba1 << endl;

    getline(cin, prueba1);
    cout << prueba1 << endl;
    getline(cin, prueba1, ' ');
    cout << prueba1 << endl;
}
