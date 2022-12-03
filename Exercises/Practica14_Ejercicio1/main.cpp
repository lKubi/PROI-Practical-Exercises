#include <iostream>

using namespace std;

struct datos{
    int edad;
    string nombre;
    float peso;
};

void introducirDatos(datos arr [], int &contador);
void verDatos(datos arr[], int contador);
void mediaEdad(datos arr[], int contador);

int main(){
    datos personas[100];
    int contador;
    int opcion;
    do{
        do{
            cout<<"1) Anhadir datos\n2) Ver datos\n3) Determinar media de edad y calculo de mayores de edad\n4) Salir\nOpcion: ";
            cin>>opcion;
        }while(opcion<1 || opcion>4);

        if(opcion!=4){
            switch(opcion){
                case 1:
                    cout<<"Introducir datos!" << endl;
                    cout<<"==============================" << endl;
                    introducirDatos(personas, contador);
                    break;

                case 2:
                    cout<<"Ver datos!" << endl;
                    cout<<"==============================" << endl;
                    verDatos(personas, contador);

                case 3:
                    cout<<"Medias!" << endl;
                    mediaEdad(personas, contador);
                    break;
            }
        }
    }while(opcion!=4);
}

void introducirDatos(datos arr [], int &contador){
    cout<<"Introducir edad de la persona " << contador+1 << ": " << endl;;
    cin>>arr[contador].edad;
    cout<<"Introducir nombre de la persona " << contador+1 << ": " << endl;
    cin>>arr[contador].nombre;
    cout<<"Introducir peso de la persona " << contador+1 << ": " << endl;
    cin>>arr[contador].peso;

    contador++;
}

void verDatos(datos arr[], int contador){
    for(int i = 0; i<contador; i++){
        cout<<"Persona " << i+1 << endl;
        cout<<"Nombre: " << arr[i].nombre << endl;
        cout<<"Edad: " << arr[i].edad << endl;
        cout<<"peso: " << arr[i].peso << endl;
        cout<<"==============================" << endl;
    }
}

void mediaEdad(datos arr[], int contador){
    int suma;
    float media;
    int mayores;

    for(int i = 0; i<contador; i++){
        suma+=arr[i].edad;
        if(arr[i].edad>=18){
            mayores++;
        }
    }
    media = suma/contador;
    cout<<"La media de las personas es: " << media << endl;
    cout<<"Peronas mayores de edad: " << mayores << endl;
}
