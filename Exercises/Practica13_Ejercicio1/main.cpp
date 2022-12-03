#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(){

    srand(time(NULL));
    int vec [100], pares, impares;

    for(int i = 0; i<100;i++){
        vec[i] = rand();
        if(vec[i]%2==0){
            pares++;
        }else{
            impares++;
        }
    }

    cout<<"Pares: " << pares << "\nImpares: " << impares;
}
