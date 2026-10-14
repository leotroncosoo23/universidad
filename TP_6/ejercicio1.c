#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int almacenamiento(int vec[]){

    int a,n;
    int acc = 0;
    
    do{
        printf("Desea agregar un Nivel de Audiencia?:\n1) Si \n0) No \n");
        scanf("%d", &a);
        
        if( a == 1){
            printf("-- Cargando niveles de Audiencia --\n");
            printf("Cuantos valores desea agregar?: \n");
            scanf("%d", &n);

            n = acc + n;
            for(int i = acc; i < n; i++){
                printf("Ingrese el valor para el nivel de audiencia -> %d: \n",i);
                scanf("%d", &vec[i]);
            }
            acc = n;

        }else if( a == 0){
            printf("Saliendo....\n");
        }else{
            printf("Debe ingresar un valor valido\n");
        }
    }while(a != 0);

    return acc;
}


void orden(int n, int vec[]){

    int aux;

    for(int i = 0; i < n - 1; i++){
        
        for(int j = 0; j < n - 1 - i; j++){
            if(vec[j] < vec[j+1]){
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }

        }
    }
}

void busqueda(int n, int vec[]){

    int izq  = 0;
    int medio;
    int der = n-1;
    int encontrado = false;
    int buscado;

    printf("Ingrese el numero que desea buscar: \n");
    scanf("%d", &buscado);

    while( izq <= der ){

        medio = (izq + der) /2;

        if(vec[medio] == buscado){ 
            printf("se encontro su numero , es el %d", buscado);
            encontrado = true;
            break;
        }

        if(buscado > vec[medio]){
            der = medio - 1;
        }else{
            izq = medio + 1;
        }
    }

    if(!encontrado){
        printf("El numero %d no se encuentra en el registro.\n", buscado);
    }

}

int main (){
 
    int vec[100];
    int n = almacenamiento(vec);
    orden(n,vec);
    busqueda(n,vec);

    return 0;
}