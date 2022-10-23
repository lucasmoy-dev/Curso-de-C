/*Cuente numeros pares e impares en una serie de numeros
siempre que estos sean distintos de cero*/
/*#include <stdio.h>
int main(){
    int num,cantPares= 0,cantImpares= 0;
    printf("num");
    scanf("%d",&num);
    while (num != 0)
    {
        printf("num");
        scanf("%d",&num);
        if ((num%2) == 0)
        {
            cantPares++;
        } else {
            cantImpares++;
        }
    }
    
    printf("pares %d",cantPares);
    printf("\nImpares %d",cantImpares);
    return 0;
}*/
/*Cuente numeros pares e impares en una serie de numeros
siempre que estos sean distintos de cero*/
#include <stdio.h>
int main(){
    int num=10,cantPares= 0,cantImpares= 0;
    do
    {
num--;
        printf("num");
        scanf("%d",&num);
        if (num%2 == 0)
        {
            cantPares++;
        } else {
            cantImpares++;
        }
        
    } while (num != 0);
    printf("pares %d",cantPares);
    printf("\nImpares %d",cantImpares);
    return 0;
}