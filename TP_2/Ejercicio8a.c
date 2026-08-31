#include <stdio.h> 

int main(int argc, char *argv[]) {
   
//Se realizan un programa para ver valor absoluto de un numero
//Pre-condicion: Se ingresan numeros entero 
int numero;

printf("Ingrese le numero para evaluar Valor Absoluto:\n", numero);
scanf("%d",&numero);

//Logica para evaluar el valor absoluto
if (numero < 0) {
    numero = numero * -1;
}
printf("El valor absoluto es: %d\n", numero);

//Post-condicion: Se devuelve el valor abosluto de un numero.
    return 0;
}