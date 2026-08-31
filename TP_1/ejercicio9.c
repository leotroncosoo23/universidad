#include <stdio.h>

int main(int argc, char *argv[]) {
	//Pre-condicion: se ingresa un numero entero positivo
	int num, contador = 0;
	
	printf("ingrese un numero entero positivo , para calcular cuantas cifras tiene ");
	scanf("%d",&num);
	
	while(num !=0 ){
		num	 = num/10;
		contador++;
			
	}
	
	printf("La cantidad de cifras que tiene su numero es de: %d " , contador);
	
	return 0;
	
	//Post-Condicion: Se devuelve la cantidad de cifras que tiene el numero ingresado
}

