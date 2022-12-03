#include <iostream>
#include <cmath>
using namespace std;

void calcularIMC(int peso, float altura);

int main(){
    int peso;
    float altura;
    cout<<"Introduce tu altura (metros): ";
    cin>>altura;
    cout<<"Introduce tu peso (KG): ";
    cin>>peso;

    calcularIMC(peso,altura);
}


void calcularIMC(int peso, float altura){
    float imc = peso/(pow(altura, 2));

    cout<<"Tu IMC es: " << imc;

}
