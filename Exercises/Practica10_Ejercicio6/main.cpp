#include <iostream>
#include <cstdlib>
#include <time.h>
#define RAND_MAX 5
using namespace std;

int main(){
    cout<<"Introduce un numero de tiradas!\nNumero: ";
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        srand (time(NULL)+i);
        int v1 = rand() % 5 + 1;
        cout<<"Tirada " << i << ": " << v1 << endl;
    }
}
