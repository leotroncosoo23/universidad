#include <stdio.h>

//Creo la matriz respetando el 50x50
int validacion(char nombre, char dimension){

    int valor;

    do{
        printf("Ingrese el valor de la filas entre 0 y 50 para la matriz %c \n", nombre);
        scanf("%d", &valor);

        if(valor< 1 || valor > 50){
            printf("Ingrese un valor valido \n");
        }

    }while( valor < 1 || valor > 50);

    return valor;
}

//Guardo la informacion de c/matriz
void almacenar(int a, int b, int matriz[][b], int nombre){

    printf("Almacenando elementos de la matriz %c", nombre);

    for(int i = 0; i < a; i++){

        for(int j = 0; j < b; j++){
            printf("Ingrese el valor que va a tener la fila %d columna %d\n",i,j);
            scanf("%d", &matriz[i][j]);
            
        }
    }
}


//Multiplicacion de las matrices
int multiplicacion(int a, int b, int c, int matrizA[][b], int matrizB[][c], int matrizC[][c]){
    //Recorro filas de matriz A
    for(int i = 0; i < a; i++){
        //Recorro columnas de matriz B
        for(int j = 0; j < c; j++){
            //Limpio la celda
            matrizC[i][j] = 0;
            for(int k = 0; k < b; k++){
                //Producto Punto: algebra
                matrizC[i][j] = matrizC[i][j] + (matrizA[i][k] * matrizB[k][j]);
            }
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }
}


int main(){

    int a,b,c;

    a = validacion('A', 'f');
    b = validacion('A','C');

    printf("\n Por regla, las filas de la matriz B seran %d \n", b);
    c = validacion('B', 'C');


    int matrizA[a][b];
    int matrizB[b][c];
    int matrizC[a][c];

    almacenar(a, b, matrizA,'A');
    almacenar(b, c, matrizB,'B');

    multiplicacion(a, b, c, matrizA, matrizB, matrizC);

    return 0;
}