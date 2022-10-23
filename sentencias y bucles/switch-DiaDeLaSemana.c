/*Escriba un programa en el que se pida ingresar numeros
entre 1 y 7. Segun el numero elegido va a representar 
un dia de la semana*/
#include <stdio.h>
int main() {
   int dia;
    printf("Ingrese un numero(El num representa un dia): ");
    scanf("%d",&dia);
    switch (dia)
    {
    case 1:
        printf("hoy es LUNES");
        break;
    case 2:
        printf("Hoy es MARTES");
        break;
    case 3:
        printf("Hoy es MIERCOLES");
        break;
    case 4:
        printf("Hoy es JUEVES");
        break;
    case 5:
        printf("Hoy es VIERNES");
        break;
    case 6:
        printf("Hoy es SABADO");
        break;
    case 7:
        printf("Hoy es DOMINGO");
        break;
    
    default:
        printf("SOLO SON VALIDOS LOS NUMERO DEL 1 AL 7");
        break;
    }
    return 0;
}