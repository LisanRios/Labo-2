/*
    1) Ejecuta el siguiente programa y responde:
     Qué realiza cada función predefinida?
     Cuántos parámetros necesita cada una de esas
    funciones?
    -la raiz de 16
    -1
*/
/*
#include <iostream>
#include <math.h>
int main()
{
printf("%lf", sqrt(floor(fabs(-16.8))));
    getchar();
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------*/
/*
    2) El siguiente programa lee dos números enteros del teclado y calcula e imprime el mayor de ellos:
    (*)Convierte el programa en una función que reciba ambos números como parámetros de entrada y devuelva el mayor de ellos como
    resultado.
*/
/*
#include <stdio.h>

int calcularMaximo(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main() {
    int a, b, maximo;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d%d", &a, &b);

    maximo = calcularMaximo(a, b);

    printf("\nEl maximo de %d y %d es %d\n", a, b, maximo);

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------*/
/*
    3) El siguiente programa calcula el factorial de un número:
    (*)Modifícalo transformándolo en una función que reciba el número como parámetro de entrada y devuelva el resultado como salida.
Utiliza el código que se proporciona a continuación
*/
/*
#include <iostream>
#include <math.h>

long factorial(int n){
    long factorial = 1;

    if (n == 0)
        return 1;
    else
        for (int i=1; i<=n; i++)
        factorial = factorial * i;
    return factorial;
        
}
int main () {
    int n;
    printf ("\nIntroduzca un numero entero positivo: ");
    scanf ("%d", &n);
    printf ("\nEl factorial de %d es: %ld",n, factorial(n));
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------*/
/*
    4. El siguiente programa calcula la potencia de un número entero x. 
    Modifícalo transformándolo en una función que reciba los valores de x y n comos parámetro de entrada y devuelva el
resultado como salida.
*/
/*
#include <iostream>
#include <math.h>
double calcularPotencia(double x, int n) {
    double pot = 1.0;
    for (int i = 0; i < n; i++) {
        pot = pot * x;
    }
    return pot;
}

int main() {
    double x;
    int n;
    printf("Introduzca la base y el exponente: ");
    scanf("%lf%d", &x, &n);
    
    double resultado = calcularPotencia(x, n);

    printf("\nLa potencia es %lf\n", resultado);

    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------*/
/*
    5. El siguiente programa incompleto imprime todas las tablas de multiplicar del 1 al 10.
    Completa el programa escribiendo la función tabla_multiplicar que imprime la tabla de multiplicar del número que recibe
como parámetro.
*/
/*
#include <iostream>
#include <math.h>
int tabla_multiplicar(int i){
    printf ("\nTabla de multiplicar del %d:\n", i);
    for (int j=1; j<=10; j++){
        printf("%d x %d = %d\n", i, j, i*j);
    }
}

int main() {
    int i;
    printf ("Introduzca un numero entero positivo: ");
    scanf("%d", &i);
    tabla_multiplicar(i);
    return 0;
}
*/    
/*--------------------------------------------------------------------------------------------------*/
/*
    6) Sea el siguiente programa incompleto:
    (*) Completa el programa escribiendo la función suma_intervalo que calcula la suma de todos los números enteros comprendidos
entre los dos parámetros de entrada, ambos inclusive.

    main () {
        int x1, x2, suma;
        printf ("\nIntroduce dos valores: ");
        scanf ("%d%d", &x1, &x2);
        suma = suma_intervalo(x1, x2);
        printf ("\nLa suma de los valores del intervalo es: %d", suma);
    }

*/
/*
#include <iostream>
#include <math.h>

int suma_intervalo(int x1, int x2){
    int suma = 0;
    if (x1>x2){
        while (x1>=x2){
            suma = suma + x2;
            x2++;
        }
    } else {
        while (x1<=x2){
            suma = suma + x1;
            x1++;
        }  
    }
    return suma;
}

int main() {
    int x1, x2, suma;
        printf ("\nIntroduce dos valores: ");
        scanf ("%d%d", &x1, &x2);
        suma = suma_intervalo(x1, x2);
        printf ("\nLa suma de los valores del intervalo es: %d", suma);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------*/
/*
    7) Escribe una función que imprima la pirámide
                        1
                       121
                      12321
                     1234321
                    123454321
(*)La declaración de la función será la siguiente: void piramide (int niveles);
siendo niveles el número de filas de la pirámide (5 en el ejemplo).
*/
/*
#include <iostream>
#include <math.h>

void piramide(int niveles){
    for (int i = 1; i <= niveles; i++) {
        for (int j = 1; j <= niveles - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}

int main() {
    int niveles;
    printf ("\nIntroduce el numero de niveles de la piramide: ");
    scanf ("%d", &niveles);
    piramide(niveles);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------*/
/*
    8) Escribe la función booleana PRIMO, emite “verdadero” si un número dado es primo.
*/
/*
#include <iostream>
#include <math.h>

int PRIMO(int n){
    for (int i = 2; i < n; i++) {
        if (n % i == 0){
            printf("El numero %d no es primo\n", n);
            return 0;
        } else {
            printf("El numero %d es primo\n", n);
            return 0;
        }   
    }
}

int main() {
    int n;
    printf ("\nIntroduce un numero entero: ");
    scanf ("%d", &n);
    if (PRIMO(n))
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------*/
/*
    9. Escribe la función booleana MULTIPLO, que recibe dos valores enteros y emite “verdadero” si el primero es múltiplo del
segundo.
*/
/*
#include <iostream>
#include <math.h>

int MULTIPLO(int a, int b){
    if (a>b){
        if (a % b == 0){
            printf("El numero %d es multiplo de %d\n", a, b);
        } else {
            printf("El numero %d no es multiplo de %d\n", a, b);
        }
    } else {
        if (b % a == 0){
            printf("El numero %d es multiplo de %d\n", b, a);
        } else {
            printf("El numero %d no es multiplo de %d\n", b, a);
        }
    }
    return 0;           
}

int main() {
    int a, b;
    printf ("\nIntroduce dos numeros enteros: ");
    scanf ("%d", &a);
    scanf ("%d", &b);
    MULTIPLO(a, b);    
    return 0;
}
*/
/*----------------------------------------------------------------------------------------------*/
/*
    10. Escribe la función FIBO, que emite el n-ésimo término de la sucesión de Fibonacci: Sucesión de Fibonacci: 1,1,2,3,5,8,13
*/
/*
#include <iostream>
#include <math.h>

int FIBO(int n){
    int a=0, b=1, c;
    for(int i=1;i<=n;i++) {
        c=a+b;
        a=b;
        b=c;    
        printf("%d, ",a);
    }

    return 0;
}

int main() {
    int n;
    printf ("\nIntroduce un numero entero: ");
    scanf ("%d", &n);   
    FIBO(n);
    return 0;
}
*/
