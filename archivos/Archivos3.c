//Archivos
#include <stdio.h>
int main() {
    FILE *archivo;
    char arreglo[100] = "Esto es un texto dentro del archivo";

    archivo = fopen("documento.txt","r+");//"r+" abre archivo de lectura y escritura. Debe existir

    printf(archivo,arreglo);
    fclose(archivo);
    return 0;
}