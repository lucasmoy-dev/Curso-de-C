/*
Se tiene un emprendimiento de termos y se sabiendo el stock e 
inversion inicial por cada termo calcular.
Segun las ventas realizadas:
-El stock actual
-Las ganancias totales(Solo se tiene en cuenta ganancias)
*/
#include <stdio.h>
int calcularStock(int cantInicialTermos, int ventasRealizadas);
float calcularGanancias(float precioCompra,float porcentajeGanancias);

int main() {
    int cantInicialTermos, ventasRealizadas;
    float precioCompra, porcentajeGanancias;

/*
que datos le voy a pedir al usuario? 
cantidad inicial de termo 100
(cada termo costo 10000)
precio de cada termo  20000
cuantos termos quedan--> 30


que quiere saber?
cuantos termos vendio --> cantInicial -cantStockFinal
cuanto facturo --> 70 * 20.000 = 1.400.000
cuanto dinero gasto en comprar los termos
cuantas ganancias tuvo -->70 * 10000 = 700.000
% ganancias 
*/

    printf("VENTA DE TERMOS");
    printf("termos: ");
    scanf("%d",&cantInicialTermos);
    
    printf("Precio de cada termo: ");
    scanf("%d",&precioCompra);

    printf("Ventas realizadas: ");
    scanf("%d",&ventasRealizadas);

    printf("\nPorcentaje de ganancias: ");
    scanf("%d",&porcentajeGanancias);

    printf("cantidad inicial de termos: %d",cantInicialTermos);
    printf("\ncantidad actual de termos: %d",calcularStock(cantInicialTermos, ventasRealizadas));
    printf("\nGanancias: %.2f",calcularGanancias(precioCompra,porcentajeGanancias));

    return 0;
}
int calcularStock(int cantInicialTermos, int ventasRealizadas) {
    int total = cantInicialTermos - ventasRealizadas;
    return total;
}
float calcularGanancias(float precioCompra,float porcentajeGanancias) {

}