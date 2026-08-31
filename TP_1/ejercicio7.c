#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// Pre-Condicion: Se debe ingresar un codigo de area valido y un numero de minutos mayor a 0
	int a,b;
	
	printf("desde donde quieres realizar la llamada? \n 12-America del Norte \n 15-America Central \n 18-America del Sur \n 19-Europa \n 23-Asia \n 25-Africa \n 29-Oceanía \n");
	scanf("%d", &a);
	
	while (a!= 12 && a != 15 && a != 18 && a != 19 && a != 23 && a != 25 && a != 29) {
		printf("Opcon inválida. Por favor, ingrese un coigo vaido: ");
		scanf("%d", &a);
	}
	
	printf("cuantos minutos desea llamar?");
	scanf("%d", &b);
	
	while (b<0){
		printf("inrese unos minutos validos");
		scanf("%d", &b);
	}
	
	
	
		switch (a){
		case 12:
			printf("el costo de su llamada es de %d", b*2);
			break;
		case 15:
			printf("el costo de su llamada es de %d", b*2.2);
			break;
		case 18:
			printf("el costo de su llamada es de %d", b*4.5);
			break;
		case 19:
			printf("el costo de su llamada es de %d", b*3.5);
			break;
		case 23:
			printf("el costo de su llamada es de %d", b*6);
			break;
		case 25:
			printf("el costo de su llamada es de %d", b*6);
			break;
		case 29:
			printf("el costo de su llamada es de %d", b*5);
			break;
			
		default:
			break;
		}
	
		
	// Post-Condicion: Se devuelve el costo de la llamada segun el codigo de area y los minutos ingresados
}  
