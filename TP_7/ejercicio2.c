#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//EMPLEADOS

//Enumeracion para estudios cursados (calorees restringidos)
typedef enum {
    ESTUDIOS_PRIMARIOS = 1;
    ESTUDIOS_SECUNDARIOS;
    ESTUDIOS_TERCIARIOS;
}NivelEstudios;

//Enumeracion para el estado civil
typedef enum{
    ESTADO_SOLTERO = 1;
    ESTADO_CASADO;
    ESTADO_VIUDO;
    ESTADO_DIVORCIADO;
}EstadoCivil;

//Registro principal de empleados
typedef struct{
    char nommbre_apellido[60];
    int edad; //entre 18 y 65 años
    NivelEstudios estudios;
    EstadoCivil estado_civil;
}Empleado


//LIBROS
typedef struct{
    IDIOMA_ESPANOL = 1;
    IDIOMA_INGLES;
    IDIOMA_FRANCES;
    IDIOMA_PORTUGES;
    IDIOMA_ALEMAN;
}IdiomaLibro
//Registro principal de libros
typedef struct{
    char titulo_libro[100];
    char nombre_autor[100];
    int cant_pag;
    int anio_edicion;
    IdiomaLibro idioma;
} Libro

//Domicilio
typedef struct{
    char calle[50];
    int numero;
    char deapartamento[10];
} Domicilio

//Fecha
typedef struct{
    int dia;
    int mes;
    int anio;
}Fecha

// Sub-estructura para el lugar de nacimiento
typedef struct {
    char ciudad[50];
    char provincia[50];
    char pais[50];
} LugarNacimiento;
//Registro principal de Alumnos UNPSJB
typedef struct {
    int dni;                     // 8 dígitos: rango 10.000.000 a 99.999.999
    char nombre_apellido[60];    // Apellido y nombre completo
    Domicilio domicilio;         // Registro anidado de domicilio
    char telefono[20];           // Formato texto para incluir prefijos (ej: "2945-123456")
    LugarNacimiento nacimiento;  // Registro anidado de lugar de nacimiento
    Fecha fecha_ingreso;         // Registro anidado con día, mes y año de ingreso
    int libreta;                 // 5 dígitos: rango 10.000 a 99.999
    char codigo_carrera[10];     // Código alfanumérico identificador de carrera
    int materias_cursadas;       // Validación: >= 0
    int materias_aprobadas;      // Validación: >= 0 y materias_aprobadas <= materias_cursadas
} Alumno;

int main(){

}