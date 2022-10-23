//De mayusculas a minuculas usando punteros
#include <stdio.h>
#include <ctype.h>
int main() {
    char cadena[80], *pcadena;
    
    puts("Ingrese una cadena en mayuscula:");
    gets(cadena);

    pcadena = cadena;

    puts("La cadena en minuscula es:");
    while (*pcadena != '\0')
    {
        printf("%c",tolower(*pcadena++));
    }
    
    return 0;
}