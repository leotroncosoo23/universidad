#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//pre-condicion: se ingresa un valor para A, B y C, que deben ser distintos entre si
	int A,B,C;
	
	printf("ingrese un valor para A ");
	scanf("%d",&A);
	
	printf("ingrese un valor para B ");
	scanf("%d",&B);
	
	printf("ingrese un valor para C ");
	scanf("%d",&C);
	
	while ( A==B | A==C | B==C ){
		if(A==B){
			printf("ingrese un valor distinto al de A ");
			scanf("%d",&B);
		}else if (B==C){
			printf("ingrese un valor distinto al de B ");
			scanf("%d",&C);
		}else{
			printf("ingrese un valor distinto al de A ");
			scanf("%d",&C);
		}
	}
	
	if (A<B & B>C){
		printf("el orden descendente es %d \n", B);
		printf("el orden descendente es %d \n", C);
		printf("el orden descendente es %d \n", A);
	}else if (A<B & B<C){
		printf("el orden descendente es %d \n", C);
		printf("el orden descendente es %d \n", B);
		printf("el orden descendente es %d \n", A);
	}else{
		printf("el orden descendente es %d \n", A);
		printf("el orden descendente es %d \n", B);
		printf("el orden descendente es %d \n", C);
	}
	return 0;

	// post-condicion: Se devuelve el orden descendente de los 3 numeros ingresados, siempre y cuando sean distintos entre si 
}

