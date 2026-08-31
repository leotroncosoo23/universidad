#include <stdio.h> 

int main(int argc, char *argv[]) {
    //Se debe ingresar un codigo indicador por cada venta, para corroborar descuentos

    //Pre-condicion, se debe ingresar codigos y evealuar condiciones para el mismo

    int contador, contO = 0, contE = 0, contT = 0;
    char codigo;
    float importe, precioO = 0, precioE = 0, precioT = 0, total;


    //Bucle para calcular cantidad de ventas
    do
    {        
        printf("Ingrese el codigo: \nO) Obra Social \n E) Efectivo \n T) Tarjeta credito\n *) Salir\n");
        scanf(" %c",&codigo);

        //Para frenar bucle y no preguntar importe
        if (codigo == '*'){
            break;
        };
        

        printf("Ingrese el importe: \n");
        scanf("%f",&importe);

        //validacion de importe correcto
        if (importe <= 0){
            printf("Ingreso un importe valido, por favor ingrese un importe correcto o salga del programa");
        }else{    
            switch (codigo){
            case 'O':
            case 'o':
                importe = importe-(importe * 0.40);
                contO++;
                precioO = precioO + importe;
                break;
            case 'E':
            case 'e':
                importe = importe-(importe * 0.10);
                contE++;
                precioE = precioE + importe;
                break;
            case 'T':
            case 't':
                importe = importe + (importe * 0.15);
                contT++;
                precioT = precioT + importe;
                break;
            default:
                printf("Error, deber ingresar un valor valido 'O', 'E', 'T', '*'\n");
                break;
            }

        }

    }while (codigo != '*');
    

    //operaciones y monto del dia
    contador = contO + contE + contT;
    total= precioO + precioE + precioT;

    // Resumen General
    printf("\n--- CIERRE DE CAJA ---\n");
    printf("El total de operaciones del dia fue: %d\n", contador);
    printf("El monto total recaudado fue: $%.2f\n\n", total); // Corregido: % en lugar de &

    // Detalle Efectivo
    printf("--- DETALLE EFECTIVO ---\n");
    printf("Ventas en Efectivo comun: %d Total: $%.2f\n", contE, precioE);
    printf("Ventas por Obra Social: %d Total: $%.2f\n\n", contO, precioO);

    // Detalle Tarjeta  
    printf("--- DETALLE TARJETA ---\n");
    printf("Ventas con Tarjeta: %d Total: $%.2f\n", contT, precioT);

    //Post-Condicion: Se devuelven los valores para cada operacion realizada

    

    return 0;
}