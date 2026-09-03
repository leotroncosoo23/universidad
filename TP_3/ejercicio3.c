#include <stdio.h>


int calculo(int n) {
    if (n == 1) {
        return 1;
    } 
    else {
        return n + calculo(n - 1);
    }
}

int iteracion(int n) {
    int acumulador = 0;


    for (int i = 1; i <= n; i++) {
        acumulador = acumulador + i;
    }


    return acumulador;
}

int main(int argc, char *argv[]) {
    
    int n;

    printf("Ingrese un numero para la piramide \n");
    scanf("%d",&n);

    printf("numero triangular iterativa: %d \n",iteracion(n));
    printf("numero triangular recursiva: %d \n",calculo(n));

    return 0;
}