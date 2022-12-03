#include <iostream>

using namespace std;

int main(){

    float vec1[10], vec2[10];

    for(int i = 0; i<10; i++){
        cout<<"Vector 1: elemento " << i+1 << ": ";
        cin>>vec1[i];
    }

    for(int i = 9; i>=0; i--){
        cout<<"Vector 2: elemento " << 10-i << ": ";
        cin>>vec2[i];
    }

    for(int i = 0; i<10; i++){
        cout<<vec1[i]+vec2[i] << " = " << vec1[i] << " + " << vec2[i] << endl;
    }
}
