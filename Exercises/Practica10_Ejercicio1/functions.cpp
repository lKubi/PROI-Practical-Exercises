int factorial (int n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }

}

int combinacions (int m, int n){
    int mayor, menor;
    if(m>=n){
        mayor = m;
        menor = n;
    }else{
        mayor = n;
        menor = m;
    }

    return (factorial(mayor)/((factorial(menor)*(factorial(m-n)))));
}

int variacions (int m, int n){

    int mayor, menor;
    if(m>=n){
        mayor = m;
        menor = n;
    }else{
        mayor = n;
        menor = m;
    }

    return (factorial(mayor))/(factorial(mayor-menor));
}

int permutacions (int n){
    return factorial(n);
}

