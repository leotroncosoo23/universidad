#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int almacenar(char alum[][20]){

    int n = 1, a;

    printf("----- Ingresando alumnos.... -----\n");
    
    for(int i = 0; i < n; i++){
        printf("Ingrese el nombre del alumno: \n");
        scanf("%s", &alum[i]);

        do{
            printf("Desea agregar otro nombre?: \n1)si\n2)no \n");
            scanf("%d", &a);

            if(a == 1){
                n++;
            }else if ( a == 2){
                printf("Saliendo del programa...\n");
            }else{
                printf("Ingrese un valor valido\n");
            }

        }while( a != 1 && a !=2 );

    }

    return n;

}

void ordenar(int n, char alum[][20]){

    char aux[20];

    //Imprimir vector original
    
    printf("--- Lista de alumnos Desordenada -- \n");
    for(int i = 0; i < n; i++){
        printf("en la fila %d esta el alumno: %s \n", i, alum[i]);
    }

    //Ordenamiento del vector
    
    printf("--- Lista de alumnos Ordenada -- \n");
    
    int izq = 0, der = n - 1;
    bool cambio = true;

    while(izq < der && cambio){

        cambio = false;

        
        for(int i = izq; i < der; i++){
            
            if(strcmp(alum[i], alum[i+1]) > 0){
                strcpy(aux, alum[i]);
                strcpy(alum[i], alum[i+1]);
                strcpy(alum[i+1], aux);

                cambio = true;
            } 
        }
        der--;

        for(int i = der; i > izq; i--){
            if(strcmp(alum[i-1], alum[i]) > 0){
                strcpy(aux, alum[i-1]);
                strcpy(alum[i-1], alum[i]);
                strcpy(alum[i], aux);
                cambio = true;
            } 
        }
        izq++;
    }

    for(int i = 0; i < n; i++){
        printf("en la fila %d esta el alumno: %s \n", i, alum[i]);
    }
}

int main (){

    char alum[20][20];

    int n = almacenar(alum);
    ordenar(n, alum);

    return 0;
}