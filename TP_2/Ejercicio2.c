#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Debemos ver la tarifa del alquiler , dependiendo que videos lleva  y cuantos dias
	
	//Pre-Condicion: Se ingresara el tipo de video que desean alquilar dibujos,estrenos,otros
	int a,b,c,z, accum = 0;
	
	
	//Genero programa para ver cuanto video de cada uno desea llevar
	do
	{
		printf("Ingrese que tipo de video desea: \n 1) Dibujos $20 \n 2) Estrenos $30 \n 3) Otros $25 \n");
		scanf("%d",&a);
		
		if (a==1)
		{
			printf("cuantos desea llevar? ");
			scanf("%d",&z);
			accum = (accum + (z * 20));
		}else if (a==2){
			printf("cuantos desea llevar? ");
			scanf("%d",&z);
			accum = (accum + (z * 30));
		}else if (a==3){
			printf("cuantos desea llevar? ");
			scanf("%d",&z);
			accum = (accum + (z * 25));
			
		}else{
			printf("ingresa un valor valido \n");
		}
		printf("desea seguir alquilando? \n 0) no \n 1)si \n");
		scanf("%d",&a);
	} while (a!=0);
	
	
	//Pregunto cuantos dias se lleva los videos
	do
	{
		printf("cuantos dias desea llevarse los videos \n");
		scanf("%d",&b);
	} while (b < 1);
	
	//Pregunto si se retraso
	do
	{
		printf("cuantos dias se retraso? o precione 0 si no se retraso \n");
		scanf("%d",&c);
	} while (c < 0);
	
	if ( c == 0)
	{
		printf("No se retraso el precio es solo de %d", accum);
	}else if (c == 1) {
		accum = accum + 5;
		printf("Como se retraso 1 dia , debe pagar la multa de $5 , entonces el total es de %d " , accum);
	}else{
		accum = (accum +(((c-1)*2) + 5));
		printf("Como se retraso , debe pagar la multa del primer dia de $5 y $2 diarios , entonces el total es de %d " , accum);
	};

	//Post-Condicion: devuelvo el resultado de lo que debe dependiendo cantidad de cosas, y dias adeudados
	return 0;
}


