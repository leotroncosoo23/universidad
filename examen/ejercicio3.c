#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int contador(int i, char letra, char vec[]){

    if(vec[i] == '\0'){
        return 0;
    }

    if(vec[i] == letra){
        return 1 + contador(i + 1, letra, vec);
    }

    return contador(i + 1, letra, vec);
}

int main() {
    char vec[100]; 
    char letra;    
    int accum = 0;
    int i = 0;    

    printf("Ingrese la cadena de caracteres: \n");
    fgets(vec, sizeof(vec), stdin);

    printf("Que letra desea buscar?: \n");
    scanf(" %c", &letra); 

   
    accum = contador(i, letra, vec);
    
    printf("La cantidad de veces que se encontro la letra es: %d\n", accum);
    
    return 0;
}