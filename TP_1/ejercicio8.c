#include <stdio.h>

int main(int argc, char *argv[]) {
    //Pre-Condicion: Se ingresan numeros enteros
    int n, i, j;  
    
    printf("Ingrese un numero en el cual se realizara una piramide hasta la misma: ");
    scanf("%d", &n);
    
    
    for (i = 1; i <= n; i++) {
        
        
        for(j = 1; j <= i; j++) {
            printf("%d ", j); 
        }        
        printf("\n");
    }

    return 0;
	
	//Post-Condicion: Se devuelve una piramide hasta el numero deseado 
}
