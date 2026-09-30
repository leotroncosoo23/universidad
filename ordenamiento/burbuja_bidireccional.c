#include <stdbool.h>

void ordCocktail(int numeros[], int n) {
    int izq = 0, der = n - 1;
    bool cambios = true;
    
    while (izq < der && cambios) {
        cambios = false;
        
        // Viaje de ida hacia la derecha
        for (int i = izq; i < der; i++) {
            if (numeros[i] > numeros[i+1]) {
                int aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
                cambios = true;
            }
        }
        der--; // Achicamos el límite derecho
        
        // Viaje de vuelta hacia la izquierda
        for (int i = der; i > izq; i--) {
            if (numeros[i] < numeros[i-1]) {
                int aux = numeros[i];
                numeros[i] = numeros[i-1];
                numeros[i-1] = aux;
                cambios = true;
            }
        }
        izq++; // Achicamos el límite izquierdo
    }
}