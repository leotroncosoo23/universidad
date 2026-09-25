#include <stdio.h>

void datos(int vec[]){
    for(int i = 0; i < 6; i++){
        switch(i){
            case 0: printf("Cantidad de personas en CONTABILIDAD: "); break;
            case 1: printf("Cantidad de personas en PERSONAL: "); break;
            case 2: printf("Cantidad de personas en VENTAS: "); break;
            case 3: printf("Cantidad de personas en PRODUCCION: "); break;
            case 4: printf("Cantidad de personas en COMPRAS: "); break;
            case 5: printf("Cantidad de personas en PUBLICIDAD: "); break;
        }
        scanf("%d", &vec[i]);
    }
}

float calcular_promedio(int vec[]){
    float acc = 0;
    for(int i = 0; i < 6; i++){
        acc = acc + vec[i];
    }
    return acc / 6.0;
}


int buscar_primos(int vec[], int vecPrimos[]){
    int pos = 0;

    for(int i = 0; i < 6; i++){
        int empleados = vec[i]; 
        int esPrimo = 1;

        if(empleados < 2){
            esPrimo = 0;
        } else {
            for(int divisor = 2; divisor < empleados; divisor++){
                if(empleados % divisor == 0){
                    esPrimo = 0;
                    break;
                }
            }
        }

        if(esPrimo == 1){
            vecPrimos[pos] = i;
            pos++;
        }
    }
    return pos;
}

int contar_oficinas(int vec[]){
    int oficina = 0;
    for(int i = 0; i < 6; i++){
        if(vec[i] > 7){
            oficina++;
        }
    }
    return oficina;
}

int main(){
    float resultado_prom;
    int cant_primos, cant_oficinas;
    

    int vecPersonas[6];
    int vecPrimos[6]; 

    
    datos(vecPersonas);
    
    
    resultado_prom = calcular_promedio(vecPersonas);
    cant_primos = buscar_primos(vecPersonas, vecPrimos); 
    cant_oficinas = contar_oficinas(vecPersonas);


    printf("\nEl promedio de personas en cada oficina es de: %.2f\n", resultado_prom);
    printf("El numero de oficinas con cantidad prima de personas es de: %d\n", cant_primos);
    printf("Las oficinas que tienen mas de 7 personas trabajando son: %d\n", cant_oficinas);

    printf("\nOFICINAS CON NUMERO PRIMO DE EMPLEADOS\n");
    if (cant_primos == 0) {
        printf("Ninguna oficina cumplio la regla matematica\n");
    } else {
        for(int i = 0; i < cant_primos; i++) {
            switch(vecPrimos[i]) {
                case 0: printf("Contabilidad\n"); break;
                case 1: printf("Personal\n"); break;
                case 2: printf("Ventas\n"); break;
                case 3: printf("Produccion\n"); break;
                case 4: printf("Compras\n"); break;
                case 5: printf("Publicidad\n"); break;
            }
        }
    }

    return 0;
}