#include <stdio.h>

int main(int argc, char *argv[]) {
	
//Pre-condicion: Se ingresa un numero postivo, que representa la edad de una persona

 // se define una variable de tipo ENTERO
	int edad;	
//	Realizo el saludo y capturo el resultado 
	printf ("hola, cuantos años tenes?");
	scanf ("%d", &edad);
// utilize una condicion simple, para valida la edad
	if (edad > 29){
		printf("Aceptado\n");
	}else{
		printf("Regrese el proximo año");
	}
	
	return 0;

	//Post-condicion: Se devuelve un mensaje de aceptacion o rechazo, dependiendo de la edad ingresada
}

