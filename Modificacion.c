/*
Modificacion de los datos mostrados
%f -->2.00000000
%.2f -->2.00
%.2f -->2.0
*/
#include <stdio.h>
int main(){
    float num = 7.5824;
    printf("%f",num);
    printf("\n%.2f",num);
    printf("\n%.1f",num);
    return 0;
}