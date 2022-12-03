#include <iostream>
using namespace std;


bool esMult3(int num){

    if(num%3==0){
        return true;
    }else{
        return false;
    }
}


bool esMult5(int num){

    if(num%5==0){
        return true;
    }else{
        return false;
    }
}

void comprobar(bool mult3, bool mult5){

    if((mult3 == true) && (mult5 == true)){
        cout<<"El numero es multiplo de 3 y 5 a la vez!" << endl;
    }else if ((mult3 == true) && (mult5 == false)){
        cout<<"El numero es multiplo de 3 pero no de 5!" << endl;
    }else if ((mult3 == false) && (mult5 == true)){
        cout<<"El numero es multiplo de 5 pero no de 3!" << endl;
    }else{
        cout<<"El numero no es multiplo ni de 3 ni de 5!";
    }

}
