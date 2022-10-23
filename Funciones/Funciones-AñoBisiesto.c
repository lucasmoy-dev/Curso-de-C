/*
Año Bisiesto
    -Numeros de 4 cifras
    -Son multiplos de 4 pero no multiplo de 100
    -Son multiplos de 400

Valores de prueba:
son bisiestos: 1952 - 1964 - 2004 - 2012 - 2020
*/
#include <stdio.h>
int bisiesto(int anio);
int main() {
    int anio, continuar = 0,resultado;
    do
    {
        printf("Ingrese el anio: ");
        scanf("%d",&anio);
        if (anio >= 1000 && anio <= 9999)
        {
            continuar = 1;
        }
        
    } while (continuar == 0);

    resultado = bisiesto(anio);

    if (resultado == 1)
    {
        printf("El anio %d ES BISIESTO",anio);
    } else {
        printf("El anio %d NO ES BISIESTO",anio);
    }
    

    
    return 0;
}

int bisiesto(int anio) {
   if ((anio%4==0 && anio%100!=0) || anio%400==0)
   {
    return 1;
   } else {
    return 0;
   }  

}
