#include <iostream>
using namespace std;
#define MAXCAD 10ç

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
