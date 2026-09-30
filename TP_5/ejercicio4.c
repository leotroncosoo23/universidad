#include <stdio.h>

int main() {
    int m, p, i, j;
    int suma = 0, contador = 0;

    printf("Ingrese cantidad de filas (m): ");
    scanf("%d", &m);
    printf("Ingrese cantidad de columnas (p): ");
    scanf("%d", &p);

    int matriz[m][p];

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("Fila %d, Col %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            if (i % 2 == 0) {
                suma += matriz[i][j];
                contador++;
            }
        }
    }

    if (contador > 0) {
        printf("El promedio de las filas pares es: %.2f\n", (float)suma / contador);
    }
    return 0;
}