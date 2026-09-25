#include <stdio.h>

void almacenar(int vec[], int n, char nombre){
    printf("\n--- Cargando el vector %c ---\n", nombre);
    for(int i = 0; i < n; i++){
        printf("Ingrese el valor para el casillero %d: ", i);
        scanf("%d", &vec[i]);
    }
}

void suma(int vecA[], int vecB[], int vecD[], int n){
    int acarreo = 0;

    for(int i = n - 1; i >= 0; i--){
        int res = vecA[i] + vecB[i] + acarreo; 
        
        vecD[i + 1] = res % 10;
        acarreo = res / 10;
    }
    vecD[0] = acarreo;
}


void imprimir_originales(int vec[], int n, char nombre){
    printf("V%c =       ", nombre);
    printf("  "); 
    for(int i = 0; i < n; i++){
        printf("%d ", vec[i]);
    }
    printf("\n");
}


void imprimir_resultado(int vec[], int n_res){
    printf("VSUMA =   ");
    for(int i = 0; i < n_res; i++){
        printf("%d ", vec[i]);
    }
    printf("\n");
}

int main (){
    int n;

    printf("Ingrese la dimension de los 2 vectores: ");
    scanf("%d", &n); 

    int vecA[n];
    int vecB[n];
    int vecD[n + 1];

    almacenar(vecA, n, '1');
    almacenar(vecB, n, '2');

    suma(vecA, vecB, vecD, n); 

    printf("\n");
    imprimir_originales(vecA, n, '1');
    imprimir_originales(vecB, n, '2');
    printf("------------------------\n");
    imprimir_resultado(vecD, n + 1);

    return 0;
}