#include <stdio.h>
#include <string.h> // Vital para strcpy

int main(){
    int n = 5;
    int izq = 0;
    int der = n-1;
    
    int aux;
    char auxNombre[20]; // El cajon temporal debe ser un arreglo, no un char simple

    int puntajes[5] = {450, 980, 120, 760, 340};
    char jugadores[5][20] = {"Pedro", "Gonzalo", "Joaquin", "Ramirez", "Lucas"};

    // Motor Bidireccional (Embudo)
    while(izq < der){

        // VIAJE DE IDA: Empuja el puntaje MAYOR hacia la derecha
        for(int i = izq; i < der; i++ ){
            if(puntajes[i] > puntajes[i+1]){
                
                // Pasamanos del numero
                aux = puntajes[i];
                puntajes[i] = puntajes[i+1];
                puntajes[i+1] = aux;

                // Pasamanos de la palabra sincronizada (usando strcpy)
                strcpy(auxNombre, jugadores[i]);
                strcpy(jugadores[i], jugadores[i+1]);
                strcpy(jugadores[i+1], auxNombre);
            }
        }
        der--; // ACHICAMOS EL TECHO: El mayor ya llego al final

        // VIAJE DE VUELTA: Empuja el puntaje MENOR hacia la izquierda
        for(int i = der; i > izq; i--){ // Corregido: i > izq
            if(puntajes[i] < puntajes[i-1]){
                
                // Pasamanos del numero
                aux = puntajes[i];
                puntajes[i] = puntajes[i-1];
                puntajes[i-1] = aux;

                // Pasamanos de la palabra sincronizada
                strcpy(auxNombre, jugadores[i]);
                strcpy(jugadores[i], jugadores[i-1]);
                strcpy(jugadores[i-1], auxNombre);
            }
        }
        izq++; // ACHICAMOS EL PISO: El menor ya llego al principio
    }

    // Comprobacion
    printf("--- PODIO (MENOR A MAYOR) ---\n");
    for(int i = 0; i < n; i++){
        printf("%s: %d puntos\n", jugadores[i], puntajes[i]);
    }

    return 0;
}