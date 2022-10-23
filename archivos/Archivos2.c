//Archivos
#include <stdio.h>
#define MAX 1000

int main() {
    FILE *archivo;
    char lineas[MAX];

    archivo = fopen("documento.txt","r");//r: abre un archivo para lectura. El archivo debe existir

    while (fgets(lineas,MAX,archivo))
    {
        printf(lineas);
    }
    fclose(archivo);

    return 0;
}