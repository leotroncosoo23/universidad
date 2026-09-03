#include <stdio.h>

int s(int n){
    return n*(n+1)/2;
}

int iteracion(int n) {
    int acumulador = 0;

    for (int i = 1; i <= n; i++) {
        acumulador = acumulador + i;
    }
    return acumulador;
}

int main(int argc, char *argv[]) {

    int n ;

    printf("Ingrese un valor \n");
    scanf("%d",&n);


   printf("El resultado iteracion: %d \n", iteracion(n));
   printf("El resultado es: %d", s(n));


    return 0;

    //Caso base: inicia cuando n=0
}
