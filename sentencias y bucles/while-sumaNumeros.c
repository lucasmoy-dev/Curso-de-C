/*sume una serie de numeros siempre y cuando estos sean menor a 100*/
#include <stdio.h>
int main() {
    int numero;//No inicializo con ningun valor para que el valor lo pido en printf
    int suma = 0;//Inicializo en cero para que no afecte el resultado final
    printf("Ingrese un numero para la suma: ");
    scanf("%d",&numero);
    while (numero < 100) {
        suma += numero;//suma = suma + numero
        //Con la instruccion de abajo vuelvo a leer el siguiente numero
        printf("Ingrese numeros para la suma: ");
        scanf("%d",&numero);
    }
    printf("La suma de numeros es: %d",suma);//Muestro resultado final
    return 0;
}