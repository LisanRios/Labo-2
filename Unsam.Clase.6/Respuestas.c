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

#include <stdio.h>
#include <stdlib.h>

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

    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    )
    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/












