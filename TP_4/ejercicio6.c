#include <stdio.h>
#include <math.h>

void almacenar(int n, int vec[]){

    for(int i=0; i<n; i++){
        printf("Ingresa el valor para la posicion %d del vector: \n",i);
        scanf("%d",&vec[i]);
    }

}

float cuenta(int n, float p, int vecX[], int vecY[]){

    float D=0;

    for(int i=0; i < n; i++ ){
        D = D + (2 * p * sqrt(vecX[i] + vecY[i]));
    }

    return D;
}

int main() {
    
    int n;
    float p=3.14;    

    printf("Ingrese la longitud del vector para realizar la ecuacion: \n");
    scanf("%d",&n);

    int vecX[n];
    int vecY[n];
    
    almacenar(n,vecX);
    almacenar(n,vecY);

    float resultado = cuenta(n, p, vecX, vecY);

    printf("\nEl resultado de la ecuacion D es: %f\n");



    return 0;
}