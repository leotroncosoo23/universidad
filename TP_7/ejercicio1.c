#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    float real;
    float imag;
} Complejo;

//Suma: (a+c) + (b+d)i
void sumar(Complejo n1, complejo n2, complejo *res){
    res -> real = n1.real + n2.real;
    res -> imag = n1.imag + n2.imag;
}
//Resta: (a-c) + (b-d)i
void resta(Complejo n1, complejo n2, complejo *res){
    res -> real = n1.real - n2.real;
    res -> imag = n1.imag - n2.imag;
}

//Producto: (a*c - b*d) + (a*d + b*c)
void producto(Complejo n1, complejo n2, complejo *res){
    res -> real = (n1.real * n2.real) - (n1.imag * n2.imag);
    res -> imag = (n1.real * n2.imag) + (n1.imag * n2.real);
}

//Cociente: ((a*c + b*d) / denom) + ((b*c - a*d) / denom)i
void dividir(Complejo n1, complejo n2, complejo *res){
    float denom = (n2.real * n2.real) + (n1.imag * n2.imag);

    if (denom == 0){
        printf("Error division por cero \n");
        res->real = 0;
        res->imag = 0;
        return;
    }
    res->real = ((n1.real * n2.real) + (n1.imag * n2.imag)) / denom;
    res->imag = ((n1.imag * n2.real) - (n1.real * n2.imag)) / denom;
}

int main() {
    Complejo n1, n2, resultado;
    char op;

    printf("--- Operaciones con Numeros Complejos ---\n");

    printf("Ingrese parte real e imaginaria del primer numero (ej: 3 4): ");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("Ingrese parte real e imaginaria del segundo numero (ej: 1 -2): ");
    scanf("%f %f", &n2.real, &n2.imag);

    printf("Ingrese la operacion (+, -, *, /): ");
    scanf(" %c", &op); // Espacio antes de %c para limpiar el buffer del teclado

    switch (op) {
        case '+':
            sumar(n1, n2, &resultado);
            break;
        case '-':
            restar(n1, n2, &resultado);
            break;
        case '*':
            multiplicar(n1, n2, &resultado);
            break;
        case '/':
            dividir(n1, n2, &resultado);
            break;
        default:
            printf("Operador no valido.\n");
            return 1;
    }

    // Formatear salida con el signo adecuado para la parte imaginaria
    if (resultado.imag >= 0) {
        printf("Resultado: %.2f + %.2fi\n", resultado.real, resultado.imag);
    } else {
        printf("Resultado: %.2f - %.2fi\n", resultado.real, -resultado.imag);
    }

    return 0;
}