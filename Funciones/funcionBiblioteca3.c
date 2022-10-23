//Funcion SENO
#include <stdio.h>
#include <math.h>
int main() {
    double argumento, seno;
    printf("Ingrese un argumento para el seno:");
    scanf("%lf",&argumento);
    seno = sin(argumento);
    printf("El seno es: %lf",seno);
    return 0;
}