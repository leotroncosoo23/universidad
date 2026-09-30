#include <stdio.h>
#include <string.h> // Vital para strcmp y strcpy
#include <stdbool.h>

// Burbuja Bidireccional adaptada para Strings
void OrdCocktailStrings(char vec[][20], int n) {
    int izq = 0;
    int der = n - 2;
    int i;
    bool cambios = true;
    char aux[20]; // Auxiliar para intercambiar palabras

    while (izq <= der && cambios) {
        cambios = false;

        // IDA: Empujamos los nombres mayores (Z) hacia el fondo
        for (i = izq; i <= der; i++) {
            // strcmp devuelve > 0 si la primera palabra es alfabeticamente mayor
            if (strcmp(vec[i], vec[i+1]) > 0) {
                // Intercambio de strings usando strcpy
                strcpy(aux, vec[i]);
                strcpy(vec[i], vec[i+1]);
                strcpy(vec[i+1], aux);
                cambios = true;
            }
        }
        der--; // Achicamos el limite derecho porque la 'Z' ya llego al final

        // VUELTA: Empujamos los nombres menores (A) hacia el principio
        for (i = der; i >= izq; i--) {
            if (strcmp(vec[i], vec[i+1]) > 0) {
                strcpy(aux, vec[i]);
                strcpy(vec[i], vec[i+1]);
                strcpy(vec[i+1], aux);
                cambios = true;
            }
        }
        izq++; // Achicamos el limite izquierdo porque la 'A' ya llego al principio
    }
}

int main() {
    // Matriz de 5 nombres, maximo 19 letras + '\0'
    char alumnos[5][20] = {"Zoe", "Carlos", "Ana", "Beto", "Marcos"};
    int n = 5;

    printf("--- LISTADO ORIGINAL DESORDENADO ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", alumnos[i]);
    }

    // Ordenamos
    OrdCocktailStrings(alumnos, n);

    printf("\n--- LISTADO ORDENADO (Burbuja Bidireccional) ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", alumnos[i]);
    }

    return 0;
}