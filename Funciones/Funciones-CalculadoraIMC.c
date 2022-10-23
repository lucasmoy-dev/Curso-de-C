/*
Realice una calculadora de Indice de Masa Corporal(IMC)
Tener en cuenta:

IMC = peso /(altura * altura)

IMC < 18,5 --> Peso por debajo de lo normal 
IMC 18.5 - 25 -->Peso saludable
IMC 25 - 30 --> Sobrepeso
IMC > 30 --> Obesidad
*/
#include <stdio.h>
int main() {
    float altura, peso, imc;
    printf("peso: ");
    scanf("%f",&peso);
    printf("%f",&altura);
    imc = peso /(altura * altura);
    if (imc < 18.5) {
        printf("peso bajo");
    } else if(imc >= 18.5 && imc <25) {
        printf("saludable");
    } else if () {
        
    }
    
}