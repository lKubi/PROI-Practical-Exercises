#include <iostream>

using namespace std;
float nota_media();

int main()
{
    cout << "Nota media dos alumnos da clase" << nota_media() << endl;
    return 0;
}

float nota_media(){
    float nota,media=0,cont=0;
    cout << "Introduce as notas dos alumnos, para parar introduce un número negativo" << endl;
    do{
        cout << "Introduce nota" << endl;
        cin >> nota;
        media+=nota;
        cont++;
    }while(nota>=0);
    media -= nota;
    return media/(cont-1);
}
