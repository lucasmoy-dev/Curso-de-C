//Tabla de multiplicar
#include <stdio.h>
int main() {
    int tabla, i, resultado;
    printf("Ingrese el numero de la tabla a realizar:");
    scanf("%d",&tabla);
    for (i = 0; i <= 10; i++)
    {
        resultado = tabla * i;
        printf("\n%d * %d = %d",tabla,i,resultado);
    }
    
    return 0;
}