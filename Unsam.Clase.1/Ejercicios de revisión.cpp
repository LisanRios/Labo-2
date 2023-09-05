/*1)
Pepe empieza con un saldo de $100.000,- que invierte a una tasa anual del 5%. Al finalizar cada año, justo después de
sumar los intereses de ese ciclo, Pepe hará un retiro por $12.000,-. ¿Cuál será el primer año en que, al llegar al final
del período, su saldo no permita semejante retiro? */
/*
#include <iostream>
int main()
{
    float saldo = 100000;
    float tasa = 0.05;
    float retiro = 12000;
    int año = 1;

    while (saldo >= retiro) {
        saldo += saldo * tasa; 
        saldo -= retiro;       

        if (saldo < retiro) {
            break;
        }

        printf("el saldo es de : %f\n", saldo);
        
        año++;
    }

    printf("El primer anho en que el saldo no permita el retiro es: %d\n", año);

    return 0;
}
*/
/*------------------------------------------------------------------------------------*/
/* 2)
    Pedro invierte u$s 100 a una tasa del 8% anual. Jorge invierte u$s 150 al 5% anual. ¿Después de cuántos años la
    cuenta de Pedro rebasará a la de Jorge?
*/
/*
#include <iostream>
int main()
{
    float pedro = 100, jorge = 150;
    float tasaPedro = 0.08, tasaJorge = 0.05;
    int año = 1;

    while (pedro <= jorge) {
        pedro += pedro * tasaPedro;
        jorge += jorge * tasaJorge;     

        if (pedro > jorge) {
            break;
        }

        printf("la tasa de jorge es de : %f\n", jorge);
        printf("la tasa de pedro es de : %f\n", pedro);
        
        año++;
    }

    printf("El primer anho en que el pedro supera a jorge es: %d\n", año);

    return 0;
}
*/
/*------------------------------------------------------------------------------------*/
/* 3)
    Construye un programa que dibuje un gráfico cómo el siguiente, donde la cantidad de asteriscos de cada línea
    corresponde aL número que está a la par:
                            3.  | ***
                                |
                            5.  | *****
                                |
                            7.  | *******
                                |
                            9.  | *********
                                |
*/
/*
#include <iostream>
int main()
{
    int max_numero = 0;

    printf("Ingrese el numero maximo de asteriscos que desea dibujar: \n");
    scanf("%d", &max_numero);

    for (int numero = 3; numero <= max_numero; numero += 2) {
        printf("%2d.    |", numero);
        
        for (int i = 0; i < numero; i++) {
            printf("*");
        }

        printf("\n       |\n");
    }

    return 0;
}
*/
/*------------------------------------------------------------------------------------*/
/* 4)
    Escribe un programa que visualice la siguiente salida:
    zyxwvutsrqponmlkjihgfedcba
    zx
    z
*/
/*
#include <iostream>
int main()
{
    char letra = 'z';

    for (int i = 26; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", letra - j);
        }
        printf("\n");
    }

    return 0;
}
*/
/*------------------------------------------------------------------------------------*/
/* 5)
    Construye un programa que visualice la siguiente salida:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3
    1 2
    1
*/
/*
#include <iostream>
int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/
/*------------------------------------------------------------------------------------*/
/* 6)
    Escribe n programa que imprima la forma de diamante siguiente, puedes utilizar instrucciones printf que impriman (*)
    o espacios en blanco.
                                                        *
                                                      * * *
                                                    * * * * *
                                                 * * * * * * * *
                                                * * * * * * * * *
                                                 * * * * * * * *
                                                    * * * * * 
                                                      * * *
                                                        * 
*/
/*
#include <iostream>
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf("  "); 
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/
/*------------------------------------------------------------------------------------*/
/* 7)
   Realiza un programa que dé como salida lo siguiente:
    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
    *********
    **********

*/
/*
#include <iostream>
int main() {
    int n = 10;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*------------------------------------------------------------------------------------*/
/* 8)
    Construye un programa de gestión para una pequeña compañía que tiene 8 empleados. Cada empleado tiene un
    número de legajo que está entre 111 y 999 (validar el ingreso). Para cada empleado/a, el programa recibe desde el
    teclado el nombre, sexo, horas trabajadas y sueldo por hora (validar el ingreso de horas y sueldo). Y además, por cada
    empleado, se deben descontar 3% por la obra social y 11% para la jubilación, obteniendo así el sueldo neto. Por cada
    empleado ingresado, el programa deberá mostrar en pantalla:
    a. el nombre, sueldo bruto y sueldo neto.
    Al finalizar el programa se debe informar:
    b. el total de pagos para cada sexo,
    c. el sueldo promedio de hombres y sueldo promedio de mujeres,
    d. qué número de legajo obtuvo mayores ingresos,
    e. total descontado de obra social,
    f. total descontado de jubilación,
*/
/*
#include <iostream>
int main() {
    int num_empleados = 8;
    int legajo, horas_trabajadas;
    char nombre[100], sexo;
    float sueldo_hora, sueldo_bruto, sueldo_neto;
    float total_sueldo_hombres = 0, total_sueldo_mujeres = 0;
    int contador_hombres = 0, contador_mujeres = 0;
    int legajo_max_ingresos;
    float max_ingresos = 0;
    float total_descuento_os = 0, total_descuento_jubilacion = 0;

    for (int i = 0; i < num_empleados; i++) {
        printf("Empleado #%d:\n", i + 1);

        do {
            printf("Ingrese el numero de legajo (entre 111 y 999): ");
            scanf("%d", &legajo);
        } while (legajo < 111 || legajo > 999);

        printf("Ingrese el nombre: ");
        scanf("%s", nombre);

        do {
            printf("Ingrese el sexo (M/F): ");
            scanf(" %c", &sexo);
        } while (sexo != 'M' && sexo != 'F');

        printf("Ingrese las horas trabajadas: ");
        scanf("%d", &horas_trabajadas);

        do {
            printf("Ingrese el sueldo por hora: ");
            scanf("%f", &sueldo_hora);
        } while (sueldo_hora <= 0);

        sueldo_bruto = sueldo_hora * horas_trabajadas;
        sueldo_neto = sueldo_bruto - (sueldo_bruto * 0.03) - (sueldo_bruto * 0.11);

        printf("\nNombre: %s\n", nombre);
        printf("Sueldo Bruto: $%.2f\n", sueldo_bruto);
        printf("Sueldo Neto: $%.2f\n", sueldo_neto);

        if (sexo == 'M') {
            total_sueldo_hombres += sueldo_neto;
            contador_hombres++;
        } else {
            total_sueldo_mujeres += sueldo_neto;
            contador_mujeres++;
        }

        if (sueldo_neto > max_ingresos) {
            max_ingresos = sueldo_neto;
            legajo_max_ingresos = legajo;
        }

        total_descuento_os += sueldo_bruto * 0.03;
        total_descuento_jubilacion += sueldo_bruto * 0.11;

        printf("\n");
    }

    float promedio_sueldo_hombres = (contador_hombres > 0) ? total_sueldo_hombres / contador_hombres : 0;
    float promedio_sueldo_mujeres = (contador_mujeres > 0) ? total_sueldo_mujeres / contador_mujeres : 0;

    printf("Resultados al finalizar el programa:\n");
    printf("Total de pagos para hombres: $%.2f\n", total_sueldo_hombres);
    printf("Total de pagos para mujeres: $%.2f\n", total_sueldo_mujeres);
    printf("Sueldo promedio de hombres: $%.2f\n", promedio_sueldo_hombres);
    printf("Sueldo promedio de mujeres: $%.2f\n", promedio_sueldo_mujeres);
    printf("Numero de legajo con mayores ingresos: %d\n", legajo_max_ingresos);
    printf("Total descontado de obra social: $%.2f\n", total_descuento_os);
    printf("Total descontado de jubilacion: $%.2f\n", total_descuento_jubilacion);

    return 0;
}
*/
