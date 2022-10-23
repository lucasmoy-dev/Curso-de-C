/*sume una serie de numeros siempre y cuando estos sean menor a 100*/
#include <stdio.h>
int main() {
    int numero;
    int suma = 0;
    do
    {
        printf("ingrese un numero para la suma: ");
        scanf("%d",&numero);
        suma += numero;//suma = suma + numero

    } while (numero < 100);
    printf("EL total de la suma es: %d",suma);
    
    return 0;
}
/*Tener en cuenta el ejercicio de while y comparar
tambien tener en cuenta otras formas de hacerlo*/