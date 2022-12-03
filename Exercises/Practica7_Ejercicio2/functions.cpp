bool esPrimo(int num){
    int multiplos;

    for(int i = 1;i<=num;i++){
        if(num%i==0){
            multiplos++;
        }
    }
    if(multiplos>2){
        return false;
    }else{
        return true;
    }
}
