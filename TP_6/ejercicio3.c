#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void almacenar_orig(int n, int num[], int original[]){

    printf("--- INFORMACION ORIGINAL ---\n");

    for(int i = 0; i < n; i++){
        original[i] = num[i];
        printf("%d   ",original[i]);
    }
}

void ordenar(int n, int num[], int posiciones[]){

    int elem,elemPos, j;

    for(int i = 1; i < n; i++){
        elem = num[i];
        elemPos = posiciones[i];
        j = i;

        while(j > 0 && num[j-1] > elem ){
            num[j] = num[j-1];
            posiciones[j] = posiciones[j-1];
            j--;
        }
        num[j] = elem;
        posiciones[j] = elemPos;
    }


    printf("\n --- INFORMACION ORDENADA ---\n");
    for(int i = 0; i < n; i++){
        printf("%d   ", num[i]);
    }

}

void posicion(int n, int num[], int posiciones[]){

    for(int i  = 0; i < n; i++){

        printf("\nEl numero %d , esta en la posicion %d \n",num[i], posiciones[i] );

    }
}


void buscar(int n, int num[], int posiciones[]){

    int buscado;
    int izq = 0;
    int der = n-1;
    int medio, numero;
    int validar = false;

    do{
        printf("Ingrese el numero del libro a buscar: \n");
        numero = scanf("%d", &buscado);

        if(numero == 0){
            printf("Error, debe ingresar un NUMERO: \n");
            while(getchar() != '\n');
        }

    }while(numero == 0);

    while(izq <= der){
        
        medio = (izq + der) /2;

        if(buscado == num[medio]){
            printf("Encontre el libro es: %d, y esta en la posicion: %d \n", num[medio], posiciones[medio]);
            validar = true;
            break;
        }

        if(buscado > num[medio]){
            izq = medio + 1;
        }else{
            der = medio - 1 ;
        }
    }

    if (!validar){
        printf("-- NO SE ENCONTRO EL LIBRO --\n");
    }

}



int main (){
    int n = 14;
    int num[14] = {89, 17, 86, 75, 45, 34, 65, 78, 43, 99, 87, 15, 21, 33};
    int original[14];

    int posiciones[14] = {1, 2, 3, 4, 5, 6,7, 8, 9, 10, 11, 12, 13, 14};

    almacenar_orig(n, num, original);

    ordenar(n, num, posiciones);

    posicion(n, num, posiciones);

    buscar(n, num, posiciones);
    

    return 0;
}