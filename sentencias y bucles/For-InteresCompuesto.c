// Ejercicio: Programar una calculadora de interes compuesto
// Ejemplo de uso
// Dinero Actual:	$500.00
// Dinero que se agrega Anualmente:	$1,000.00
// Cantidad de anios a invertir:	 	30
// Interes anual:     10
// Resultado:            $189,668.13
#include <stdio.h>
int main() {
    double dineroActual, adicionAnual, interesAnual = 0;
    int anios = 0;

    printf("Ingrese el dinero actual de su inversion:");
    scanf("%lf",&dineroActual);

    printf("Ingrese el dinero que va a agreagar anualmente:");
    scanf("%lf",&adicionAnual);

    printf("Ingrese la cantidad de anios de inversion:");
    scanf("%i",&anios);

    printf("Ingrese el porcentaje de interes anual:");
    scanf("%lf",&interesAnual);

    double total = dineroActual;

    for (int i = 0; i < anios; i++)
    {
        total += 1000; //total = total + 1000
        total = total + (interesAnual * total / 100);
    }

    printf("en 10 anios tendras: %.2lf",total);

    return 0;
}