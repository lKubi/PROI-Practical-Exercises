#define PI 3.1416
#include <cmath>

float calcularPerimetro(float radio){
    return (radio*2)*PI;
}

float calcularArea(float radio){
    return PI * pow(radio, 2);
}
