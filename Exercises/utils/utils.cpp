#include <iostream>
using namespace std;

enum TIPO {SUPER, CASA, OCIO, VARIOS};

struct Fecha{
    int dia;
    int mes;
    int ano;

};

struct Ingreso{
    string concepto;
    Fecha data;
    float cantidad;

};

struct Gasto{
    string concepto;
    Fecha data;
    float cantidad;
    TIPO tipoGasto;

};
int dateToCdate(Fecha f){

    return f.ano*10000+f.mes*100+f.dia;
}

Fecha cdateToDate(int d){
    Fecha f;
    //YYYYMMDD = d
    f.ano = d/10000; //YYYYMMDD => YYYY;
    f.mes = (d-f.ano*10000)/100; //(YYYY0000-(YYYYMM00))/
    f.dia = (d-(f.ano*10000)-(f.mes*100));

    return f;
}

float mediaf (float v [], int contador){

    float media;
    for(int i = 0; i<contador; i++){
        media+=v[i];
    }
    media = media/contador;

    return media;
}
