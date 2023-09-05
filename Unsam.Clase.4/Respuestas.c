/*
    11. Dado el siguiente código
    main() {
        int a=1, b=2;
        mmm (___a, ___b);
        printf ("%d,%d", a, b);
    }
    void mmm (___ x, ___ y){
        ___x=___y+1;
        ___y=___y+___x;
    }

    Si el resultado impreso es: 1 y 5 (1,5) y teniendo en cuenta que algunos de los vacíos pueden no contener nada, indica cuál
de las siguientes afirmaciones es cierta:

   | No | En la línea 10 hay que colocar un total de tres *
   | No | En la línea 7 las dos variables x e y son de tipo pint 3
   | No | En la línea 9 hay que colocar un * delante de la variable x
   | Si | En la línea 4 hay que colocar un & delante de la variable b
   | No | Hay más de una respuesta correcta

*/
/*----------------------------------------------------------------------------------------------------------------------------------*/
/*
   12. Desarrolla una función que emita los múltiplos de n menores que m. Tanto n como m serán dos parámetros de entrada de
la función.
*/
/*
#include <stdio.h>

void multiplos(int n, int m) {

    for (int i = 1; n * i < m; i++) {
        printf("%d\n", n * i);
    }
}

int main() {

    int n, m;
    printf("Escriba dos números: n y m, donde n es el múltiplo y m es el límite.\n");
    scanf("%d %d", &n, &m);
    multiplos(n, m);

    return 0;
}
*/
/*----------------------------------------------------------------------------------------------------------------------------------*/
/*
    13. Construye una función que imprima la suma de los cuadrados de los n primeros números naturales, siendo n un valor
recibido como parámetro.
*/
/*
#include <stdio.h>
cuadrados(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d^2 = %d\n", i, i * i);
    }
    return 0;
}

int main() {
    int n;
    printf("Escriba un número: ");
    scanf("%d", &n);
    cuadrados(n);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    14. Escribe dos funciones: Cada una de ellas debe calcular la superficie de un rectángulo en función de la base y la altura
(ambos datos tipo int). La primera función llamada area1() recibe los argumentos por valor y la segunda, area2(), por
referencia. Los resultado se deben imprimir en la función main()
*/
/*
#include <stdio.h>

int area1(int base, int altura){
    return base * altura;
}

int area2(int * base, int * altura){
    return *base * *altura;
}

int main() {
    int base, altura;
    printf("Escriba la base del rectángulo: ");
    scanf("%d", &base);
    printf("Escriba la altura del rectángulo: ");
    scanf("%d", &altura);
    printf("La superficie del rectángulo es: %d\n", area1(base, altura));
    printf("La superficie del rectángulo es: %d\n", area2(&base, &altura));

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    15. Sea el siguiente código
    void mmm (int ___);
    main() { 
        int a,b;
        mmm (___a);
        mmm (___b);
        printf ("%d", a+b);
    }
    void mmm (int ___ x) {
        scanf ("%d", ___x);
    }

    Si se introducen desde el teclado los valores 1 y 2, el resultado en pantalla es un 3. Teniendo en cuenta que algunas de las líneas en
blanco pueden no contener nada, indique cuántos símbolos & y * faltan en el código.

    | SI | Faltan dos * y dos &
    | NO | Faltan dos * y tres &
    | NO | No falta nada
    | NO | Faltan tres * y dos &
    | NO | Faltan tres & y ningún *
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    16. Escribe una función:
    void maxmin (int x1, int x2, int * max, int * min);

     que reciba como parámetros de entrada dos números enteros x1 y x2 y devuelva a través de los parámetros de
    salida max y min el máximo y el mínimo, respectivamente, de ambos números.
     Modifica la función anterior para que calcule también el valor medio de ambos números. El nuevo prototipo de la
    función será ahora el siguiente: void maxmin (int x1, int x2, int * max, int * min, int * media);
*/
/*
#include <stdio.h>

void maxmin(int x1, int x2, int *max, int *min){
    if (x1 > x2){
        *max = x1;
        *min = x2;
        printf("El valor máximo es: %d\n", *max);
        printf("El valor mínimo es: %d\n", *min);
    } else {
        *max = x2;
        *min = x1;
        printf("El valor máximo es: %d\n", *max);
        printf("El valor mínimo es: %d\n", *min);
    }
}

int main() {
    int x1, x2, *max = NULL, *min = NULL;
    printf("Escriba dos números enteros: ");
    scanf("%d %d", &x1, &x2);
    maxmin(x1, x2, &max, &min);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    17. Realiza una función que reciba como parámetros dos números enteros y los devuelva ordenados conteniendo el primer
parámetro el mayor de los dos números y el segundo el menor de ellos. El prototipo de la función es el siguiente:
void ordena_dos_numeros (int mayor, int menor);
*/
/*
#include <stdio.h>

void ordena_dos_numeros (int mayor, int menor){
    if (mayor > menor){
        printf("El mayor es: %d\n", mayor);
        printf("El menor es: %d\n", menor);
    } else {
        printf("El mayor es: %d\n", menor);
        printf("El menor es: %d\n", mayor);
    }
}	

int main() {
    int mayor, menor;
    printf("Escriba dos números enteros: ");
    scanf("%d %d", &mayor, &menor);
    ordena_dos_numeros(mayor, menor);

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    18. Realiza una función que reciba como parámetros tres números enteros y los devuelva ordenados. El prototipo de la
función es el siguiente: void ordena_tres_numeros (int * mayor, int * medio, int * menor);
*/
/*
#include <stdio.h>

void ordena_tres_numeros (int * mayor, int * medio, int * menor){
    if (*mayor > *medio && *mayor > *menor){
        if (*medio > *menor)
        {
            printf("El mayor es: %d\n", *mayor);
            printf("El medio es: %d\n", *medio);
            printf("El menor es: %d\n", *menor);
        }
        else
        {
            printf("El mayor es: %d\n", *mayor);
            printf("El medio es: %d\n", *menor);
            printf("El menor es: %d\n", *medio);   
        }
        
    }
    else if (*medio > *mayor && *medio > *menor){
        if (*mayor > *menor)
        {
            printf("El mayor es: %d\n", *medio);
            printf("El medio es: %d\n", *mayor);
            printf("El menor es: %d\n", *menor);
        }
        else
        {
            printf("El mayor es: %d\n", *medio);
            printf("El medio es: %d\n", *menor);
            printf("El menor es: %d\n", *mayor);   
        }
    }
    else{
        if (*medio > *mayor)
        {
            printf("El mayor es: %d\n", *menor);
            printf("El medio es: %d\n", *medio);
            printf("El menor es: %d\n", *mayor);
        }
        else
        {
            printf("El mayor es: %d\n", *menor);
            printf("El medio es: %d\n", *mayor);
            printf("El menor es: %d\n", *medio);   
        }
    }
}

int main() {
    int mayor, medio, menor;
    printf("Escriba tres números enteros: ");
    scanf("%d %d %d", &mayor, &medio, &menor);
    ordena_tres_numeros(&mayor, &medio, &menor);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    19. Escribe una función que reciba como parámetro de entrada un número entero y devuelva como resultado el número de
cifras del número. Para ello, considera lo siguiente: dado un número cualquiera, como por ejemplo el 173, se tiene que 
173 / 10 = 17 (todas las cifras salvo la última). Habrá que repetir pues este proceso hasta que el número resultante de la
división tenga una sola cifra.
*/
/*
#include <stdio.h>

int contarCifras(int numero) {
    int cifras = 0;

    while (numero != 0) {
        numero /= 10; 
        printf("%d, ", numero);
        cifras++;
    }

    return cifras;
}

int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    int cifras = contarCifras(numero);
    printf("El número de cifras en %d es: %d\n", numero, cifras);

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    20. Escribe un programa teniendo en cuenta las siguientes funciones:
· lee_opcion lee la opción deseada y comprueba su validez.
· menú muestra el menú en la pantalla.
· cuadrado, circulo, rectángulo, trapecio, triángulo calculan la superficie correspondiente.
========================================
==CÁLCULO DE SUPERFICIES (versión 1.0)==
1. Cuadrado (lado*lado)
2. Círculo (pi*radio*radio)
3. Rectángulo (base*altura)
4. Trapecio (base1+base2)*altura/2)
5. Triángulo (base*altura)/2)
0. Salir del programa
*/
/*
#include <stdio.h>

float lee_opcion(int opcion) {
    float resultado;
    switch (opcion) {
        case 1: {
            float lado1, lado2;
            printf("Ingrese los lados del cuadrado: ");
            scanf("%f %f", &lado1, &lado2);
            resultado = lado1 * lado2;
            break;
        }
        case 2: {
            float radio;
            printf("Ingrese el radio del círculo: ");
            scanf("%f", &radio);
            resultado = 3.1416 * radio * radio;
            break;
        }
        case 3: {
            float base, altura;
            printf("Ingrese la base y la altura del rectángulo: ");
            scanf("%f %f", &base, &altura);
            resultado = base * altura;
            break;
        }
        case 4: {
            float base1, base2, altura;
            printf("Ingrese las bases y la altura del trapecio: ");
            scanf("%f %f %f", &base1, &base2, &altura);
            resultado = (base1 + base2) * altura / 2;
            break;
        }
        case 5: {
            float base, altura;
            printf("Ingrese la base y la altura del triángulo: ");
            scanf("%f %f", &base, &altura);
            resultado = base * altura / 2;
            break;
        }
        default:
            resultado = 0;
    }
    return resultado;
}

int main() {
    int opcion;
    printf("=============================\n");
    printf("==CÁLCULO DE SUPERFICIES==\n");
    printf("=============================\n");
    printf("1. Cuadrado (lado*lado)\n");
    printf("2. Círculo (pi*radio*radio)\n");
    printf("3. Rectángulo (base*altura)\n");
    printf("4. Trapecio (base1+base2)*altura/2)\n");
    printf("5. Triángulo (base*altura)/2)\n");
    printf("0. Salir del programa\n");
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);
    
    if (opcion >= 1 && opcion <= 5) {
        float superficie = lee_opcion(opcion);
        printf("La superficie es: %.2f\n", superficie);
    } else if (opcion == 0) {
        printf("Saliendo del programa...\n");
    } else {
        printf("Opción inválida\n");
    }

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    21. Construir una función que permita procesar un número desconocido de datos de productos vendidos, e ingresar por cada
uno:
1. identificación del producto (número entero > 0 y menor a 1000), y por cada producto ingresado:
2. precio de costo, ej: 5.30
3. precio de venta, ej: 9.50
4. cantidad vendida, ej: 25
El ciclo finaliza con identificación del producto 0 (cero).
o Calcular y emitir:
a) por cada producto, cuánto dinero le deja de ganancia la venta del mismo. Ej: 9.5 – 5.3 * 25 = 105;
b) La función main debe emitir el total de productos procesados (no la cantidad vendida) y las ganancias
que se obtuvieron por esas ventas. Ej: se procesaron 43 productos, las ganancias obtenidas fueron $2398.
*/
/*
#include <stdio.h>

float calcularGanancia(float precioVenta, float precioCosto, int cantidad) {
    return (precioVenta - precioCosto) * cantidad;
}

int main() {
    int idProducto, totalProductos = 0;
    float precioCosto, precioVenta, gananciaTotal = 0;
    printf("Ingrese los datos de los productos vendidos:\n");

    while (1) {
        printf("Identificación del producto (0 para finalizar): ");
        scanf("%d", &idProducto);

        if (idProducto == 0) {
            break;
        }

        printf("Precio de costo: ");
        scanf("%f", &precioCosto);

        printf("Precio de venta: ");
        scanf("%f", &precioVenta);

        printf("Cantidad vendida: ");
        int cantidad;
        scanf("%d", &cantidad);

        float gananciaProducto = calcularGanancia(precioVenta, precioCosto, cantidad);
        gananciaTotal += gananciaProducto;
        totalProductos++;
    }

    printf("\nSe procesaron %d productos, las ganancias obtenidas fueron $%.2f.\n", totalProductos, gananciaTotal);

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    22. Se desea hacer un estudio de inflación real. El procedimiento es el siguiente, se pedirá por pantalla ingresar para cada
artículo:
Código de artículo (1 ó 2)
Precio anterior
Precio actual
(Esta operación se realizará para los 2 artículos).
Ingresados los datos, se pide:
1-Calcular la variación porcentual del precio de ambos artículos que es igual a: (valor inicial / valor final) -1 * 100
2- Informar cuál de los 2 artículos tuvo mayor índice de inflación.
3- Si la inflación del artículo 1 es mayor al 5% avisarlo con un cartel “MUCHA INFLACIÓN”. De no superar el 5%, se pide
hacer el mismo chequeo para el artículo 2
*/
/*
#include <stdio.h>

void calcularVariacion(float precioAnterior, float precioActual) {
    float variacionPorcentual = ((precioAnterior / precioActual) - (-1)) * 100;
    printf("Variacion porcentual: %.2f%%\n", variacionPorcentual);
    if (variacionPorcentual > 5)
    {
        printf("MUCHA INFLACIÓN");
    }
    
}

int main() {
    float precioAnterior, precioActual, variacionPorcentual;
    printf("Ingrese el precio anterior: ");
    scanf("%f", &precioAnterior);
    printf("Ingrese el precio actual: ");
    scanf("%f", &precioActual);
    calcularVariacion(precioAnterior, precioActual);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    23. Se desea organizar en el departamento de alumnos información referida a nuevos ingresantes en las 2 carreras de
informática (llamaremos RED y PRG a las 2 carreras) y la asignación de aulas. Para ello serán necesarios los siguientes datos:
- Cantidad de hombres y mujeres que ingresaron a cada carrera (son 4 datos)
- Capacidad de las 2 aulas con las que contaremos para dictar las clases de ambas carreras.
Se pide entonces:
 Calcular e informar el total general de alumnos que formarán parte ambas carreras (un solo valor agrupado)
 Informar con un cartel que diga …si
a. “HAY LUGAR” si la disponibilidad de las 2 aulas es suficiente para albergar a ambas carreras, es decir, ver si es
posible que entren ambos cursos en alguna de las 2 aulas
b. “PARCIAL” si la disponibilidad de las 2 aulas puede albergar a una de las 2 carreras, pero no a la otra o
c. “SIN LUGAR” si la disponibilidad de las 2 aulas es insuficiente
*/
/*
#include <stdio.h>

int calcularTotalAlumnos(int cantidadHombres, int cantidadMujeres) {
    return cantidadHombres + cantidadMujeres;
}

void verificarAulas(int capacidadAulas, int totalAlumnos) {
    if (capacidadAulas >= totalAlumnos) {
        printf("HAY LUGAR\n");
    } else {
        printf("SIN LUGAR\n");
    }
}

int main() {
    int cantidadHombresRed, cantidadMujeresRed, cantidadHombresPrg, cantidadMujeresPrg;
    int capacidadAulas;

    printf("Ingrese la cantidad de hombres en la carrera RED: ");
    scanf("%d", &cantidadHombresRed);
    printf("Ingrese la cantidad de mujeres en la carrera RED: ");
    scanf("%d", &cantidadMujeresRed);
    printf("Ingrese la cantidad de hombres en la carrera PRG: ");
    scanf("%d", &cantidadHombresPrg);
    printf("Ingrese la cantidad de mujeres en la carrera PRG: ");
    scanf("%d", &cantidadMujeresPrg);
    
    printf("Ingrese la capacidad de las aulas: ");
    scanf("%d", &capacidadAulas);

    int totalAlumnosRed = calcularTotalAlumnos(cantidadHombresRed, cantidadMujeresRed);
    int totalAlumnosPrg = calcularTotalAlumnos(cantidadHombresPrg, cantidadMujeresPrg);
    int totalAlumnos = totalAlumnosRed + totalAlumnosPrg;

    printf("El total general de alumnos es: %d\n", totalAlumnos);
    printf("El total de alumnos en la carrera RED es: %d\n", totalAlumnosRed);
    printf("El total de alumnos en la carrera PRG es: %d\n", totalAlumnosPrg);

    printf("Estado de las aulas: ");
    verificarAulas(capacidadAulas, totalAlumnos);

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------*/
/*
    24. Nos presentamos en el cajero de un banco el cual tiene únicamente un teclado de 9 dígitos y un botón verde de
confirmación. Luego de ingresar nuestra clave (esto no lo tendremos en cuenta) nos ofrece 4 opciones que se activan según
la siguiente tabla
1- Sacar Dinero
2- Depositar Dinero
3- Consultar Saldo
4- Cambiar la clave
Se pide diseñar un programa que permita seleccionar alguna de las 4 opciones y simule la siguiente operatoria:
a. En caso de sacar dinero, el importe deseado.
b. Si se desea depositar dinero el algoritmo deberá solicitar el importe únicamente en pesos
c. En caso de consulta de Saldo, consultar si quiere ver el de “Caja de ahorro” o “Cuenta Corriente” (opciones 1 y 2
respectivamente)
d. En caso de cambio de clave, solicitar la vieja clave y la nueva (obviamente son números) y avisar si la misma es
repetida (o sea la nueva igual a la vieja)
*/
/*
#include <stdio.h>

void sacarDinero() {
    float saldo = 0; 
    float importe;
    
    printf("Ingrese el importe que desea sacar: ");
    scanf("%f", &importe);

    if (importe > saldo) {
        printf("Saldo insuficiente\n");
    } else {
        saldo -= importe;
        printf("Retiró %.2f pesos. Saldo restante: %.2f pesos\n", importe, saldo);
    }
}

void depositarDinero() {
    float saldo = 0; 
    float importe;

    printf("Ingrese el importe que desea depositar: ");
    scanf("%f", &importe);

    saldo += importe;
    printf("Depósito exitoso. Saldo actual: %.2f pesos\n", saldo);
}

void consultarSaldo() {
    int opcion;
    printf("Seleccione la cuenta:\n");
    printf("1. Caja de ahorro\n");
    printf("2. Cuenta corriente\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Su saldo en Caja de ahorro es de $1500.00\n"); 
    } else if (opcion == 2) {
        printf("Su saldo en Cuenta Corriente es de $2000.00\n"); 
    } else {
        printf("Opción inválida\n");
    }
}

void cambiarClave() {
    int viejaClave, nuevaClave;

    printf("Ingrese la vieja clave: ");
    scanf("%d", &viejaClave);

    printf("Ingrese la nueva clave: ");
    scanf("%d", &nuevaClave);

    if (nuevaClave == viejaClave) {
        printf("La nueva clave no puede ser igual a la vieja\n");
    } else {
        printf("Clave cambiada exitosamente\n");
    }
}

int main() {
    int opcion;

    printf("Bienvenido al cajero automático\n");
    printf("Opciones disponibles:\n");
    printf("1. Sacar Dinero\n");
    printf("2. Depositar Dinero\n");
    printf("3. Consultar Saldo\n");
    printf("4. Cambiar la clave\n");

    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            sacarDinero();
            break;
        case 2:
            depositarDinero();
            break;
        case 3:
            consultarSaldo();
            break;
        case 4:
            cambiarClave();
            break;
        default:
            printf("Opción inválida\n");
            break;
    }

    return 0;
}
*/








