/*
Calculadora con las 4 operaciones basicas

//+
//num1, num2

num1 + num2 = resultado

*/
#include <stdio.h>
float calculadora(int num1, int num2, char operacion);
int main() {
    char operacion;
    int num1, num2;
    printf("Ingrese la operacion a realizar (+ - * /): ");
    scanf("%c",&operacion);

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);

    printf("%d %c %d = %.1f",num1,operacion,num2,calculadora(num1,num2,operacion));

    return 0;
}
float calculadora(int num1, int num2, char operacion) {
    float calculo;
    switch (operacion)
    {
    case '+':
        calculo = num1 + num2;
        break;
    case '-':
        calculo = num1 - num2;
        break;
    case '*':
        calculo = num1 * num2;
        break;
    case '/':
        calculo = num1 / num2;
        break;
    }
    return calculo;
}