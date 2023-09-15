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
/*
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
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    2)Escribe un programa, con un menú de opciones, que permita calificar a un grupo de diez alumnos de la escuela secundaria. En
un array de struct, se ingresa para cada alumno:
a. Apellido
b. Nombre
c. Campo array de cadena inicialmente vacío
d. 5 calificaciones de cada alumno, (array de 5 elementos)
e. Campo float, para el promedio, inicialmente vacío.
f. Campo float, para la mayor nota, inicialmente vacío.
El programa debe:
 Permitir concatenar nombre y apellido y registrarlo en el campo correspondiente inicialmente vacío.
 Permitir calcular la media (promedio) de cada alumno y guardarla en el campo que inicialmente estará vacío hasta
que se calcule el dato y se registre.
 Permitir buscar la nota mayor de cada alumno y guardarla en el campo que inicialmente estará vacío hasta que se
realice el proceso de búsqueda y registro del dato.
 Posteriormente debe informar:
o el promedio de cada alumno y nota máxima, emitir si está aprobado o no. Para aprobar se requiere un
promedio de 6 o más y haber obtenido al menos 6 en la última de las 5 calificaciones.
o informar cuántos alumnos aprobaron y cuántos obtuvieron un promedio de al menos 8 puntos.
 Permitir la búsqueda (binaria) por Apellido de un alumno y emitir todos sus datos.
 Emitir el listado ordenado por nombre y apellido, con sus notas, promedio y nota máxima en forma encolumnada.
El programa debe emitir todos los mensajes necesarios para que el usuario opere en forma eficaz, validar las notas ( >=0 y
<=10), convertir el apellido de cada alumno a Mayúsculas (ver ejemplo empleo de toupper.c) antes de guardarlo en el array y
controlar al menos 3 errores (ver ejemplo control de errores con cadenas.c). Las búsquedas por nombre y/o apellido deben
considerar que el usuario puede ingresar esos datos en minúsculas por lo tanto hay que convertir la cadena antes de realizar el
proceso.
*/
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Alumno {
    char apellido[50];
    char nombre[50];
    float notas[5];
    float promedio;
    float nota_maxima;
};

void convertirAMayuscula(char *cadena) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        cadena[i] = toupper(cadena[i]);
    }
}

void intercambiar(struct Alumno *a, struct Alumno *b) {
    struct Alumno temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    const int num_alumnos = 2;
    struct Alumno alumnos[num_alumnos];
    char buscar_apellido[50];
    int opcion;

    while (1) {
        printf("\n--- Menú ---\n");
        printf("1. Cargar alumnos\n");
        printf("2. Buscar alumno por apellido\n");
        printf("3. Mostrar promedios\n");
        printf("4. Mostrar notas máximas\n");
        printf("5. Rendimiento General\n");
        printf("6. Listado\n");
        printf("7. Salir\n");
        printf("Ingrese la opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("--- Cargar alumnos ---\n");
                for (int i = 0; i < num_alumnos; i++) {
                    printf("Ingrese el apellido del alumno %d: ", i + 1);
                    scanf(" %[^\n]", alumnos[i].apellido);
                    convertirAMayuscula(alumnos[i].apellido);

                    printf("Ingrese el nombre del alumno %d: ", i + 1);
                    scanf(" %[^\n]", alumnos[i].nombre);
                    convertirAMayuscula(alumnos[i].nombre);

                    alumnos[i].promedio = 0;
                    alumnos[i].nota_maxima = 0;

                    printf("Ingrese las 5 notas del alumno %d (separadas por espacios): ", i + 1);
                    for (int j = 0; j < 5; j++) {
                        scanf("%f", &alumnos[i].notas[j]);
                        alumnos[i].promedio += alumnos[i].notas[j];
                        if (alumnos[i].notas[j] > alumnos[i].nota_maxima) {
                            alumnos[i].nota_maxima = alumnos[i].notas[j];
                        }
                    }
                    alumnos[i].promedio /= 5;
                }
                break;
            case 2:
                printf("--- Buscar alumno por apellido ---\n");
                printf("Ingrese el apellido del alumno a buscar: ");
                scanf(" %[^\n]", buscar_apellido);
                convertirAMayuscula(buscar_apellido);
                for (int i = 0; i < num_alumnos; i++) {
                    if (strstr(alumnos[i].apellido, buscar_apellido) != NULL) {
                        printf("Apellido: %s\n", alumnos[i].apellido);
                        printf("Nombre: %s\n", alumnos[i].nombre);
                        printf("Promedio: %.2f\n", alumnos[i].promedio);
                        printf("Nota máxima: %.2f\n", alumnos[i].nota_maxima);
                        printf("\n");
                    }
                }
                break;
            case 3:
                printf("--- Mostrar promedios ---\n");
                for (int i = 0; i < num_alumnos; i++) {
                    printf("Apellido: %s\n", alumnos[i].apellido);
                    printf("Nombre: %s\n", alumnos[i].nombre);
                    printf("Promedio: %.2f\n", alumnos[i].promedio);
                    printf("\n");
                }
                break;
            case 4:
                printf("--- Mostrar notas máximas ---\n");
                for (int i = 0; i < num_alumnos; i++) {
                    printf("Apellido: %s\n", alumnos[i].apellido);
                    printf("Nombre: %s\n", alumnos[i].nombre);
                    printf("Nota máxima: %.2f\n", alumnos[i].nota_maxima);
                    printf("\n");
                }
                break;
            case 5:
                printf("--- Rendimiento General ---\n");
                int aprobados = 0;
                int sobresalientes = 0;
                for (int i = 0; i < num_alumnos; i++) {
                    printf("Apellido: %s\n", alumnos[i].apellido);
                    printf("Nombre: %s\n", alumnos[i].nombre);
                    printf("Promedio: %.2f\n", alumnos[i].promedio);
                    printf("Nota máxima: %.2f\n", alumnos[i].nota_maxima);
                    if (alumnos[i].promedio >= 6 && alumnos[i].notas[4] >= 6) {
                        printf("Aprobado\n");
                        aprobados++;
                        if (alumnos[i].promedio >= 8) {
                            printf("Sobresaliente\n");
                            sobresalientes++;
                        }
                    } else {
                        printf("Desaprobado\n");
                    }
                    printf("\n");
                }
                printf("Total de alumnos aprobados: %d\n", aprobados);
                printf("Total de alumnos sobresalientes: %d\n", sobresalientes);
                break;
            case 6:
                printf("--- Listado ordenado por nombre y apellido ---\n");
                
                for (int i = 0; i < num_alumnos - 1; i++) {
                    for (int j = 0; j < num_alumnos - i - 1; j++) {
                        // Comparar los apellidos y nombres en mayúsculas
                        char apellido1[50], apellido2[50];
                        char nombre1[50], nombre2[50];
                        
                        strcpy(apellido1, alumnos[j].apellido);
                        strcpy(apellido2, alumnos[j + 1].apellido);
                        strcpy(nombre1, alumnos[j].nombre);
                        strcpy(nombre2, alumnos[j + 1].nombre);
                        
                        convertirAMayuscula(apellido1);
                        convertirAMayuscula(apellido2);
                        convertirAMayuscula(nombre1);
                        convertirAMayuscula(nombre2);
                        
                        int comparacion_apellido = strcmp(apellido1, apellido2);
                        int comparacion_nombre = strcmp(nombre1, nombre2);
                        
                        // Si el apellido es mayor o si el apellido es igual pero el nombre es mayor
                        if (comparacion_apellido > 0 || (comparacion_apellido == 0 && comparacion_nombre > 0)) {
                            intercambiar(&alumnos[j], &alumnos[j + 1]);
                        }
                    }
                }

                for (int i = 0; i < num_alumnos; i++) {
                    printf("Apellido: %s\n", alumnos[i].apellido);
                    printf("Nombre: %s\n", alumnos[i].nombre);
                    printf("Promedio: %.2f\n", alumnos[i].promedio);
                    printf("Nota máxima: %.2f\n", alumnos[i].nota_maxima);
                    printf("\n");
                }
                break;
            case 7:
                printf("--- Salir ---\n");
                return 0;
            default:
                printf("Opción no válida. Por favor, ingrese una opción válida.\n");
                break;
        }
    }
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    3)En un centro médico, se tienen las siguientes especialidades: Alergología, Cardiología, Endocrinología, Geriatría, Pediatría,
Nefrología, Neumología, Neurología, Nutriología, Oftalmología, Traumatología. Se registran los turnos el día anterior para el día
siguiente y al finalizar el día se deben emitir los listados. Construir un programa con menú de opciones con los siguientes
requerimientos:
a. Cada especialidad puede tener hasta 15 pacientes por día. (campo especialidad y campo array de 15 posiciones enteras
inicializadas en 0 (ceros))
b. Hay 3 médicos por especialidad. Cada médico puede tener hasta 5 pacientes por día. Campos: Nombre, apellido,
especialidad y cantidad de pacientes (inicialmente array inicializado en 0 (ceros).
c. La entidad recibe turnos. Se solicita, nombre y apellido, sexo, dni, fecha de nacimiento. Al pedir turno, cada paciente
tiene 2 opciones:
 elegir por especialidad
 elegir por nombre y apellido del médico
d. Se busca disponibilidad por la opción elegida,
 Si es por especialidad , se ofrecen el listado de médicos con turnos disponibles (alguna posición del arrays en 0),
luego se elige entre los médicos con turnos disponibles. Una vez confirmado, se registra con valor 1, la posición
libre del array de especialidad y en el array del médico elegido, también se registra en el arrays de pacientes sus
datos, especialidad y médico elegido.
 Si no hay turnos disponibles para la especialidad se debe emitir un mensaje (“Turnos completos, llame
mañana”);
 Si es por médico, se busca si tiene disponibilidad (alguna posición del array libre ( en 0)), si la tiene se registra
en el arrays con 1 y además en el arrays de la especialidad de ese médico.
 Si el médico tiene todos los turnos ocupados se debe ofrecer disponibilidad con otros médicos.
 En el caso de tener los turnos completos, se debe emitir un mensaje (“Turnos completos, llame mañana”);
e. Al finalizar el proceso se deben emitir los listados correspondientes:
 Listado de cantidad de pacientes por cada médico.
 Listado de cantidad de pacientes por especialidad.
 Listado de pacientes, especialidad y medico.
 Listado de turnos disponibles por especialidad y médico (para saber si se pueden dar turnos urgentes)
 Cantidad de turnos otorgados
 Cantidad de turnos disponibles
El programa debe emitir todos los mensajes necesarios para que el usuario opere en forma eficaz, convertir el nombre y apellido
de cada médico, paciente y especialidad a mayúsculas (ver ejemplo empleo de toupper.c) antes de guardarlo en el array y
controlar al menos 3 errores (ver ejemplo control de errores con cadenas.c). Las búsquedas por nombre y apellido deben
considerar que el usuario puede ingresar esos datos en minúsculas por lo tanto hay que convertir la cadena antes de realizar el
proceso.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ESPECIALIDADES 11
#define MAX_PACIENTES_POR_ESPECIALIDAD 15
#define MAX_MEDICOS_POR_ESPECIALIDAD 3
#define MAX_PACIENTES_POR_MEDICO 5

// Estructuras para pacientes y médicos
typedef struct {
    char nombre[50];
    char apellido[50];
    char sexo;
    char dni[15];
    char fechaNacimiento[11];
} Paciente;

typedef struct {
    char nombre[50];
    char apellido[50];
    char especialidad[50];
    int cantidadPacientes;
    int pacientes[MAX_PACIENTES_POR_MEDICO]; // Índices de pacientes atendidos
} Medico;

// Estructura para especialidades
typedef struct {
    char nombre[50];
    int pacientesAtendidos[MAX_PACIENTES_POR_ESPECIALIDAD]; // Índices de pacientes atendidos
    Medico medicos[MAX_MEDICOS_POR_ESPECIALIDAD];
} Especialidad;

// Funciones para convertir cadenas a mayúsculas
void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    // Declarar aquí las estructuras y variables necesarias
    Especialidad especialidades[MAX_ESPECIALIDADES] = {0}; // Inicializar todas las especialidades
    Paciente pacientes[MAX_PACIENTES_POR_ESPECIALIDAD * MAX_ESPECIALIDADES] = {0}; // Inicializar todos los pacientes
    int totalPacientes = 0;
    int totalTurnos = 0;
    
    while (1) {
        // Menú de opciones
        printf("Menú de opciones:\n");
        printf("1. Registrar turno\n");
        printf("2. Listar cantidad de pacientes por médico\n");
        printf("3. Listar cantidad de pacientes por especialidad\n");
        printf("4. Listar pacientes, especialidad y médico\n");
        printf("5. Listar turnos disponibles por especialidad y médico\n");
        printf("6. Cantidad de turnos otorgados\n");
        printf("7. Cantidad de turnos disponibles\n");
        printf("8. Salir\n");
        printf("Ingrese su opción: ");
        
        int opcion;
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                // Lógica para registrar turno
                break;
            case 2:
                // Lógica para listar cantidad de pacientes por médico
                break;
            case 3:
                // Lógica para listar cantidad de pacientes por especialidad
                break;
            case 4:
                // Lógica para listar pacientes, especialidad y médico
                break;
            case 5:
                // Lógica para listar turnos disponibles por especialidad y médico
                break;
            case 6:
                // Lógica para cantidad de turnos otorgados
                break;
            case 7:
                // Lógica para cantidad de turnos disponibles
                break;
            case 8:
                // Salir del programa
                return 0;
            default:
                printf("Opción no válida. Por favor, ingrese una opción válida.\n");
        }
    }
    
    return 0;
}

/*------------------------------------------------------------------------------------------------------------------------------------------------*/