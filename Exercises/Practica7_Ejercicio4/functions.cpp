int calcularFactorial(int num){
    if(num == 0){
        return 1;
    }else{
        return num*calcularFactorial(num-1);
    }

}
