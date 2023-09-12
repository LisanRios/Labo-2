/*
    1) Escribe un programa con un menú que defina las siguientes funciones y emita los resultados:
a. Cargar un vector de m elementos por teclado. Debes considerar que no podrá superar el máximo de elementos
de vector (m=dimensión).
b. Calcular y emitir la suma de sus elementos.
c. Calcular y emitir el mínimo del vector.
d. Calcular y emitir el promedio de los valores del vector
e. Emitir los valores de aquellos que superaron ese promedio.
f. Emitir los valores del vector que son múltiplos del último número ingresado en el mismo.
g. Emitir el valor máximo e indicar la cantidad de veces que apareció y el número de orden en que fue ingresado.
h. Emitir los valores que son pares.
i. Emitir los valores que están en posiciones impares.
j. Emitir aquellos que estén ubicados en posición par.
k. Recorrer los elementos del vector hasta encontrar el número entero a. Deberá retornar el número de
elementos que ha leído hasta encontrar a.
l. Dado un elemento y dado un vector de enteros, realice una función que devuelva el número de apariciones del
elemento en el vector. Utiliza el ciclo while para esta función.
m. Invertir los elementos del vector sin utilizar otro vector. Por ejemplo, el vector formado por los enteros: 1 2 3,
debe quedar 3 2 1.
*/
/*
#include<stdio.h>

void carga_vector(int v[], int d){
    int i;
    for(i = 0; i < d ; i++){
        printf("Ingrese v[%d]\n", i) ;
        scanf("%d", &v[i]);
    }
}
void emite_vector(int v[], int d){
    int i;
    for(i = 0; i < d ; i++)
        printf("v[%d]=%d\n", i, v[i]);
}

int suma_vector(int v[], int d){
    int i,suma=0;
    for(i = 0; i < d ; i++)
        suma = suma + v[i];
        return suma;
}

int min_vector(int v[], int d){
    int i,min;
    min = v[0];
    for(i = 0; i < d ; i++){
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

int Superior_promedio(int v[], int d){
    int i;
    while(i < d){
        if (v[i] > suma_vector(v,d)/d){
            printf("v[%d]=%d\n", i, v[i]);
        }
        i++;            
    }
}

int multipo_promedio(int v[], int d){
    int i=0;
    int promedio = suma_vector(v,d)/d;
    while(i < d){
        if ((v[i] % promedio)==0)
            printf("v[%d]=%d\n", i, v[i]);
        i++;
    }
}

int max_vector(int v[], int d){
    int i;
    int max = v[0];
    for(i = 0; i < d ; i++){
        if (v[i] > max){
            max = v[i];
        } 
    }
}

void elem_pos_par(int v[], int d){
    int i;
    printf("\nLos elementos en las posiciones pares son:\n");
    for(i = 0; i < d ; i++){
        if (i%2 == 0)
            printf("v[%d]=%d\n", i, v[i]);
    }
}

void elem_pos_inpar(int v[], int d){
    int i;
    printf("\nLos elementos en las posiciones pares son:\n");
    for(i = 0; i < d ; i++){
        if (i%2 == 0)
            return v[i];
        else {
            printf("v[%d]=%d\n", i, v[i]);
        }

    }
}

int pos_par(int v[], int d){
    int i;
    for(i = 0; i < d ; i++){
        if ((v[i] % 2) == 0)
            printf("v[%d]=%d\n", i, v[i]);
    }
}

int pos_inpar(int v[], int d){
    int i;
    for(i = 0; i < d ; i++){
        if ((v[i] % 2) != 0)
            printf("v[%d]=%d\n", i, v[i]);
    }
}

int buscar_pos(int v[], int d, int a){
    int i;
    for(i = 0; i < d ; i++){
        if (v[i] == a)
            printf("v[%d]=%d\n", i, v[i]);
    }
}

int buscar_apa(int v[], int d, int a){
    int i;
    for(i = 0; i < d ; i++){
        if (v[i] == a)
            return i;
    }

}

int invertir_vector(int v[], int d){
    int i = 1;
    while(i != d+1 && i >= 0){
        printf("v[%d]=%d\n", (i-1), v[d-i]);
        i++;
    }
}

int main(){
    const int dim = 5;
    int v[dim];
    int suma, selecion, min, posicion, numero;
    carga_vector(v,dim);
    emite_vector(v,dim);
    printf("MENU\n");
    printf("(1) Suma\n");
    printf("(2) Minimo\n");
    printf("(3) Promedio\n");
    printf("(4) Superar promedio\n");
    printf("(5) Multipos del ultimo numero\n");
    printf("(6) Maximo\n");
    printf("(7) Pares\n");
    printf("(8) Impares\n");
    printf("(9) Posiciones pares\n");
    printf("(10) Posiciones impares\n");
    printf("(11) Recorer elementos hasta encontrar a\n");
    printf("(12) Numero de apariciones\n");
    printf("(13) Invertir elementos\n");
    scanf("%d", &selecion);
    switch (selecion)
    {
        case 1:
            suma = suma_vector(v,dim);
            printf("\nLa suma de los elementos del vector es %d\n", suma);
        break;
        case 2:
            min = min_vector(v,dim);
            printf("\nEl min del vector es %d\n", min);
        break;
        case 3:
            printf("\nEl promedio es %d\n", suma_vector(v,dim)/dim);
        break;
        case 4:
            printf("\nEl numero es %d\n", Superior_promedio(v,dim));
        break;
        case 5:
            printf("\nEl multiplos del ultimo numero del vector\n", multipo_promedio(v,dim));
        break;
        case 6:
            printf("\nEl numero es %d\n", max_vector(v,dim));
        break;
        case 7:
            elem_pos_par(v,dim);
        break;
        case 8:
            elem_pos_inpar(v,dim);
        break;
        case 9:
            pos_par(v,dim);
        break;
        case 10:
            pos_inpar(v,dim);
        break;
        case 11:
            printf("\nEscriba una posicion");
            scanf("%d", &posicion);
            buscar_pos(v,dim,posicion);
        break;
        case 12:
            printf("\nEscriba un numero");
            scanf("%d", &numero);
            printf("El numero de apariciones es %d\n", buscar_apa(v,dim,numero));
        break;
        case 13:
            invertir_vector(v,dim);
        break;
    }
return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    2)
    Dado un vector de dimensión N. Se debe pedir un valor x (float) y la posición i al usuario para almacenar x en la
posición i de un vector. Los valores no se ingresan ordenados por posición. Se debe completar el tamaño del vector.
Si la posición está ocupada se vuelve a pedir el ingreso. Al finalizar, emitir el contenido del vector indicando también
la posición ocupada por cada número. Utiliza el ciclo while y funciones.
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i = 0, pos;
    float x;
    int *v;
    
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);
    
    v = (int *)malloc(n * sizeof(int));
    
    while (i < n) {
        printf("Ingrese el valor: ");
        scanf("%f", &x);
        
        if (i >= 0 && i < n) {
            printf("Ingrese la posicion (0 a %d): ", n - 1);
            scanf("%d", &pos);
            
            if (pos >= 0 && pos < n) {
                v[pos] = x;
                i++;
            } else {
                printf("Posicion invalida\n");
            }
        } else {
            printf("Indice fuera de rango\n");
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    3)
    Completa e implementa el siguiente programa. Después de cada asignación emite dirección y contenido. Comenta
el código:
        int v[5];
        int *p;
        ...
        p = &v[0];
        *p = 1;
        *(p+1) = 2;
        *(p+2) = 3; 
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[5];
    int *p;
    p = &v[0];
    *p = 1;
    *(p+1) = 2;
    *(p+2) = 3;
    for (int i = 0; i < 5; i++)
    {
        printf("v[%d] = %d\n", i, p[i]);
    } 
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    4) Escribe un programa que imprima los elementos de un vector de enteros en orden inverso utilizando punteros (sin
utilizar subíndices [ ] ). Pista: obtener la dirección del último elemento y recorrer en orden inverso.
int v[10] = {1,2,3,4,5,6,7,8,9,10};
int *p;
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    p = &v[0];
    for (int i = 9; i >= 0; i--)
    {
        printf("v[%d] = %d\n", i, *(p+i));
    }
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    5) Escribe una función que reciba un vector de enteros y su tamaño, y retorne la cantidad de números impares que
contiene. Trabaja con notación de punteros y utiliza ciclo while.
//cabecera de función:
int impares (int * v, int tam);
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(int v[], int d){
    int i;
    for(i = 0; i < d ; i++){
        printf("Ingrese v[%d]\n", i) ;
        scanf("%d", &v[i]);
    }
}

void emite_vector(int v[], int d){
    int i;
    for(i = 0; i < d ; i++)
        printf("v[%d]=%d\n", i, v[i]);
}

void pos_inpar(int v[], int d){
    int i=0;
    printf("Inpares: ");
    while(i < d){
        if ((v[i] % 2) != 0){
            printf("v[%d]=%d\n", i, v[i]);
        }
        i++;  
    }
}

int main() {
    int dim;
    printf("Ingrese la dimensión del vector: ");
    scanf("%d", &dim);
    int v[dim];
    carga_vector(v, dim);
    emite_vector(v, dim);
    pos_inpar(v, dim);
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    6)  Escribe una función que retorne un puntero al máximo valor de un vector de “doubles”. Si el vector está vacío debe
retornar NULL.
//cabecera de función:
double * max (double * v, int tam);
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(double v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Ingrese v[%d]: ", i);
        scanf("%lf", &v[i]);
    }
}

void emite_vector(double v[], int tam) {
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %lf\n", i, v[i]);
}

double *max(double *v, int tam) {
    if (tam <= 0) {
        return NULL;
    }
    double *p = v;
    int i;
    for (i = 1; i < tam; i++) {
        if (v[i] > *p) {
            p = &v[i];
        }
    }

    return p; 
}

int main() {
    int dim;
    printf("Ingrese la dimensión del vector: ");
    scanf("%d", &dim);
    double v[dim];
    carga_vector(v, dim);
    emite_vector(v, dim);
    double *p = max(v, dim);
    if (p != NULL) {
        printf("El máximo valor es: %lf\n", *p);
    } else {
        printf("El vector está vacío.\n");
    }

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    7) Dadas las siguientes declaraciones:
int v[3] = {10,20,30};
int *p;
p = v;
Explica que imprimiría el printf en cada caso de los siguientes:
a) (*p)++; printf (“%d”, *p); // printea 11
b) *(p++); printf (“%d”, *p); // printea 20
c) *p++; printf (“%d”, *p); // printea 30
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[3] = {10,20,30};
    int *p;
    p = v;
    (*p)++;
    printf("%d\n", *p);
    *(p++);
    printf("%d\n", *p);
    *p++;
    printf("%d\n", *p);

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    8) Qué emite el siguiente programa?
    #include <stdio.h>
int main(){
int x[3], *puntero;
x[0]=10;
x[1]=20;
x[2]=30;
puntero = x;
printf("%p\n",puntero);
puntero = &x[0];
printf("%p\n",puntero);
printf("%d\n\n",puntero[0]);
printf("%d\n\n",*puntero);
printf("%X\n\n",&puntero);
printf("%X\n\n",&puntero[1]);
printf("%d\n\n",puntero[1]);
printf("%d\n",*(puntero+1));
printf("%d\n",*(puntero+2));
return 0;
} 

//000000c92b5ffbb4
//10
//
//10
//
//2B5FFBA8
//
//2B5FFBB8
//
//20
//
//20
//30
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[3], *puntero;
    x[0]=10;
    x[1]=20;
    x[2]=30;
    puntero = x;
    printf("%p\n",puntero);
    puntero = &x[0];
    printf("%p\n",puntero);
    printf("%d\n\n",puntero[0]);
    printf("%d\n\n",*puntero);
    printf("%X\n\n",&puntero);
    printf("%X\n\n",&puntero[1]);
    printf("%d\n\n",puntero[1]);
    printf("%d\n",*(puntero+1));
    printf("%d\n",*(puntero+2));
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    9) Construye una función tal que dados dos vectores de 5 elementos cada uno, los concatene en un tercer un vector
de 10 elementos.
Ej: V1 = 2-56-7-8-30;
 V2 = 7-80-2-4-13;
 V3 = 2-56-7-8-30-7-80-2-4-13;
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Ingrese v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void emite_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %d\n", i, v[i]);
}


int main() {
    int v1[5];
    int v2[5];
    int v3[10];
    int i= 0;

    carga_vector(v1, 5);
    emite_vector(v1, 5);
    carga_vector(v2, 5);
    emite_vector(v2, 5);

    while(i < 5) {
        v3[i] = v1[i];
    }
    
    while(i < 10) {
        v3[i] = v2[i - 5];
    }

    emite_vector(v3, 10);
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    10) Ídem anterior, pero los elementos de los dos vectores deben emitirse intercalados. Ej:
Ej: V4 = 2-7-56-80-7-2-8-4-30-13;
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Ingrese v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void emite_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %d\n", i, v[i]);
}

int main() {
    int v1[5];
    int v2[5];
    int v3[10];
    int i = 0;
    int j = 0;

    carga_vector(v1, 5);
    emite_vector(v1, 5);
    carga_vector(v2, 5);
    emite_vector(v2, 5);
printf("*******************\n");
    for(i = 0; i < 10; i += 2) {
        v3[i] = v1[i / 2];
        v3[i + 1] = v2[j];
        j++;
    }

    emite_vector(v3, 10);

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    11)Se ingresan los N y M elementos de los arreglos unidimensionales A y B, respectivamente. La computadora emite la
unión de ambos, su diferencia y su intersección.
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Ingrese v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void emite_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %d\n", i, v[i]);
}

void diferencia_vectores(int v1[], int v2[], int v3[], int tam) {
    int i = 0;
    while (i < tam) {
        if (v1[i] != v2[i]) {
            v3[i] = v1[i];
        } else {
            v3[i] = 0;
        }
        i++;
    }
}

void interseccion_vectores(int v1[], int v2[], int v3[], int tam) {
    int i = 0;
    while (i < tam) {
        if (v1[i] == v2[i]) {
            v3[i] = v1[i];
        } else {
            v3[i] = 0;
        }
        i++;
    }
}

int main() {
    int tam1, tam2;
    printf("Ingrese el tamaño del primer vector: ");
    scanf("%d", &tam1);
    printf("Ingrese el tamaño del segundo vector: ");
    scanf("%d", &tam2);

    int v1[tam1], v2[tam2];
    carga_vector(v1, tam1);
    carga_vector(v2, tam2);
    emite_vector(v1, tam1);
    emite_vector(v2, tam2);
   
    int tam3 = tam1 + tam2;
    int v3[tam3];
    
    printf("*******************\n"); 
    printf("Unión\n");
    int i = 0;
    while(i < tam1) {
        v3[i] = v1[i];
        i++;
    }
    i = 0;
    while(i < tam2) {
        v3[i + tam1] = v2[i];
        i++;
    }
    emite_vector(v3, tam3);
    printf("Diferencia\n");
    diferencia_vectores(v1, v2, v3, tam3);
    emite_vector(v3, tam3);
    printf("Intersección\n");
    interseccion_vectores(v1, v2, v3, tam3);
    emite_vector(v3, tam3);
    
    return 0;
}
*/

/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    12)Para probar un congelador, la fábrica registra en un listado, la temperatura en el interior durante todos los días del
mes de junio. Escribe una función que reciba un vector con todas estas temperaturas (generalmente, negativas) y
devuelva la mínima temperatura. Luego escribe una segunda función que diga en qué día del mes se produjo la
temperatura mínima. 
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Ingrese v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void emite_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %d\n", i, v[i]);
}

int *min(int *v, int tam) {
    if (tam <= 0) {
        return NULL;
    }
    int *p = v;
    int i;
    for (i = 1; i < tam; i++) {
        if (v[i] < *p) {
            p = &v[i];
        }
    }
    return p;
}

int main() {
    int v1[5];
    printf("ingrese la temperatura: ");
    carga_vector(v1, 5);
    printf("las temperaturas son: ");
    emite_vector(v1, 5);
    printf("minima temperatura: %d\n", *min(v1, 5));
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    13) Aritmética de punteros. Investiga el siguiente programa y comenta que emite la última instrucción:
        int B[] = {3,4,1,2,7,12,-4};
        float f = 4.234, *ptf;
        *(B+3) = *B + 15;
        ptf = &f;
        *B = (int)(*ptf);
        f = *ptf + 20;
        *(B + 5) = (int)(*ptf); // que emite por pantalla B[], f, ptf?
    ********
        //B[0] = 4
        //B[1] = 4
        //B[2] = 1
        //B[3] = 18
        //B[4] = 7
        //B[5] = 24
        //B[6] = -4
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
        int i = 0;
        int B[] = {3,4,1,2,7,12,-4};
        float f = 4.234, *ptf;
        *(B+3) = *B + 15;
        ptf = &f;
        *B = (int)(*ptf);
        f = *ptf + 20;
        *(B + 5) = (int)(*ptf);
        while (i<7)
        {
            printf("B[%d] = %d\n", i, B[i]);
            i++;
        }
        
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    14)14. Qué emite el siguiente programa:
#include <stdio.h>
#define SIZE 5
void mystery (int *, int *);
main () {
inti;
int x[SIZE] = {2,4,6,8,10};
int y[SIZE] = {1,3,5,7,9};
int *xPtr = NULL;
int *yPtr = NULL;
mystery (x, y);
for (i=0; i<SIZE; i++) { printf ("%d\t", x[i]); }
printf ("\n");
for (i=0; i<SIZE; i++) { printf ("%d\t", y[i]); }
printf ("\n");
return 0;
}
void mystery (int *n1, int *n2)
{
inti;
for (i=0; i<SIZE; i++) *(n1+i) = 2 * *(n2+i);
}
    **********
    //2       6       10      14      18
    //1       3       5       7       9

*/
/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void mystery (int *, int *);
main () {
    int i;
    int x[SIZE] = {2,4,6,8,10};
    int y[SIZE] = {1,3,5,7,9};
    int *xPtr = NULL;
    int *yPtr = NULL;
    mystery (x, y);
    for (i=0; i<SIZE; i++) { printf ("%d\t", x[i]); }
    printf ("\n");
    for (i=0; i<SIZE; i++) { printf ("%d\t", y[i]); }
    printf ("\n");
    return 0;   
}
void mystery (int *n1, int *n2)
{
    int i;
    for (i=0; i<SIZE; i++) *(n1+i) = 2 * *(n2+i);
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    15) Construye un programa que a partir de dos vectores de enteros con sus valores ordenados crecientemente, cree un
tercer vector, también con los datos ordenados en forma creciente. Los dos vectores que se pretenden fusionar no
tendrán elementos repetidos en sí mismos, pero entre ellos pueden tener elementos comunes. En este caso, no
debe haber repeticiones en el vector que resulte de su fusión.
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Ingrese v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void emite_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %d\n", i, v[i]);
}

void combinar_vectores(int v1[], int v2[], int v3[], int tam1, int tam2) {
    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else if (v2[j] < v1[i]) {
            v3[k++] = v2[j++];
        } else {  // Si los elementos son iguales, solo añadir uno de ellos
            v3[k++] = v1[i++];
            j++;
        }
    }

    // Copiar los elementos restantes de v1 (si los hay)
    while (i < tam1) {
        v3[k++] = v1[i++];
    }

    // Copiar los elementos restantes de v2 (si los hay)
    while (j < tam2) {
        v3[k++] = v2[j++];
    }
}

int main() {
    int tam1, tam2;

    printf("Ingrese la dimensión del primer vector: ");
    scanf("%d", &tam1);

    printf("Ingrese la dimensión del segundo vector: ");
    scanf("%d", &tam2);

    int v1[tam1];
    int v2[tam2];
    int v3[tam1 + tam2]; 

    printf("Ingrese valores para el primer vector:\n");
    carga_vector(v1, tam1);

    printf("Ingrese valores para el segundo vector:\n");
    carga_vector(v2, tam2);

    printf("Primer vector ingresado: \n");
    emite_vector(v1, tam1);

    printf("Segundo vector ingresado: \n");
    emite_vector(v2, tam2);

    combinar_vectores(v1, v2, v3, tam1, tam2);

    // Ordenar el tercer vector de menor a mayor
    int temp;
    for (int i = 0; i < tam1 + tam2 - 1; i++) {
        for (int j = 0; j < tam1 + tam2 - i - 1; j++) {
            if (v3[j] > v3[j + 1]) {
                // Intercambiar elementos si están en el orden incorrecto
                temp = v3[j];
                v3[j] = v3[j + 1];
                v3[j + 1] = temp;
            }
        }
    }

    printf("Tercer vector fusionado y ordenado de menor a mayor: \n");
    emite_vector(v3, tam1 + tam2);

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    16)Se dispone de un vector de números enteros de tamaño N, ordenados en forma creciente. Se desea conocer si un
número dado introducido desde el teclado se encuentra en la lista. En caso afirmativo, averiguar su posición y
emitirla por pantalla. En caso negativo se desea insertarlo en la posición adecuada y posteriormente mostrar la
posición por pantalla. Utilizar funciones y un menú.
*/
/*
#include <stdio.h>
#include <stdlib.h>

void carga_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Ingrese v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void emite_vector(int v[], int tam) {
    int i;
    for (i = 0; i < tam; i++)
        printf("v[%d] = %d\n", i, v[i]);
}

void buscar_vector(int v[], int tam, int num) {
    int i = 0;
    while(i < tam) {
        if (v[i] == num) {
            printf("El número %d se encuentra en la posición %d\n", num, i);
        } 
        i++;   
    }
    printf("El número %d no se encuentra en el vector\n", num);
    printf("Se insertará en la posición %d\n", i);
    v[i] = num;
}

int main() {
    int n, num;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);
    int array[n];
    printf("Ingrese los valores del vector: ");
    carga_vector(array, n);
    printf("El vector ingresado es: ");
    emite_vector(array, n);
    printf("Ingrese el número a buscar: ");
    scanf("%d", &num);
    buscar_vector(array, n, num);
    emite_vector(array, n+1);
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    17)Escribe un programa en el que se defina un vector de 10 punteros a float, se lean diez números en las ubicaciones
en las que hacen referencia cada uno de los punteros del vector de punteros. Cuando este completo, se sumen
todos los números y se almacene el resultado en una dirección a la que haga referencia un puntero ajeno al vector.
El programa deberá mostrar el contenido de todas las variables, tanto los punteros como los datos de tipo float.
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *punteros[10]; 
    float suma = 0; 
    float *resultado; 

    for (int i = 0; i < 10; i++) {
        punteros[i] = (float *)malloc(sizeof(float));
        printf("Ingrese un número para la posición %d: ", i );
        scanf("%f", punteros[i]);
        suma += *punteros[i];
    }

    // Asignar la dirección de resultado al puntero ajeno al vector
    resultado = &suma;

    for (int i = 0; i < 10; i++) {
        printf("punteros[%d] = %f\n", i, *punteros[i]);
    }
    printf("La suma de los números es: %f\n", *resultado);
    return 0;
}
*/

/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    18) Considerando las siguientes declaraciones y sentencias:
int array[] = {1,2,3,4,5,6};
int *puntero, x;
puntero = array;
puntero++;
*puntero = *puntero + 6;
puntero = puntero + 3;
puntero = puntero-puntero[-2];
x = puntero - array;
a) ¿Cuál es el valor de x?
a. 1, 2, 3 ó 4?
b) ¿Cual es el valor de array[1]?
a. 2, 4, 6 ú 8?

RTA: a) 1
     b) 8
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[] = {1,2,3,4,5,6};
    int *puntero, x;
    puntero = array;
    puntero++;
    *puntero = *puntero + 6;
    puntero = puntero + 3;
    puntero = puntero-puntero[-2];
    x = puntero - array;
    printf("x = %d\n", x);
    printf("array[1] = %d\n", array[1]);
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
