#include <stdio.h>


void almacenar(int m, int p, int matriz[][p]){

    int suma = 0;
    int contador = 0;
    printf("Empezemos a almacenar la matriz: \n");

    for(int i = 0; i < m; i++){

        for(int j = 0; j < p; j++){
            printf("Ingrese el valor del casillero %d %d \n", i, j);
            scanf("%d", &matriz[i][j]);

            if(i % 2 == 0){
                suma = suma + matriz[i][j];
                contador++;
            }
        }
    }

    printf("El promedio de los elementos en filas pares es: %.2f\n", (float)suma / contador);

}

int main(){

int m,p;

printf("ingrese la cantidad de filas: \n");
scanf("%d",&m);
printf("ingrese la cantidad de columnas: \n");
scanf("%d",&p);

int matrizA[m][p];

almacenar(m, p, matrizA);

return 0;
}