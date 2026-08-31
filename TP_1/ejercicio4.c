#include <stdio.h>

int main(int argc, char *argv[]) {

    //Pre-conidicion: se ingresan 3 numero enteros 
    int A,B,C;

    printf("ingrese un valor para A ");
    scanf("%d",&A);

    printf("ingrese un valor para B ");
    scanf("%d",&B);

    printf("ingrese un valor para C ");
    scanf("%d",&C);

    if (A<B & B>C){
        printf("verdadero \n");
    }else{
        printf("falso \n");
    }

    return 0;

    //post-condicion: se devuelve un mensaje de verdadero o falso, dependiendo de la condicion ingresada
}
