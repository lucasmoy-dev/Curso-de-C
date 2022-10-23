/*
Controlador de contraseñas
    -Solo se aceptan claves numericas
*/
#include <stdio.h>
#include <ctype.h>
int main() {
    char password;
    printf("Ingrese password: ");
    scanf("%c",&password);

    if (isdigit(password)==1)
    {
        printf("Valido");
    } else {
        printf("No es valido");
    }
    

    return 0;
}