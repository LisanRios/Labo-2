/*
    1) Se ingresa en un vector 20 valores float en forma aleatoria y la computadora los ordena y emite.
a) por selección
b) por burbujeo mejorado
c) por inserción

*/
/*
#include <stdio.h>
#include <stdlib.h>

void ord_seleccion(int *vector, int taille)
{
    int actual, mas_pequeno, j, temp;
    for (actual = 0; actual < taille - 1; actual++)
    {
        mas_pequeno = actual;
        for (j = actual + 1; j < taille; j++)
            if (vector[j] < vector[mas_pequeno])
                mas_pequeno = j;
        temp = vector[actual];
        vector[actual] = vector[mas_pequeno];
        vector[mas_pequeno] = temp;
    }
    printf("seleccion: ");
    for (int i = 0; i < taille; i++){
        printf("%d ", vector[i]);
    }
}

void ord_burbuja(int *vector, int taille)
{
    int actual, j, temp;
    for (actual = 0; actual < taille - 1; actual++)
    {
        for (j = 0; j < taille - 1; j++)
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
    }
    printf("burbuja :");
    for (int i = 0; i < taille; i++){
        printf("%d ", vector[i]);
    }
}

void ord_insercion(int *vector, int taille)
{
    int actual, j, temp;
    for (actual = 1; actual < taille; actual++)
    {
        temp = vector[actual];
        j = actual - 1;
        while (j >= 0 && vector[j] > temp)
        {
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = temp;
    }
    printf("insercion: ");
    for (int i = 0; i < taille; i++){
        printf("%d ", vector[i]);
    }
}

int main() {
    int v[20];
    printf("Ingrese 20 valores: ");
    for (int i = 0; i < 20; i++){
        scanf("%d", &v[i]);
    }
    ord_seleccion(v, 20);
    printf("\n");
    ord_burbuja(v, 20);
    printf("\n");
    ord_insercion(v, 20);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
    2) Define una función que reciba un vector de enteros V y su tamaño TAM y devuelva si V está ordenado o no.
*/
/*
#include <stdio.h>
#include <stdlib.h>

void esta_ordenado(int *v, int tam) {
    int a[tam];
    for (int i = 0; i < tam; i++) {
        a[i] = v[i];
    }

    ord_seleccion(a, tam);

    // Comprueba si a está ordenado comparando elemento por elemento
    int ordenado = 1;
    for (int i = 0; i < tam; i++) {
        if (a[i] != v[i]) {
            ordenado = 0;
            break;
        }
    }

    if (ordenado) {
        printf("ordenado\n");
    } else {
        printf("no ordenado\n");
    }
}

int ord_seleccion(int *vector, int taille) {
    int actual, mas_pequeno, j, temp;
    for (actual = 0; actual < taille - 1; actual++) {
        mas_pequeno = actual;
        for (j = actual + 1; j < taille; j++)
            if (vector[j] < vector[mas_pequeno])
                mas_pequeno = j;
        temp = vector[actual];
        vector[actual] = vector[mas_pequeno];
        vector[mas_pequeno] = temp;
    }
    return 0;
}

int main() {
    int tam;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tam);

    int v[tam];

    printf("Ingrese los valores: ");
    for (int i = 0; i < tam; i++) {
        scanf("%d", &v[i]);
    }

    esta_ordenado(v, tam);
    return 0;
}

*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
    3)Se desea comparar el funcionamiento de los diferentes métodos de búsqueda. Para ello se pretende buscar el número 27 en el
siguiente vector: 1 4 5 12 25 27 31 42 43 56 73 76 78 80 99. Indica los pasos que seguirían los siguientes algoritmos:
a) Búsqueda secuencial.
b) Búsqueda binaria.

*/
/*
#include <stdio.h>
#include <stdlib.h>

void bus_secuencial(int *v, int tam) {
    for (int i = 0; i < tam; i++) {
        if (v[i] == 27) {
            printf("El número 27 se encuentra en la posición %d del vector\n", i);
        }
    }
}

int busquedaBinaria( const int b[], int claveDeBusqueda, int bajo, int alto, int d ){
   int central;
   while ( bajo <= alto ) {
     central = ( bajo + alto ) / 2;
     if ( claveDeBusqueda == b[ central ] ) {
         return central;
      }
      else if ( claveDeBusqueda < b[ central ] ) {
         alto = central - 1;
      }
      else {
         bajo = central + 1;
      }
   }
   return -1;
}

int main() {
    int v[]={1,4,5,12,25,27,31,42,43,56,73,76,78,80,99};
    printf("a) Búsqueda secuencial.\n");
    bus_secuencial(v,27);
    printf("b) Búsqueda binaria.\n");
    printf("El número 27 se encuentra en la posición %d del vector\n", busquedaBinaria(v,27,0,7,8));
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
    4) Escribe un programa para ordenar un vector de 1000 números. Además de emitir la lista ordenada, el programa debe
determinar si hubo repetición en el número máximo. Si lo hubo, deberá emitir cuántas veces se presento el número más
grande.
*/
/*
#include <stdio.h>
#include <stdlib.h>

int ord_seleccion(int *vector, int taille) {
    int actual, mas_pequeno, j, temp;
    for (actual = 0; actual < taille - 1; actual++) {
        mas_pequeno = actual;
        for (j = actual + 1; j < taille; j++)
            if (vector[j] < vector[mas_pequeno])
                mas_pequeno = j;
        temp = vector[actual];
        vector[actual] = vector[mas_pequeno];
        vector[mas_pequeno] = temp;
    }
    return 0;
}

void ordenar_ver_mas_grande(int *v, int tam) {
    ord_seleccion(v, tam);
    int maximo = v[tam - 1];
    int apariciones = 1;
    for (int i = tam - 2; i >= 0; i--) { // Recorre el arreglo en orden inverso
        if (v[i] == maximo) {
            apariciones++;
        } else {
            break; // Ya no es el número máximo, no hay necesidad de seguir buscando
        }
    }
    // Imprime el resultado
    if (apariciones > 1) {
        printf("El número máximo (%d) se repite %d veces.\n", maximo, apariciones);
    } else {
        printf("El número máximo es %d y no se repite.\n", maximo);
    }
}

int main() {
    int v[1000];
    printf("Ingrese 1000 valores: ");
    for (int i = 0; i < 1000; i++){
        scanf("%d", &v[i]);
    }
    ordenar_ver_mas_grande(v, 1000);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
    5)La mediana de un vector ordenado se puede definir así:
 Para un número impar de elementos (ej. vector de 5 posiciones), es el valor del elemento que está en la casilla central.
 Para un número par, es el promedio de los que se hallan en las casillas adyacentes a la mitad.
Así, la mediana de un vector ordenado de 25 números es el numero que se encuentra en la casilla 13, mientras que para un
vector de 24 casillas, es el promedio de los valores situados en las casillas 12 y escribe una función para encontrar la mediana
de un vector (ya ordenado) y emite los resultados.

*/
/*
#include <stdio.h>
#include <stdlib.h>

void mediana(int *v, int tam) {
    int actual, mas_pequeno, j, temp;
    for (actual = 0; actual < tam - 1; actual++) {
        mas_pequeno = actual;

        for (j = actual + 1; j < tam; j++){
            if (v[j] < v[mas_pequeno]){
                mas_pequeno = j;
            }

        temp = v[actual];
        v[actual] = v[mas_pequeno];
        v[mas_pequeno] = temp;
        }
    }
    printf("La mediana es: %d\n", v[tam / 2]);
}

int main() {
    int tam;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tam);
    int v[tam];
    printf("Ingrese valores: ");
    for (int i = 0; i < tam; i++){
        scanf("%d", &v[i]);
    }
    mediana(v, tam);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
    6)La moda o valor modal de una lista de números se define como aquel número que tiene el máximo valor de apariciones en la
lista. Por ejemplo para el conjunto: 72,72,72,75,75,75,78,82,82,82,82,85,85,85,89, la moda es el valor: 82. Escribe una función
que determine el valor modal para un vector de enteros ordenado y una función de búsqueda secuencial de un valor.
*/
/*
#include <stdio.h>
#include <stdlib.h>

int ord_seleccion(int *vector, int taille) {
    int actual, mas_pequeno, j, temp;
    for (actual = 0; actual < taille - 1; actual++) {
        mas_pequeno = actual;
        for (j = actual + 1; j < taille; j++)
            if (vector[j] < vector[mas_pequeno])
                mas_pequeno = j;
        temp = vector[actual];
        vector[actual] = vector[mas_pequeno];
        vector[mas_pequeno] = temp;
    }
    return 0;
}

void valor_modal(int *v, int tam) {
    ord_seleccion(v, tam);
    int cont = 0, cont2 = 0, a = 0, b = 0;
    for (int i = 0; i < tam; i++) { 
        a = v[i];
        if (v[i] == v[i + 1]) {
            cont++;
        } else {
            if (cont > cont2) {
                cont2 = cont;
                b = a;
            }
            cont = 0;
        }
    }
    printf("El número (%d).\n", b);
}

int main() {
    int tam;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tam);
    int v[tam];
    printf("Ingrese valores: ");
    for (int i = 0; i < tam; i++){
        scanf("%d", &v[i]);
    }
    valor_modal(v, tam);
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
