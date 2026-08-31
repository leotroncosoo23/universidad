#include <stdio.h> 

int main(int argc, char *argv[]) {
    //Se debe generar la logica para devulucion de PUM en numeros con 7
    // Pre-condicion: Se deben ingresar numeros naturales.
    int i, N;

    printf("Comenzo el juego PUM\nIngrese un numero para comenzar: ");
    scanf("%d", &N);

    printf("Los numeros naturales a partir de %d son:\n", N);

    // Logica para las vueltas y devolucion de PUM
    for (i = N; i < (N + 100); i++) {
        
        
        if (i % 7 == 0 && i % 10 == 7) {
            printf("PUM PUM\n");
        }else if (i % 7 == 0 || i % 10 == 7) {    
            printf("PUM\n");
        } 
        else {
            printf("%d\n", i);
        }
    }
    
    // Post-condicion: Se imprimen 100 numeros, reemplazando con PUM segun las reglas.
    return 0;
}