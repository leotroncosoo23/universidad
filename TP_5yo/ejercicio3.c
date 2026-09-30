#include <stdio.h>

void almacenar(int c, int matriz[][c],char nombre ){

    printf("Empezemos a almacenar la matriz %d", nombre);

    for(int i = 0; i < c; i++){
        for(int j = 0; j < c; j++){
            printf("Ingrese el valor del casillero %d %d \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void suma(int c,int matrizA[][c], int matrizB[][c], int matrizC[][c]){
    
    printf("\nMatriz C (Resultado de A + B):\n");

    for(int i = 0; i < c; i++){
        for(int j = 0; j < c; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n"); 
    }
}


int main(){

    int c;
    printf("Ingrese las fila y columna de las matriz: \n");
    scanf("%d", &c);


    int matrizA[c][c];
    int matrizB[c][c];
    int matrizC[c][c];

    almacenar(c, matrizA, 'A');
    almacenar(c, matrizB, 'B');

    suma(c, matrizA, matrizB, matrizC);

    return 0;
}