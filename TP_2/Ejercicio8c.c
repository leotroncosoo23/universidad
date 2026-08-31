#include <stdio.h> 

int main(int argc, char *argv[]) {
   
//Se realizan un programa para ver paridad del numero
//Pre-condicion: Se ingresan numeros entero 
int numero;

// Loogica para evaluar paridad
printf("Ingrese le numero para evaluar Paridad: \n", numero);
scanf("%d",&numero);

if (numero % 2 == 0) {
    printf("Verdadero\n");
} else {
    printf("Falso\n");
}
//Post-condicion: Se devuelve Verdadero si el numero es par o Falso en caso de que no lo sea
    return 0;
}