#include <stdio.h>

int main(int argc, char *argv[]) {
	//Pre-condicion: Las variables ingresadas deben ser del tipo ENTERO; Tambien N2 no deberia ser 0 (la division por 0 no esta definida)
	int N1,N2,N3;
	
	printf ("ingrese el 1�er numero ");
	scanf ("%d",&N1);
	
	printf ("ingrese el 2� numero ");
	scanf ("%d",&N2);
	
	printf ("ingrese el 3� numero ");
	scanf ("%d",&N3);
	
	if (N1==N2){
		printf("el resultado de la suma es %d \n ", N1+N2+N3);
	}else if (N1 < N2){
		printf("el resultado de la multiplicacion es %d \n", N1*N2*N3);
	}else{
		printf ("el resultado de la division es %d \n", (N1/N2)*N3);
	}
	//Post-Condicion: -se devuelve una operacion entre los 3 numeros;
	return 0;
}

