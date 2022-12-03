struct Fecha{
    int dia;
    int mes;
    int ano;

};

int dateToCdate(Fecha f){

    return f.ano*10000+f.mes*100+f.dia;
}

Fecha cdateToDate(int d){
    Fecha f;

    f.ano = d/10000;
    f.mes = (f.ano*10000-(d/100))/1000;
}
