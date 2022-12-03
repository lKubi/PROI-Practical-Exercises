float calcularVelocidad(int posinicial, int posfinal, int horas, int minutos, int segundos){
    int tiempo;
    float distancia_recorrida;
    tiempo = (horas*60*60)+(minutos*60)+segundos;
    distancia_recorrida = posfinal-posinicial;

    return distancia_recorrida/tiempo;
}
