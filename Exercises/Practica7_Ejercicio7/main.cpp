#include <iostream>
using namespace std;

int main(){
    int ano;

    cout<<"Introduce un a�o y te digo si es bisiesto!\nA�o: ";
    cin>>ano;

    if(ano%4==0){
        cout<<"El a�o " << ano << " es bisiesto!";
    }else{
        cout<<"El a�o " << ano << " no es bisiesto!";
    }

}
