#include <stdio.h>

int main(){
    int n = 5;
    int camisetas[5] = {4, 2, 8, 1, 9};
    int j, elemento;

    printf("--- DESORDENADO ---\n");
    for(int k = 0; k < n; k++) printf("%d ", camisetas[k]);
    printf("\n");

    // Motor de Insercion
    for(int i = 1; i < n; i++){
        elemento = camisetas[i]; // 1. Levantamos la carta
        j = i - 1;               // 2. Apuntamos al casillero anterior

        // 3. Mientras no choquemos con la pared (0) y el actual sea mayor a nuestra carta
        while(j >= 0 && camisetas[j] > elemento){
            camisetas[j + 1] = camisetas[j]; // Desplazamos el numero pesado a la derecha
            j--;                             // Retrocedemos un paso mas
        }
        
        // 4. Bajamos la carta en el hueco que quedo libre
        camisetas[j + 1] = elemento;
    }

    printf("--- ORDENADO ---\n");
    for(int k = 0; k < n; k++) printf("%d ", camisetas[k]);
    printf("\n");

    return 0;
}