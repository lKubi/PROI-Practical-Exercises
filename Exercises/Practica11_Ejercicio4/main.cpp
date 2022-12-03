#include <iostream>

using namespace std;
int nota_media();

int main()
{
    char resp;
    cout << "Programa para calcular a nota media dos alumnos dunha clase" << endl;
    do{
        cout << "Nota media dos alumnos da clase" << nota_media() << endl;
        cout << "queres introducir mais notas (s) ou non (n)\n" << endl;
        cin >> resp;
    }while(resp=='s' || resp == 'S');
    return 0;
}

int nota_media(){
    int nota,media=0,cont=0;
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
