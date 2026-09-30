#include <stdio.h>

int main() {
    int fA, cA, fB, cB, i, j, k;
    int A[50][50], B[50][50], C[50][50];

    printf("Filas y columnas de A (ej: 2 3): ");
    scanf("%d %d", &fA, &cA);
    printf("Filas y columnas de B (ej: 3 2): ");
    scanf("%d %d", &fB, &cB);

    if (cA != fB) {
        printf("ERROR: La operacion no puede realizarse. Columnas de A deben ser iguales a Filas de B.\n");
        return 1;
    }

    for(i=0; i<fA; i++) {
        for(j=0; j<cB; j++) {
            C[i][j] = 0;
            for(k=0; k<cA; k++) {
                C[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }
    
    printf("Operacion realizada y validada.\n");
    return 0;
}