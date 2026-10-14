#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int ingresar_alumnos( float alumnos[][2]){

    
    int b;//Almaceno total alumnos
    int n; 

    do{
        printf("Cuantos alumnos desea ingresar para calcular la altura?\n");
        b = scanf("%d", &n);

        if(b == 0 || n <= 0){
            printf("\nError, no se acepta texto\n ");
            while(getchar() != '\n');
            b= 0;
        }
    }while(b == 0);


    for(int i = 0; i < n; i++){
        do{
        printf("Ingrese la altura del %d alumnos\n", i+1);
        b = scanf("%f", &alumnos[i][0]);

        if(b == 0 || alumnos[i][0] <= 0){
            printf("\nError, no se acepta texto\n ");
            while(getchar() != '\n');
            b = 0;
        }


    }while(b == 0);
    }

    return n;    
}

float promedios(int n, float alum[][2]){

    float acc = 0;

    //Promedio de altura
    for(int i = 0; i < n; i++){
        acc = acc + alum[i][0];
    }
    acc = acc / n;

    printf("\n El promedio de altura es de %.2f \n", acc);

    return acc;
}

void comparacion_altura(float acc, int n, float alum[][2]){
 
    for(int i = 0; i < n; i++){

        if(alum[i][0] < acc ){
            alum[i][1] = -1;
        }else if ( alum[i][0] == acc){
            alum[i][1] = 0;
        }else{
            alum[i][1] = 1;
        }

    }
}

void ordenar_alumnos(int n, float alumnos[][2]){

    float elem,elemRel; 
    int j;

    for(int i = 1; i < n; i++){
        elem = alumnos[i][0];
        elemRel = alumnos[i][1];
        j = i;

        while(j > 0 && alumnos[j-1][0] > elem){
            alumnos[j][0] = alumnos[j-1][0];
            alumnos[j][1] = alumnos[j-1][1];
            j--;
        }

        alumnos[j][0] = elem; 
        alumnos[j][1] = elemRel; 
    }


}

void imprimir_resultado(int n, float alum[][2]){

    printf("\n--- RESULTADOS ORDENADOS POR ALTURA ---\n");
    for(int i = 0; i < n; i++){
        printf("Alumno %d -> Estatura: %.2f -> Promedio: %.0f\n ", i+1 , alum[i][0], alum[i][1]);
    }
}
int main(){
    float alumnos[100][2];

    int n = ingresar_alumnos(alumnos);
    
    float acc = promedios(n, alumnos);
    comparacion_altura(acc, n, alumnos);
    
    ordenar_alumnos(n, alumnos);
    
    imprimir_resultado(n, alumnos);
    
}