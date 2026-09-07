#include <stdio.h>

int main() {
    // 1. El pastillero para los números (12 ranuras vacías)
    float temperaturas[12]; 
    
    // 2. La matriz de textos (Los 12 meses ya armados)
    char meses[12][11] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                          "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
                          
    float acumulador = 0;
    float media_anual;
    int i; // Nuestro contador para recorrer los pastilleros

    // ACÁ VA A IR TU CICLO FOR

    for (i = 0 ; i < 12 ; i++ ){
        printf("Ingrese la temperatura de %s: ", meses[i]);
        scanf("%f", &temperaturas[i]);
        acumulador += temperaturas[i];
    }

    media_anual = acumulador/12;
    printf("La media anual es de %.2f\n", media_anual);
    printf("Los meses que tuvieron mayor temperatura a %.2f fueron: \n", media_anual);

    for (i = 0; i < 12; i++){

        if( media_anual < temperaturas[i]){
            printf("%s con %.2f \n", meses[i], temperaturas[i]);
        }
    }
    return 0;
}