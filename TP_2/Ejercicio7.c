#include <stdio.h> 

int main(int argc, char *argv[]) {
   
    //Se debe realizar la logica para convertir un numero

    //Pre-condicion: Se debe ingresar un numeroe positivo entero

    int decimal, binario = 0, multiplicador = 1, resto = 0;
    
    printf("Ingrese un numero para evaluarlo:\n");
    scanf("%d", &decimal);

    //Realizo al logica para el conversor 
    while (decimal > 0) {
        resto = decimal % 2;
        binario = binario + (resto * multiplicador);
        decimal = decimal / 2;
        multiplicador = multiplicador * 10;
    }
    
    
    printf("El equivalente en binario es: %d\n", binario);

    //Post-Condicion: Se devuelve el equivalente del numero en binario 
    return 0;
}