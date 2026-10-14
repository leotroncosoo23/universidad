#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int datos(char fechas[][20], char paises[][30], float grados[] ){

    int a;
    int n = 0;
    bool b = true;
    printf("--- Almacenamiento de datos para Ola de Calor --- \n");

    for(int i = 0; b == true; i++ ){
        
        printf("Desea agregar un pais? \n1) Si \n0) No \n");
        scanf("%d",&a);

        while(a != 1 && a != 0){
            printf("Error: Ingrese un valor valido \n Desea agregar un pais? \n1) Si \n2) No \n ");
            scanf("%d",&a);
        }

        if(a == 0){
            b = false;
        }else{
            printf("Nombre del pais: \n");
            scanf("%s", paises[i]);

            printf("Fecha: \n");
            scanf("%s", fechas[i]);
                
            printf("Grados: \n");
            scanf("%f",&grados[i]);
            n++;
        }
    }
    return n;
}

void promedio(char fechas[][20], char paises[][30], float grados[] , int n){

    char pais[30];
    char paisMax[30];
    char fecha[20];
    char fechaMax[20];
    float tempMin = grados[0];
    float tempMax = grados[0];
    float acum = grados[0];

    strcpy(pais, paises[0]);
    strcpy(paisMax, paises[0]);
    strcpy(fecha, fechas[0]);
    strcpy(fechaMax, fechas[0]);
    
    for(int i = 1; i < n; i++){
        
        //Evaluo temperatura minima
        if(tempMin > grados[i]){
            tempMin = grados[i];
            strcpy(pais) = paises[i];
            strcpy(fecha) = fechas[i];
        }
        //Evaluo la temperatura maxima
        if(tempMax < grados[i]){
            tempMax = grados[i];
            strcpy(paisMax) = paises[i];
            strcpy(fechaMax) = fechas[i];
        }

        acum = acum + grados[i];
    }

    acum = acum / n;

    printf("la temperatura minima de ese periodo fue de: %f , en el pais %s, el dia %s", tempMin,pais,fecha );
    printf("la temperatura maxima de ese periodo fue de: %f , en el pais %s, el dia %s", tempMax,paisMax,fechaMax );
    printf("la temperatura promedia fue de: %f ",acum );

}


int main(){
    char fechas[100][20];
    char paises[100][30];

    float grados[100];

    int n = datos(fechas, paises, grados);

    promedio(fechas, paises, grados, n);
    
    return 0;
}