/*
Calculo el descuento

1.Monto de compra
2.Cantidad del descuento a aplicar
*/
#include <stdio.h>
float calcularDescuento(float compra, int descuento);
int main(){
    float compra, total;
    int descuento;
    printf("Ingrese el valor de su compra: ");
    scanf("%f",&compra);

    printf("Ingrese el valor de descuento: ");
    scanf("%d",&descuento);

    total = calcularDescuento(compra, descuento);

    printf("El total aplicando descuento es de: %.2f",total);

    return 0;
}
float calcularDescuento(float compra, int descuento) {
    /*
    compra --- 100%
    X?? ------descuento
    */
    float total;
    total = compra - (compra * descuento) / 100;
    return total;
}