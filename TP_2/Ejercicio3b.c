#include <stdio.h> //Trae diccionario estandar de "C"
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    
    //La computadora debe adivinar el numero que eligue el usuario
    //Post-Condicion: Se debe ingresar un numero entero, el cual se filtrara para encontrarlo
    srand(time(NULL));

    int a, piso = 1, techo = 100;
    int random = (rand() % 100) + 1;// rand() Numeros Aleatorios

    printf("Comenzo la hora de Adivinar tu numero \nPor favor piense en un Numero del 1 al 100 y no lo cambie, sino la computadora no podra adivinarlo\n");
    
    //Genero el bucle pisando variables para poder encontrar el numero q eligio el uisuario
    {

        printf("El numero %d es: \n 1) Mas Chico \n 2) Mas Grande \n 3) Acertaste mi Numero \n" ,random);
        scanf("%d",&a);

        if (a==1) {
            piso = random + 1;
            random = piso + (rand() % (techo - piso + 1));
        }else if ( a==2){
            techo = random - 1;
            random = piso + (rand() % (techo - piso + 1));
        }else if( a==3){
            printf("Que suerte adivine su numero , era %d", random);
        }else{
            printf("Ingrese un numero valido porfavor \n");
        }
    } while (a != 3);
    

    //Post-Condicion: Se devuelve el numero que eligio el usuario
	return 0;
}


