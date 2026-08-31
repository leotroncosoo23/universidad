#include <stdio.h> 

int main(int argc, char *argv[]) {
   
//Se realizan un programa para ver divisibilidad de un numero por otro
//Pre-condicion: Se ingresan numeros entero 
int a, b;

printf("Ingrese un nuemero para a: \n");
scanf("%d",&a);

printf("Ingrese un nuemero para b: \n");
scanf("%d",&b);

//Logica para evaluar divisibilidad
if (b == 0) {
    printf("Error: no se puede dividir por cero.\n");
} else if (a % b == 0) {
    printf("El numero %d eS divisible por %d\n", a, b);
} else {
    printf("El numero %d no es divisible por %d\n", a, b);
}

//Post-Condicion: Se devuelve si es divisible o no por otro numero
    return 0;
}