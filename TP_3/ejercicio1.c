#include <stdio.h>
int potencia(int base, int exponente) {

    if (exponente == 0) {
        return 1; 
    } 
    else {
        return base * potencia(base, exponente - 1);
    }
}


int main(int argc, char *argv[]) {
    
    int num, exp, resultado;

    printf("Este programa calculara la potencia de un numero entero.\n");
    
    printf("Ingrese el Numero base: \n");
    scanf("%d", &num);

    printf("Ingrese el Numero del Exponente: \n");
    scanf("%d", &exp);
    
    
    resultado = potencia(num, exp);
    printf("El resultado de %d elevado a la %d es: %d\n", num, exp, resultado);

    return 0;
}