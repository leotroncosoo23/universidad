#include <stdio.h> 

int main(int argc, char *argv[]) {
    //se debe generear una secuencia de suma, entre los ultimos 2 numeros, comenzando con 1,1;

    //Pre-condicion: Se debe generar una suma logica entree los ultimos 2 numeros

    int a = 0,b = 1,i,N,acc = 0;

    //Le pido al usuario cuantos nuemros desea
    printf("Ingrese el nuemero hasta el cual quiere que el prgrama escriba los terminos de sucesion de fibonacci\n");
    scanf("%d", &N);

    //Realizo la logica para calcular el valor de mi accumulador e imprimirlo 
    for (i = 1; i <= N ; i++)
    {
        a=b;
        b = acc;
        
        acc = a+b;        
        printf("%d, ",acc);
    };
    
    //Post-Condicion: Devuelvo la cantidad de numeros que necesita la persona , con sumas entre los ultimos 2 valores
    return 0;
}