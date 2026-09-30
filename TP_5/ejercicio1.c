#include <stdio.h>

int main() {
    int matriz[5][10];
    int K, i, j;

    printf("Ingrese el valor constante K: ");
    scanf("%d", &K);


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = K;
        }
    }

   
    printf("\nMatriz resultante:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}