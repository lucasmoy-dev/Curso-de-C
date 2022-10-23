//Realizar una funcion que calcule el area de 3 triangulo
#include <stdio.h>
int areaTriangulo(int base,int altura);
int main() {
    int area1,area2,area3 ;
    area1 = areaTriangulo(4,7);
    area2 = areaTriangulo(5,10);
    area3 = areaTriangulo(10,20);

    printf("La primera area es: %d",area1);
    printf("\nLa segunda area es: %d",area2);
    printf("\nLa tercera area es: %d",area3);

    return 0;

}
int areaTriangulo(int base,int altura) {
    int area;
    area = (base * altura) / 2;
    return area;
}