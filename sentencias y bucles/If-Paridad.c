//Realice un programa que determine si un numero es par o impar
#include <stdio.h>
int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    if ((numero%2) == 0) {//Es par si el resto de la / en 2 es cero
        printf("El numero es par");
    } else {
        printf("El numero es impar");
    }
    return 0;
}