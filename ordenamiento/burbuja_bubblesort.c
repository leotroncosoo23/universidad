#include <stdbool.h>

void OrdBurbujaM(float vec[], int n) {
    int i = 0, j;
    float aux;
    bool cambio = true; // Asumimos que hay desorden al arrancar

    // El ciclo gira mientras no lleguemos al final Y haya habido intercambios
    while (i <= n - 1 && cambio) {
        cambio = false; // Apagamos la bandera para esta vuelta
        
        // j recorre hasta n-i-1 porque los ultimos elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j+1]) { // Si el izquierdo es mayor, intercambian
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
                cambio = true; // Hubo un movimiento, prendemos la bandera
            }
        }
        i++;
    }
}

//segunda opcion
void ordBurbuja(int numeros[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(numeros[j] > numeros[j+1]) { 
                int aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
}