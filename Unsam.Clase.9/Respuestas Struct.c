/*
    1) Escribe un programa de liquidación de pagos por servicios, para una pequeña compañía que tiene 8 empleados temporales. Con
un menú de opciones y para cada empleado/a, el programa recibe los siguientes datos en un array de struct:
a. el nombre y apellido,
b. sexo,
c. horas trabajadas y
d. sueldo por hora.
Por cada empleado ingresado, el programa deberá mostrar en pantalla en forma ordenada:
 el nombre
 el sueldo
Además debe permitir, mediante el menú acceder a la siguiente información:
 El total de pagos para cada sexo y
 el sueldo promedio de hombres y de mujeres.
 Búsqueda binaria de los datos de un empleado mediante el nombre.
El programa debe emitir todos los mensajes necesarios para que el usuario opere en forma eficaz, convertir el apellido de cada
empleado a Mayúsculas (ver ejemplo empleo de toupper.c) antes de guardarlo en el array, validar el sexo, permitiendo ingresar
minúsculas o mayúsculas indistintamente, horas trabajadas (> a 0 y <=50) y sueldo (base=$250.50 la hora) y controlar al menos 3
errores (ver ejemplo control de errores con cadenas.c). Las búsquedas por nombre y/o apellido deben considerar que el usuario
puede ingresar esos datos en minúsculas por lo tanto hay que convertir la cadena antes de realizar el proceso.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Estructura para representar a un empleado
struct Empleado {
    char nombre[50];
    char sexo;
    int horas_trabajadas;
    float sueldo_por_hora;
};

// Función para convertir una cadena a mayúsculas
void convertirAMayuscula(char *cadena) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        cadena[i] = toupper(cadena[i]);
    }
}

// Función para calcular el sueldo de un empleado
float calcularSueldo(struct Empleado empleado) {
    return empleado.horas_trabajadas * empleado.sueldo_por_hora;
}

int main() {
    const int num_empleados = 8;  // Cambiar el número de empleados
    struct Empleado empleados[num_empleados];
    char buscar_nombre[50];
    int opcion;

    // Inicialización de variables para el total de pagos y promedios por sexo
    float total_pago_hombres = 0, total_pago_mujeres = 0, sueldo_promedio_hombres = 0, sueldo_promedio_mujeres = 0;
    int num_hombres = 0, num_mujeres = 0;

    // Inicialización de la base de sueldo por hora
    float sueldo_base = 250.50;

    // Menú principal
    while (1) {
        printf("\n--- Menú ---\n");
        printf("1. Ingresar datos de empleado\n");
        printf("2. Mostrar datos de empleados\n");
        printf("3. Calcular total de pagos por sexo\n");
        printf("4. Calcular sueldo promedio por sexo\n");
        printf("5. Buscar empleado por nombre o apellido\n");
        printf("6. Salir\n");
        printf("Ingrese la opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // Ingresar datos de empleado
                for (int i = 0; i < num_empleados; i++) {
                    printf("\nIngrese el nombre y apellido del empleado: ");
                    scanf(" %[^\n]", empleados[i].nombre);
                    convertirAMayuscula(empleados[i].nombre);  // Convertir a mayúsculas
                    printf("Ingrese el sexo (H/M): ");
                    scanf(" %c", &empleados[i].sexo);
                    empleados[i].sexo = toupper(empleados[i].sexo);
                    printf("Ingrese las horas trabajadas (1-50): ");
                    scanf("%d", &empleados[i].horas_trabajadas);
                    printf("Ingrese el sueldo por hora: ");
                    scanf("%f", &empleados[i].sueldo_por_hora);

                    // Validar horas trabajadas y sueldo por hora
                    if (empleados[i].horas_trabajadas <= 0 || empleados[i].horas_trabajadas > 50 ||
                        empleados[i].sueldo_por_hora < sueldo_base) {
                        printf("Error: Datos no válidos. Horas o sueldo no cumplen los requisitos.\n");
                        i--;  // Retroceder una iteración para volver a ingresar los datos
                    } else {
                        // Calcular el sueldo total para el empleado
                        float sueldo = calcularSueldo(empleados[i]);

                        // Actualizar los totales por sexo y el contador
                        if (empleados[i].sexo == 'H') {
                            total_pago_hombres += sueldo;
                            num_hombres++;
                        } else if (empleados[i].sexo == 'M') {
                            total_pago_mujeres += sueldo;
                            num_mujeres++;
                        }
                    }
                }
                break;
            case 2:
                // Mostrar datos de empleados
                printf("\n--- Datos de Empleados ---\n");
                for (int i = 0; i < num_empleados; i++) {
                    printf("Nombre: %s\n", empleados[i].nombre);
                    printf("Sueldo: %.2f\n", calcularSueldo(empleados[i]));
                    printf("\n");
                }
                break;
            case 3:
                // Calcular total de pagos por sexo
                printf("\nTotal de pagos por sexo:\n");
                printf("Hombres: %.2f\n", total_pago_hombres);
                printf("Mujeres: %.2f\n", total_pago_mujeres);
                break;
            case 4:
                // Calcular sueldo promedio por sexo
                sueldo_promedio_hombres = (num_hombres > 0) ? (total_pago_hombres / num_hombres) : 0;
                sueldo_promedio_mujeres = (num_mujeres > 0) ? (total_pago_mujeres / num_mujeres) : 0;
                printf("\nSueldo promedio por sexo:\n");
                printf("Hombres: %.2f\n", sueldo_promedio_hombres);
                printf("Mujeres: %.2f\n", sueldo_promedio_mujeres);
                break;
            case 5:
                // Buscar empleado por nombre o apellido
                printf("\nIngrese el nombre o apellido a buscar: ");
                scanf(" %[^\n]", buscar_nombre);

                int encontrado = 0;
                printf("\nResultados de la búsqueda:\n");
                for (int i = 0; i < num_empleados; i++) {
                    // Convertir el nombre del empleado a mayúsculas para la comparación
                    char nombre_empleado_upper[50];
                    strcpy(nombre_empleado_upper, empleados[i].nombre);
                    convertirAMayuscula(nombre_empleado_upper);

                    // Verificar si el nombre o apellido coincide
                    if (strstr(nombre_empleado_upper, buscar_nombre) != NULL) {
                        printf("Nombre: %s\n", empleados[i].nombre);
                        printf("Sueldo: %.2f\n", calcularSueldo(empleados[i]));
                        printf("\n");
                        encontrado = 1;
                    }
                }

                if (!encontrado) {
                    printf("No se encontraron empleados con ese nombre o apellido.\n");
                }
                break;
            case 6:
                // Salir del programa
                printf("Saliendo del programa...\n");
                return 0;
            default:
                printf("Opción no válida. Por favor, ingrese una opción válida.\n");
                break;
        }
    }

    return 0;
}





/*------------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    2)
*/
/*
#include <stdio.h>

int main(){
    
    return 0;
}

*/
/*------------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    3)
*/
/*
#include <stdio.h>

int main(){
    
    return 0;
}

*/
/*------------------------------------------------------------------------------------------------------------------------------------------------*/