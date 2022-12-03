#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void escribe_carta(int n);
void escribe_pau(int n);

int main()
{
    int n,pau;
    cout << "Programa para xerar aleatoriamente unha carta da baralla española" << endl;
    srand (time(NULL));
    n=rand()%10;
    pau=rand()%4;

    escribe_carta(n);
    escribe_pau(pau);

    return 0;
}

void escribe_carta(int m){
    switch(m+1){
        case 10:
            cout << "Rei de ";
            break;
        case 9:
            cout << "Cabalo de ";
            break;
        case 8:
            cout << "Sota de ";
            break;
        case 7:
            cout << "Sete de ";
            break;
        case 6:
            cout << "Seis de ";
            break;
        case 5:
            cout << "Cinco de ";
            break;
        case 4:
            cout << "Catro de ";
            break;
        case 3:
            cout << "Tres de ";
            break;
        case 2:
            cout << "Dous de ";
            break;
        case 1:
            cout << "As de ";
    }
}

void escribe_pau(int n){
    switch(n+1){
        case 1:
            cout << "ouros" << endl;
            break;
        case 2:
            cout << "copas" << endl;
            break;
        case 3:
            cout << "espadas" << endl;
            break;
        case 4:
            cout << "bastos" << endl;
    }
}

