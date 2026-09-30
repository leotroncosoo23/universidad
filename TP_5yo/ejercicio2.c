#include <stdio.h>

void almacenar(int matriz[][7]){

    int impar = 1;
    for(int j = 0; j < 7; j++){

        for(int i=0; i < 4; i++){

            matriz[i][j] = impar;
            impar += 2;
        }
    }
}

void imprimir(int matriz[][7]){

    printf("matriz de impares: \n");

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 7; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}


int main(){

    int matriz[4][7];

    almacenar(matriz);
    imprimir(matriz);

    return 0;
}