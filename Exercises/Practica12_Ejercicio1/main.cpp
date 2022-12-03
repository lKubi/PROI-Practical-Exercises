#include <iostream>

using namespace std;

struct vec{
    int x;
    int y;
};

void mostrarVector(vec v);

int main(){
    vec v1;
    cout<<"Introduce la coordenada 1 del vector 1: ";
    cin>>v1.x;
    cout<<"Introduce la coordenada 2 del vector 1: ";
    cin>>v1.y;
    mostrarVector(v1);

    vec v2;
    cout<<"Introduce la coordenada 1 del vector 2: ";
    cin>>v2.x;
    cout<<"Introduce la coordenada 2 del vector 2: ";
    cin>>v2.y;
    mostrarVector(v2);

}

void mostrarVector(vec v){
    cout<<v.x<< " " << v.y << endl;
}
