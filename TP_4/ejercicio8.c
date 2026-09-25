#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void bolillero(int vec[]){
    srand(time(NULL));

    while (vec[8]< 3){
        
        int bolilla = (rand() % 20) + 1;
        vec[bolilla - 1]++;
    }

}

void resultado(int vec[]){
    printf("Resultados:\n");

    for(int i = 0; i < 20; i++){
        printf("la bolilla %d salio %d veces \n", i + 1, vec[i]);
    }
}

int main (){

    int vec[20] = {0};

    bolillero(vec);
    resultado(vec);
    return 0;
}