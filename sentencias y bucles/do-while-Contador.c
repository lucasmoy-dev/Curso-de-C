/*Realizar un contador con do while*/
#include <stdio.h>
int main() {
    int contador = 0;
    do {
        contador++;//Incrementa la variable en 1 unidad
    } while (contador < 11);
    printf("Contador = %d",contador);
    
    return 0;
}