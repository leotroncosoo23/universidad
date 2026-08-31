#include <stdio.h> //Trae diccionario estandar de "C"
#include <stdlib.h> //Librerioa estandar, da acceso a librerias matematicas
#include <time.h> //Enseña al programa como leer reloj interno de la computadora


int main(int argc, char *argv[]) {

    //Se debe crear un programa el cual lanze un numero aleatorio y el usuario intente encontrarlo
    //Post-condicion: Se deben ingresar numeros enteros entre el 1 y 100
    
    srand(time(NULL)); //sran() Significa semilla aleatoria , Time(NULL) Actua con el reloj de la compu

    int a;
    int random = (rand() % 100) + 1;// rand() Numeros Aleatorios

    printf("Comenzo el juego de adivinar, adivine el numero aleatorio entre el 1 y el 100 \n");


    do
    {
        printf("Que numero crees que eligio la computadora? \n");
        scanf("%d",&a);

        if ( a > random)
        {
            printf("Es muy alto\n");
        }else if (a < random)
        {
            printf("Es muy bajo\n");
        }else{
            printf("Acertaste\n");
        }
    } while (a != random);
    
    //Post-Condicion devuelve el acierto de un numero aleatorio 
	return 0;
}


