#include <iostream>

using namespace std;

int suma_directa(int a1, int d, int n);
int suma_formula(int a1, int d, int n);
int termino_n(int a1, int d, int n);

int main()
{
    int a1,d,n;
    cout << "Demostración da fórmula dunha serie aritmética" << endl;
    cout << "Primeiro termo da serie" << endl;
    cin >> a1;
    cout << "Valor da diferencia" << endl;
    cin >> d;
    cout << "Numero de termos a sumar" << endl;
    cin >> n;
    cout << "Suma directa: " << suma_directa(a1,d,n) << endl;
    cout << "Suma formula: " << suma_formula(a1,d,n) << endl;

    return 0;
}

int suma_directa(int a1, int d, int n){
    int s,tn;
    tn=a1;
    for(int i=1;i<=n;i++){
        s+=tn;
        tn+=d;
    }
    return s;
}

int suma_formula(int a1, int d, int n){
    return (n*(a1+termino_n(a1,d,n)))        /2;
}

int termino_n(int a1, int d,int n){
    int tn=a1;
    for(int i=1;i<n;i++){
        tn+=d;
    }
    return tn;
}
