#include <iostream>
using namespace std;

int fib (int n);

int main(){
    int n;
    cout<<"SERIE DE FIBONACCI\nIntroducir un numero mayor que 1: ";
    cin>>n;

    cout<<fib(n);

}

int fib (int n){
    if(n <= 2){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}
