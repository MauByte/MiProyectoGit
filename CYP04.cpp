#include <stdio.h>
#include <math.h>
int main(void)
{
    double comienzo, final, incremento;
    double x;
    double termino, suma;
    int total;
    int i, n;

    scanf_s("%lf %lf %lf", &comienzo, &final, &incremento);

    if (comienzo > final) {
        total = 0;
    }
    else {
        if (comienzo == final) {
            total = 1;
        }
        else {
            if (incremento <= 0) {
                return 1;
            }
            else {
                total = (int)((final - comienzo) / incremento + 0.000000001) + 1;
            }
        }
    }
    i = 0;
    while (i < total) {
        x = comienzo + (i * incremento);
        termino = 1.0;
        suma = 1.0;
        n = 1;
        while (n < total) {
            termino = termino * (x / n);
            suma = suma + termino;
            n++;
        }
        printf("%f %f %f\n", x, suma, exp(x));
        i++;
    }
    return 0;
}
