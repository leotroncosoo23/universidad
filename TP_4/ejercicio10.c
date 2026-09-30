#include <stdio.h>

void almacenar(int n, int vec[]){

    for(int i = 0; i < n; i++){
        printf("Ingrese el valor para el lugar %d del vector: \n", i);
        scanf("%d", &vec[i]);
    }
}
void copia(int n, int vec[] in vecA[]){

    for(int i = 0; i < n; i++){
        vecA[i] = vec[i];
    }
}

void suma(int n, int vec[], int vecA[]){

    
}

int main(){
    
    int n;

    printf("Ingrese la longitud del vector q desea llenar: \n");
    scanf("%d",&n);


    int vec[n];
    int vecA[n] = {0};

    almacenar(n,vec);
    copia(n,vec,vecA);


}