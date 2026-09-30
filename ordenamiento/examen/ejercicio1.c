Tenés un registro con las notas finales de 5 alumnos ingresadas en cualquier orden.
Tu objetivo es ordenarlas de menor a mayor para identificar rápidamente quién sacó la nota más baja y quién la más alta.


#include <stdio.h>

int main (){

    int n = 5;
    int notas [5] = {8, 3, 10, 5, 7};
    int aux;

    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < n-1-j; i++){
            if(notas[i] > notas[i+1]){
                aux = notas[i];
                notas[i] = notas[i+1];
                notas[i+1] = aux;
            }
        }
    }

    printf("el orden de las notas es: \n");

    for(int i = 0; i < n; i++){
        printf("%d \n", notas[i]);
    }

    return 0;
}