#include <iostream>

using namespace std;

int main(){

    int a,b, temporal;

    cout<<"Introduce el valor de A: ";
    cin>>a;
    cout<<"Introduce el valor de B: ";
    cin>>b;

    temporal=a;
    a=b;
    b=temporal;
    cout<<"Valores cambiados!" << endl;
    cout<<"A: " << a << "\nB: " << b;
}
