#include <iostream>
using namespace std;
// Tipos de contrato de traballo
enum TipoContrato {INDEFINIDO,TEMPORAL,DISCONTINUO,FORMACION};
const char *nomeContrato [] = {"Indefinido","Temporal","Discontinuo","Formación"};
const int NUM_CONTRATOS = 4;
int main(){

 char dni[10];
 TipoContrato contrato;
 char entrada[2];
 int c;
 // Entrada de datos
 cout << "Introducir dni: ";
 cin.getline(dni,10);
 do {
 cout << "\nIntroducir tipo de contrato:";
 for (int i = 0; i < NUM_CONTRATOS; i++) {
 cout << "\n" << i+1 << " " << nomeContrato[i];
 }
 cout << endl;
 cin.getline(entrada,2);
 c = atoi(entrada)-1;
 } while (c<0 || c>3);
 switch (c) {
 case 0: contrato = INDEFINIDO;
 break;
 case 1: contrato = TEMPORAL;
 break;
 case 2: contrato = DISCONTINUO;
 break;
 case 3: contrato = FORMACION;
 break;
 }
 // Saída de datos
 cout << "DNI: " << dni << endl;
 cout << "Tipo de contrato: " << nomeContrato[contrato];
 return 0;
}
