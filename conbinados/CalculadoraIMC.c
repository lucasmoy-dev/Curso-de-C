/*
Realice una calculadora de Indice de Masa Corporal(IMC)
Tener en cuenta:

IMC = peso /(altura * altura)

IMC < 18,5 --> Peso por debajo de lo normal 
IMC 18.5 - 25 -->Peso saludable
IMC 25 - 30 --> Sobrepeso
IMC >= 30 --> Obesidad
*/
#include <stdio.h>
int main() {
    float peso, altura, imc;
    printf("Ingrese su peso(KG): ");
    scanf("%f",&peso);

    printf("Ingrese su altura(m): ");
    scanf("%f",&altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("El peso esta por debajo de lo normal");
    } else if ((imc >= 18.5) && (imc < 25)) {//18.5<= imc <25
        printf("Tiene un peso saludable");
    } else if ((imc >= 25) && (imc < 30)) {
        printf("Tiene sobrepeso");
    } else if (imc >= 30) {
        printf("Tiene Obesidad");
    }
    printf("\nSu IMC es: %.2f",imc);
    

    return 0;
}