#include <stdio.h>

int main(){

    int n = 8;
    int aux;
    int audiencia[] = {450, 120, 890, 340, 670, 910, 230, 560};

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(audiencia[j] < audiencia[j+1]){
                aux = audiencia[j];
                audiencia[j] = audiencia[j+1];
                audiencia[j+1] = aux;
            }
        }
    }
    

    //Busqueda
    int buscado;
    int izq = 0;
    int medio;
    int der = n-1;

    printf("Ingrese un numero para buscar: \n");
    scanf("%d",&buscado);
    while( izq <= der){

        medio = (izq + der)/2;

        if(audiencia[medio] == buscado){
            printf("¡Encontrado! El nivel %d esta en la posicion %d del vector.\n", buscado, medio);
                break;
        }else if(buscado > audiencia[medio]){
            der = medio - 1;
        }else{
            izq = medio + 1;
        }
    }
    if(izq > der){
            printf("El nivel de audiencia %d NO se encuentra en el registro.\n", buscado);
        }

        return 0;
}