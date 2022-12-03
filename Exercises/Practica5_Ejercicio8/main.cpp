#include <iostream>
#include "functions.h"

using namespace std;

int main(){
    int grados;

    cout<<"Introduce una temperatura en grados Celcius: ";
    cin>>grados;

    cout<<"Grados Fahrenheit: " << calcularFaren(grados) << endl;
    cout<<"Grados Kelvin: " << calcularKelvin(grados);
}
