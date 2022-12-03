#include <iostream>
using namespace std;

char calcularSigno(int num);

int main(){
    int num;
    cout<<"Introduce un numero: ";
    cin>>num;
    if(calcularSigno(num)== 'P'){
        cout<<"El numero es positivo! " << calcularSigno(num);
    }else{
        cout<<"El numero es negativo! " << calcularSigno(num);
    }
}

char calcularSigno(int num){

    if(num<0){
        return 'N';
    }else{
        return 'P';
    }
}
