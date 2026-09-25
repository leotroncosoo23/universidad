#include <stdio.h>

void almacenar(int n, int vec[]){

    int  i;

    for(i = 0; i < n; i++){
        printf("Ingrese un numero entero positivo para guardar en el casillero: %d:  \n",i);
        scanf("%d", &vec[i]);
    }
};

void suma_pares(int n, int vec[]){

    int  i, suma = 0;

    for(i = 0; i < n; i++){
        if( vec[i] % 2 == 0){
            suma = suma+vec[i];
        }
    }

    printf("La suma de los pares es: %d\n", suma);

}

void suma_impares(int n, int vec[]){

    int  i, suma = 0;

    for(i = 0; i < n; i++){
        if( vec[i] % 2 != 0){
            suma = suma+vec[i];
        }
    }
    printf("La suma de los impares es: %d\n", suma);
};


void cantidad(int n, int vec[]) { 
    int i;
    int cantCeros = 0;
    int cantPares = 0;
    int cantImpares = 0;

    for (i = 0; i < n; i++) {
        if (vec[i] == 0) {
            cantCeros++;
        } 
        else if (vec[i] % 2 == 0) {
            cantPares++;
        } 
        else {
            cantImpares++;
        }
    }

    
    printf("Cantidad de ceros: %d\n", cantCeros);
    printf("Cantidad de pares: %d\n", cantPares);
    printf("Cantidad de impares: %d\n", cantImpares);
}


void max_min(int n, int vec[]) {


    int i, valorMax, valorMin;
    int max = vec[0]; 
    int min = vec[0]; 
    int posMax = 0;
    int posMin = 0;
    

    for(i = 0; i < n; i++) {
        if(vec[i] > max) {
            max = vec[i];
            posMax = i;
        }
        if(vec[i] < min) { 
            min = vec[i];
            posMin = i;
        }
    }
    valorMax= max;
    valorMin= min;
    
    //Valores Absolutos
    if(max < 0){
        valorMax = max*(-1);
    }
    if(min<0){
        valorMin = min*(-1);
    }
    
    printf("El maximo es %d en la posicion %d\n", max, posMax);
    printf("El minimo es %d en la posicion %d\n", min, posMin);
    printf("El maximo valor absoluto es %d en la posicion %d\n", valorMax, posMax);
    printf("El maximo valor absoluto es %d en la posicion %d\n", valorMin, posMin);
}




int main() {
    
    int n;

    printf("Ingrese la maginiud del vector: \n");
    scanf("%d",&n);

    int vec[n];

    almacenar(n, vec);
    suma_pares(n, vec);
    suma_impares(n, vec);
    cantidad(n, vec);
    max_min(n,vec);
    

    return 0;
}