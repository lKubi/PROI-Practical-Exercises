#include <iostream>

using namespace std;

int a,b,c;
int maior(int a,int b, int c);

int main()
{
    int a,b,c;
    cout << "Programa para calcular o maior de tres numeros" << endl;
    cout << "Introduce os tres numeros" << endl;
    cin >> a >> b >> c;
    cout << "O maior deles é: " << maior(a,b,c) << endl;
    return 0;
}

int maior(int a,int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}
