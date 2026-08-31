#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Pre-condicion: Se ingresaran numero enteros postivos
	int n=0, cosas;
		
	printf("ingrese la cantidad de cosas que va a comprar ");
	scanf("%d",&cosas);
	
	while(n != cosas){
		n++;
	}
	printf("Pedro compro %d cosas", n);
	
	//Post-Condicion: Se devuelve la cantidad de cosas que compro Pedro
	return 0;
}

