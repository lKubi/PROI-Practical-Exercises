bool operacionValida(char caracter){
    switch (caracter){
        case '+': return true;
        break;

        case '-': return true;
        break;

        case '*': return true;
        break;

        case '/': return true;
        break;

        default: return false;
    }
}

float operacion(char caracter, float a, float b){
    switch (caracter){
        case '+': return a+b;
        break;

        case '-': return a-b;
        break;

        case '*': return a*b;
        break;

        case '/': return a/b;
        break;

    }
}
