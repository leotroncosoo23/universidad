#include <stdio.h>

int main() {
    
    int vecA[8] = {1,2,1,0,0,9,7,1};
    int vecB[6] = {0,0,0,0,0,0};
    int vecC[8] = {1,2,1,1,1,1,1,1};
    
    int i,acc = 0;


    for ( i = 0 ; i < 8 ; i++){
        if(vecA[i] == 0){
            acc++;
        }
    }

    printf("La cantidad de elementos igualados a cero q hay en el vector es de: %d", acc);

    return 0;
}