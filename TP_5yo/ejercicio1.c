#include <stdio.h>

void almacenar(int matriz[][10], int k){

    printf("Rellenando la matriz: \n");

    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 10; j++){
            matriz[i][j] = k;
        }
    }
    
}

void infoVector(int matriz[][10]){

    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

}


int main(){
    int k;
    int matriz[5][10];

    printf("Ingrese el valor que desea agregar en la matriz: \n");
    scanf("%d", &k);


    almacenar(matriz, k);
    infoVector(matriz);

    return 0;
}