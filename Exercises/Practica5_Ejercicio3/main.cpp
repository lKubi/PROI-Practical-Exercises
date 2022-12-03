#include <iostream>
#include "functions.h"


using namespace std;

int main(){
    float radio;

    cout<< "Introduce el radio de la circunferencia (metros): ";
    cin>> radio;

    cout<<"El perimetro es: " << calcularPerimetro(radio) << endl;
    cout<<"El area es: " << calcularArea(radio);

}
