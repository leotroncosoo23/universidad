#include <stdio.h>

void almacenar (int n, int vec[]){
    int i;

    for(i = 0; i < n; i++){
        printf("Ingresa el valor que desea agregar en el lugar %d: \n", i);
        scanf("%d", &vec[i]);
    }
}

void creacion(int n, int vec[], int vecPos[], int vecNeg[]){

    int pos = 0;
    int neg = 0;


    for(int i = 0; i < n; i++){

        if( vec[i] > 0){
            vecPos[pos] = vec[i];
            pos++;
        }else if(vec[i] < 0){
            vecNeg[neg] = vec[i];
            neg++;

        }
    }

    printf("\nVector de Positivos:\n");
    for(int j = 0; j < pos; j++){
        printf("%d ", vecPos[j]);
    }

    printf("\nVector de Negativos:\n");
    for(int j = 0; j < neg; j++){
        printf("%d ", vecNeg[j]);
    }
    printf("\n");
}

int main() {
    

    int n;

    printf("Ingresar la cantidad de elementos que desea ingresar: \n");
    scanf("%d",&n);

    int vec[n];
    int vecPos[n];
    int vecNeg[n];

    almacenar(n, vec);
    creacion(n, vec, vecPos, vecNeg);


    return 0;
}