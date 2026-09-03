#include <stdio.h>

int s(int n){
	
	if (n == 1)
	{
		return 15;
	}else {
		return 3+s(n-1);
	}
	
}
	int iteracion(int n) {
		int acumulador = 0;
		for (int i = 0; i <= n; i++) {
			acumulador = acumulador + (15 + (3*i));        
		}
		return acumulador;
	}
	
	int main(int argc, char *argv[]) {
		
		int n;
		
		printf("Ingrese un numero de fila \n");
		scanf("%d",&n);
		
		
		printf("La cantidad de sillas que contiene la fila %d \n",s(n));
		printf("el teatro contiene %d \n",iteracion(n));
		
		
		return 0;
	}
	
