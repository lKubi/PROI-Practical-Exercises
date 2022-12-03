bool esLetra(char caracter){
    if((caracter>=65 && caracter<=90) || (caracter>=97 && caracter<=122)){
        return true;
    }else{
        return false;
    }
}

bool esMayuscula(char caracter){
    if(caracter>=65 && caracter<=90){
        return true;
    }else return false;
}

bool esVocal(char caracter){
    switch (caracter){
        //Mayusculas
        case 'a': return true;
        break;

        case 'e': return true;
        break;

        case 'i': return true;
        break;

        case 'o': return true;
        break;

        case 'u': return true;
        break;

        //Minusculas

        case 'A': return true;
        break;

        case 'E': return true;
        break;

        case 'I': return true;
        break;

        case 'O': return true;
        break;

        case 'U': return true;
        break;

        default: return false;

    }
}

bool esNumero(char caracter){
    if(caracter>=48 && caracter<=57){
        return true;
    }else{
        return false;
    }
}
