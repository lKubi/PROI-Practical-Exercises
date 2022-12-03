#include <iostream>
#include "functions.h"


using namespace std;

int main(){

    int posinicial, posfinal, horas, minutos, segundos;

    cout<<"Introduce la posicion inicial (en metros): ";
    cin>>posinicial;
    cout<<"Introduce la posicion final (en metros): ";
    cin>>posfinal;
    cout<<"Introduce las horas de tiempo usado: ";
    cin>>horas;
    cout<<"Introduce los minutos de tiempo usado: ";
    cin>>minutos;
    cout<<"Introduce los segundos de tiempo usado: ";
    cin>>segundos;

    cout<<"La velocidad media en m/s fue: " << calcularVelocidad(posinicial,posfinal,horas,minutos,segundos);
}
