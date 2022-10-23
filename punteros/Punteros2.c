//Uso de punteros
#include <stdio.h>
int main() {
    int num;
    int *puntero;

    num = 100;
    puntero = &num;

    printf("La direccion de memoria: %p",puntero);
    printf("\nEl valor es: %d",*puntero);
    return 0;
}