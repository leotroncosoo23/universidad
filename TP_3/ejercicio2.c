#include <stdio.h>

int valor_absoluto(int numero) {
    if (numero < 0) {
        return numero * -1; 
    }
    return numero;
}

int es_divisible(int a, int b) {
    if (b == 0) return 0; 
    
    if (a % b == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int es_par(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main(int argc, char *argv[]) {
    int opcion, n, a, b;

    do {
        printf("\n--- MENU DE OPERACIONES ---\n");
        printf("1) Calcular valor absoluto\n");
        printf("2) Verificar divisibilidad\n");
        printf("3) Verificar si es numero par\n");
        printf("0) Salir del programa\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese un numero entero: ");
                scanf("%d", &n);
                printf("El valor absoluto es: %d\n", valor_absoluto(n));
                break;
            case 2:
                printf("Ingrese el numero A: ");
                scanf("%d", &a);
                printf("Ingrese el numero B (divisor): ");
                scanf("%d", &b);
                
                if (b == 0) {
                    printf("Error: No se puede dividir por cero.\n");
                } else if (es_divisible(a, b) == 1) {
                    printf("Verdadero. %d ES divisible por %d\n", a, b);
                } else {
                    printf("Falso. %d NO es divisible por %d\n", a, b);
                }
                break;
            case 3:
                printf("Ingrese un numero entero: ");
                scanf("%d", &n);
                if (es_par(n) == 1) {
                    printf("Verdadero (Es Par)\n");
                } else {
                    printf("Falso (No es Par)\n");
                }
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}