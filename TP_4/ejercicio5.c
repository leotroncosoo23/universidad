#include <stdio.h>

void almacenar(int a, int b, int vecA[], int vecB[]){

    for(int i = 0; i < a; i++){
        printf("Agregue el elemento del Vector A para la posicion: %d \n",i );
        scanf("%d",&vecA[i]);
    }
    for(int j = 0; j < b; j++){
        printf("Agregue el elemento del Vector B para la posicion: %d \n",j );
        scanf("%d",&vecB[j]);
    }

}


void suma(int a, int b, int max, int min, int vecA[], int vecB[], int vecSuma[]) {
    int i;
    int escalar = 0; 

   
    
    for (i = 0; i < min; i++) {
        vecSuma[i] = vecA[i] + vecB[i];
        escalar = escalar + (vecA[i] * vecB[i]);
    }

    
    for (i = min; i < max; i++) {
        if (a > b) {
            vecSuma[i] = vecA[i]; 
        } else {
            vecSuma[i] = vecB[i]; 
        }
    }

    printf("El producto escalar de ambos vectores es: %d\n", escalar);
}

int main() {
    
    int a,b;
    int max,min;

    printf("Ingrese la magintud del vector A :\n");
    scanf("%d", &a);
    printf("Ingrese la magintud del vector B :\n");
    scanf("%d", &b);

    if( a > b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }

    int vecA[a];
    int vecB[b];
    int vecSuma[max];

    almacenar(a,b,vecA,vecB);
    suma(a,b,max,min,vecA,vecB,vecSuma);

    return 0;
}