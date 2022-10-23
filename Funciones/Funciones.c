/*FUNCION

tipo nombreFuncion(tipo var) {
    ACCION..
}

nombreFuncion(var) --> Llamada a la función
*/
//Realizar una funcion que calcule el area de un triangulo
#include <stdio.h>
int areaTriangulo(int base,int altura);
int main() {
    int b, altura,area ;
    printf("Ingrese base: ");
    scanf("%d",&b);
    printf("Ingrese altura: ");
    scanf("%d",&altura);
    area = areaTriangulo(b,altura);
    printf("El area del triangulo es: %d",area);
    return 0;
}
int areaTriangulo(int base,int altura) {
    int area;
    area = (base * altura) / 2;
    return area;
}