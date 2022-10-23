#include <stdio.h>
int main() {
    int numero[5] = {1,2,3,4,5};
    int *p_numero;
    p_numero = numero;

    for (int i = 0; i < 5; i++)
    {
        printf("%d",p_numero[i]);
    }

    return 0;
}