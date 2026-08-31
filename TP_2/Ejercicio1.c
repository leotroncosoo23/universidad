#include <stdio.h>

int main(int argc, char *argv[]) {
	//se debe calcular un numero para verificar si es un numero primo o no
	//Pre-condicion: Se espera ingresar un numero entero o mayot o igual a 2., de caso contrario deberia volver a intentar o cerrar el programa
	
	int ENTERO, Divisor = 2, primo = 1;
	
	//Guardo mi variable y realizo la validacion 
	do{
		printf("Ingrese un numero Mayor o igual a 2 apra verificar si es primo ");
		scanf("%d", &ENTERO);
	}while(ENTERO < 2 );
	
	//Realizo la operacion para sacar el si es numero primo
	while(Divisor < ENTERO ){
		if (ENTERO % Divisor == 0){
			primo = 0;
			break;
		}else{
			Divisor++;
		}
	}
	
	//Reailizo la salida de resultados
	if(primo == 0){
		printf("El numero %d, No es Primo", ENTERO);
	}else{
		printf("El numero %d, SI es Primo", ENTERO);
	}
	
	//Pre-condicion: Se devuele si elo nuemero es primo o no
	return 0;
}


