#include <stdio.h>

int main(int argc, char *argv[]) {
    //Pre-condicion: se debe ingresar una variable y funcion para el caso del cuadrado/cubo 
    
    printf("Numero \t Cuadrado \t Cubo\n"); 
    for(int i = 0; i <=10; i++) {
        printf("%d \t %d \t \t %d\n", i, i*i, i*i*i);
    }

    return 0;

    //post-condicion: se devuelve una tabla con el valor del numero, su cuadrado y su cubo
}
