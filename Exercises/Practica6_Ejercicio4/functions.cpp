#include <cmath>

float resolverEcuacion1(int a, int b, int c){

    return ((-b+sqrt(pow(b,2)-4*a*c))/2*a);
}

float resolverEcuacion2(int a, int b, int c){

    return ((-b-sqrt(pow(b,2)-4*a*c))/2*a);
}
