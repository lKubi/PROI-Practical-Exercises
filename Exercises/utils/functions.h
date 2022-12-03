#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

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

int dateToCdate(Fecha f);
Fecha cdateToDate(int d);

#endif // FUNCTIONS_H_INCLUDED
