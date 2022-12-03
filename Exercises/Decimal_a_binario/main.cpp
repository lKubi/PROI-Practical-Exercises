#include <iostream>
using namespace std;

int dec2bin(int n);

int main(){
    cout<<"Introduce un numero en decimal: ";
    int n;
    cin>>n;
    cout<<"Numero decimal: " << dec2bin(n);

}

int dec2bin(int n){
    if(n==0){
        return 0;
    }else{
        return n%2+10*dec2bin(n/2);
    }
}
