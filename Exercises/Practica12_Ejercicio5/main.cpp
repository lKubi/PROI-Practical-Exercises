#include <iostream>

using namespace std;

struct numeroComplejo{
    float r; //Parte real
    float i; //Parte imaginaria
};
numeroComplejo suma(numeroComplejo n1, numeroComplejo n2);
numeroComplejo resta(numeroComplejo n1, numeroComplejo n2);
numeroComplejo mult(numeroComplejo n1, numeroComplejo n2);
numeroComplejo divi(numeroComplejo n1, numeroComplejo n2);
void mostrarNumero (numeroComplejo n);

int main(){
    numeroComplejo n1,n2;
    cout<<"Dime la la parte real de numero 1: ";
    cin>>n1.r;

    cout<<"Dime la la parte imaginaria de numero 1: ";
    cin>>n1.i;

    cout<<"Dime la la parte real de numero 2: ";
    cin>>n2.r;

    cout<<"Dime la la parte imaginaria de numero 2: ";
    cin>>n2.i;
    numeroComplejo sum = suma(n1,n2);
    mostrarNumero(sum);
    numeroComplejo rest = resta(n1,n2);
    mostrarNumero(rest);
    numeroComplejo multipli = mult(n1,n1);
    mostrarNumero(multipli);
    numeroComplejo division = divi(n1,n1);
    mostrarNumero(division);

}

numeroComplejo suma(numeroComplejo n1, numeroComplejo n2){
    numeroComplejo n;
    n.r = n1.r+n2.r;
    n.i = n1.i+n2.i;
    return n;
}
numeroComplejo resta(numeroComplejo n1, numeroComplejo n2){
    numeroComplejo n;
    n.r = n1.r-n2.r;
    n.i = n1.i-n2.i;
    return n;
}
numeroComplejo mult(numeroComplejo n1, numeroComplejo n2){
    numeroComplejo n;
    float a=n1.r;
    float b=n1.i;
    float c=n2.r;
    float d=n2.i;
    n.r = a * c - b * d;
    n.i = a * d + b * c;
    return n;
}
numeroComplejo divi(numeroComplejo n1, numeroComplejo n2){
    numeroComplejo n;
    float a=n1.r;
    float b=n1.i;
    float c=n2.r;
    float d=n2.i;
    n.r = (a * c + b * d) / ((c*c) + (d*d));
    n.i = (b * c - a * d) / ((c*c) + (d*d));
    return n;
}
void mostrarNumero (numeroComplejo n){
    cout<<"Parte real: " << n.r << ", parte imaginaria: " << n.i << endl;
}
