#include <stdio.h>

int main() {
    int matriz[4][7];
    int i, j, impar = 1;

    
    for (j = 0; j < 7; j++) {
        for (i = 0; i < 4; i++) {
            matriz[i][j] = impar;
            impar += 2; 
        }
    }

    printf("Matriz de impares (impresa por filas):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 7; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}