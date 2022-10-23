/*Calcule el dinero ingresado de la venta total del dia*/
#include <stdio.h>
int main() {

    float dinero, precioCompra = 0;
	float ventaCliente, ventaTotal = 0;

    printf("Cuanto dinero tienes?");
    scanf("%f",&dinero);

    do {
	    printf("\nIngrese el precio de la compra:");
	    scanf("%f",&precioCompra);

	    if (dinero >= precioCompra) {
	        dinero -= precioCompra;
    		printf("\nTe queda: %.2f", dinero);
	    } else {
	    	printf("No tienes suficiente dinero para hacer esta compra.");
			break;
	    }

    } while (dinero > 0);
    
    return 0;
}