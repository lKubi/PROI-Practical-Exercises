#include <iostream>
using namespace std;

void convertirEuros(float euros);

int main(){

    float euros;
    cout<<"Introduce cuantos euros quieres convertir: ";
    cin>>euros;

    convertirEuros(euros);

}

void convertirEuros(float euros){
    float dolares = euros*1.17;
    cout<<euros << " Euros son " << dolares << " dolares!";

}
