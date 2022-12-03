#include <iostream>
using namespace std;

int main(){
    int ano;

    cout<<"Introduce un año y te digo si es bisiesto!\nAño: ";
    cin>>ano;

    if(ano%4==0){
        cout<<"El año " << ano << " es bisiesto!";
    }else{
        cout<<"El año " << ano << " no es bisiesto!";
    }

}
