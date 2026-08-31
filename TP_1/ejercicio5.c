#include <stdio.h>

int main(int argc, char *argv[]) {

    //pre-condicion: se ingresa un numero entero entre el 1 al 12
    int numes;

    printf("ingrese un valor para el mes (1-12): ");
    scanf("%d", &numes);
    
    switch (numes) {
        case 1:
            printf("Mes Enero \n");
            break;
        case 2:
            printf("Mes Febrero \n");
            break;
        case 3:
            printf("Mes Marzo \n");
            break;
        case 4:
            printf("Mes Abril \n");
            break;
        case 5:
            printf("Mes Mayo \n");
            break;
        case 6:
            printf("Mes Junio \n");
            break;
        case 7:
            printf("Mes Julio \n");
            break;
        case 8: 
            printf("Mes Agosto \n");
            break;
        case 9:
            printf("Mes Septiembre \n");
            break;
        case 10:
            printf("Mes Octubre \n");
            break;
        case 11:
            printf("Mes Noviembre \n");
            break;
        case 12:
            printf("Mes Diciembre \n");
            break;
        default:
            printf("numero invalido \n");
    }

    return 0;

    //post-condicion: se devuelve un MEs con el valor de a, si es que este se encuentra entre 1 y 12
}
