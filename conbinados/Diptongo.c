/*
Diptongo
Dada una frase terminada en punto, cuente la cantidad de palabras que contienen diptongos.
Aclaración: Un diptongo se forma cuando se unen dos vocales contiguas en una misma
sílaba. Para el análisis de la vocal use una función

ALGORITMO diptongo
ENTRADA: cc: cadena de caracteres
SALIDA: cantDiptongo:entero+
V.A:

A1.Inicializar cantDiptongo<--0
A2.LEER(cc)
A3.Procesar cadena
A4.ESCRIBIR(cantDiptongo)
A5.PARAR

A3.Procesar cadena
    MIENTRAS(cc <> '.')
        
            SI(esDiptongo(cc) == 1) ENTONCES
                cantDiptongo<--cantDiptongo + 1
            fin SI
    fin MIENTRAS
FUNCION esVocal(cc):cadena de caracteres-->entero
    SEGUN(cc)
        'a':
        'e':
        'i':
        'o':
        'u': RETORNA 1
    fin SEGUN
fin FUNCION

FUNCION esDiptongo(cc):cadena de caracteres-->entero
    SI(esVocal(cc) == 1)ENTONCES
        LEER(cc)
        SI(esVocal(cc) == 1) ENTONCES
            RETORNA 1;  
        fin SI
    fin SI
*/
#include <stdio.h>
int esVocal(char cc);
int esDiptongo(char cc);
int main() {
    char cc;
    int cantDiptongo=0;
    printf("Ingrese cadena: ");
    scanf("%c",&cc);

    while (cc != '.') {
        
        if (esDiptongo(cc) == 1) {
            cantDiptongo++;
        }
        scanf("%c",&cc);
    }

    printf("Cantidad diptongos: %d",cantDiptongo);
    return 0;
}
//Funcion vocal
int esVocal(char cc) {
    switch (cc) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 1;
        break;
    
    default:
        return 0;
        break;
    }
}
//Funcion diptongo
int esDiptongo(char cc) {
    if (esVocal(cc) == 1) {
        scanf("%c",&cc);
        if (esVocal(cc) == 1) {
            return 1;
        } else {
            return 0;
        }
    }
}