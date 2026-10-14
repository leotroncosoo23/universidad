#include <stdio.h>
#include <string.h>

void original(char paises[][30], char fechas[][30], float grados[]) {
    printf("----- Matriz Original----\n\n");
    for(int i = 0; i < 10; i++) {
        printf("%s  ->  %s  ->  %f  \n", fechas[i], paises[i], grados[i]);
    }
}

void ordenamiento(char paises[][30], char fechas[][30], float grados[]) {
    int i, j;
    float elem;
    char elemPais[30];
    char elemFecha[30];

    for(i = 1; i < 10; i++) {
        elem = grados[i];
        strcpy(elemPais, paises[i]); 
        strcpy(elemFecha, fechas[i]); 
        j = i;

        while (j > 0 && grados[j-1] < elem) {
            grados[j] = grados[j-1];
            strcpy(paises[j], paises[j-1]);
            strcpy(fechas[j], fechas[j-1]);
            j--;
        }
    
        grados[j] = elem; 
        strcpy(paises[j], elemPais); 
        strcpy(fechas[j], elemFecha); 
    }

    printf("\n\n----- Matriz ORDENADA----\n\n");
    for(int i = 0; i < 10; i++) { 
        printf("%s  ->  %s  ->  %f  \n", fechas[i], paises[i], grados[i]);
    }
}

int main () {
    char paises[10][30] = {"Austria", "Baja Austria", "Republica Checa", "Republica Checa", "Dinamarca", "España", "España", "Francia", "Francia", "Italia"};
    char fechas[10][30] = {"28/06/2026","29/06/2026","27/06/2026","28/06/2026","18/06/2026","24/06/2026","21/06/2026","23/06/2026","24/06/2026","27/06/2026"}; // Punto y coma arreglado

    float grados[10] = {40.0, 40.1, 40.8, 41.9, 37.0, 44.0, 41.0, 40.3, 43.8, 39.0};

    original(paises, fechas, grados);
    ordenamiento(paises, fechas, grados);

    return 0;
}