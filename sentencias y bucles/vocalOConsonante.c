/*Escriba un programa en el que se pida ingresar una letra
y nos diga si es vocal o consonante*/
#include <stdio.h>
int main() {
    char letra;
    printf("Ingrese una letra: ");
    scanf("%c",&letra);
    switch (letra)
    {
    case 'a':
        printf("Es una vocal");
        break;
    case 'e':
        printf("Es una vocal");
        break;
    case 'i':
        printf("Es una vocal");
        break;
    case 'o':
        printf("Es una vocal");
        break;
    case 'u':
        printf("Es una vocal");
        break;
    
    default:
        printf("Es una consonante");
        break;
    }
    return 0;
}
