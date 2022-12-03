#include <iostream>
#define MAXCAD 10
using namespace std;

float lerReal(char mensaxe []);
int lerEnteiro(char mensaxe []);
void lerCadea(char mensaxe[ ], char cad []);

int main(){
/*    char nombre [MAXCAD];
    lerCadea("Introduce tu nombre: ", nombre);
    char edad [MAXCAD];
    cout<<"Introduce tu edad: ";
    cin>>edad;
    char altura [MAXCAD];
    cout<<"Introduce tu altura: ";
    cin>>altura;

    cout<<"Nombre: " << nombre << "\nEdad: " << lerEnteiro(edad) << "\nAltura: " << lerReal(altura);
*/

    char nombre [MAXCAD];
    lerCadea("Introduce tu nombre! ", nombre);
    cout<<nombre << endl;

    int edad = lerEnteiro("Introduce tu edad: ");
    cout<<"Tu edad es: " <<  edad << endl;
    cout<<"Tu edad +1 es: " << edad+1 << endl;

    float altura = lerReal("Introduce tu altura: ");
    cout<<"Tu altura es: " << altura << endl;
    cout<<"Tu altura +0,5 es: " << altura+0.5;
}


void lerCadea(char mensaxe[ ], char cad []) {
    cout << mensaxe;
    cin.getline(cad, MAXCAD);
}

int lerEnteiro(char mensaxe []) {
    char cad [MAXCAD];
    lerCadea( mensaxe, cad );
    return atoi( cad );
}

float lerReal(char mensaxe []) {
    char cad [MAXCAD];
    lerCadea(mensaxe, cad);
    return atof(cad);
}
