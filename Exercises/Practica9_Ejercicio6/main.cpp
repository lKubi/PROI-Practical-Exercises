#include <iostream>
using namespace std;

int sumaDigitos(int n);

int main(){
    cout<<"Introduce numero 1\nNumero: ";
    int num1;
    cin>>num1;
    cout<<"Introduce numero 2\nNumero: ";
    int num2;
    cin>>num2;

    int sumadiv;

    for(int i = 1; i<num1;i++){
        if(num1%i==0){
            sumadiv+=i;
        }
    }

    if(sumaDigitos(sumadiv)==sumaDigitos(num2)){
        cout<<"Los numeros son amigos";
    }else{
        cout<<"Los numeros no son amigos";
    }

}

int sumaDigitos(int n){
    if(n==0){
        return 0;
    }else{
        return (n%10 +  sumaDigitos(n/10));
    }
}
