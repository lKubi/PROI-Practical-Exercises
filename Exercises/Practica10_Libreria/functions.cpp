float absoluto(float x) {
    if (x < 0) {
        return x * -1;
    } else {
        return x;
    }
}

float potencia(float x, int n) {
    float y = x;
    for (int i=1; i < n; i++) {
        y*=x;
    }
    return y;
}
