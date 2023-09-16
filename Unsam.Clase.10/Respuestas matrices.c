/*
    1) Escribe un programa que almacene en una matriz los números impares del 1 al 50 y los
imprima. 
*/
/*

#include <stdio.h>

int main(){
    int matriz[10][10]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30},{31,32,33,34,35},{36,37,38,39,40},{41,42,43,44,45},{46,47,48,49,50}};
    int count = 10;
    int count2 = 5;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count2; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    2)  Se ingresa una matriz de NxM componentes. Se emite por pantalla:
a. la cantidad de ceros que contiene
b. el valor máximo de cada columna.
c. el elemento mínimo de toda la matriz y las posiciones en que aparece.
d. el promedio de la matriz
e. el promedio de cada columna
f. los promedios de cada fila, e indica qué filas tienen el promedio máximo.
g. el menor y mayor elemento de esa matriz y sus posiciones.
h. devuelva el número de elementos negativos, iguales a cero y positivos que hay en
ella.
*/
/*
#include <stdio.h>

void cargarMatriz(int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Ingrese el valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void cant_ceros(int n, int m, int matriz[n][m]) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == 0) {
                cont++;
            }
        }
    }
    printf("La cantidad de ceros es: %d\n", cont);
}

void max_columnas(int n, int m, int matriz[n][m]) {
    for (int j = 0; j < m; j++) {
        int maximo = matriz[0][j];
        for (int i = 1; i < n; i++) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
            }
        }
        printf("El valor máximo de la columna %d es: %d\n", j, maximo);
    }
}

void minimo_y_posiciones(int n, int m, int matriz[n][m]) {
    int minimo = matriz[0][0];
    int fila_min = 0;
    int columna_min = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                fila_min = i;
                columna_min = j;
            }
        }
    }
    
    printf("El valor mínimo de la matriz es: %d\n", minimo);
    printf("Se encuentra en la posición [%d][%d]\n", fila_min, columna_min);
}

void promedio(int n, int m, int matriz[n][m]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += matriz[i][j];
        }
    }
    float promedio = (float)sum / (n * m);
    printf("El promedio de la matriz es: %.2f\n", promedio);
}

void promedio_columnas(int n, int m, int matriz[n][m]) {
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matriz[i][j];
        }
        float promedio = (float)sum / n;
        printf("El promedio de la columna %d es: %.2f\n", j, promedio);
    }
}

void promedio_filas(int n, int m, int matriz[n][m]) {
    int fila_max_promedio = 0;
    float max_promedio = -1;
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += matriz[i][j];
        }
        float promedio = (float)sum / m;
        printf("El promedio de la fila %d es: %.2f\n", i, promedio);
        
        if (promedio > max_promedio) {
            max_promedio = promedio;
            fila_max_promedio = i;
        }
    }
    
    printf("La fila con el promedio máximo es la fila %d\n", fila_max_promedio);
}

void min_y_max(int n, int m, int matriz[n][m]) {
    int minimo = matriz[0][0];
    int fila_min = 0;
    int columna_min = 0;
    
    int maximo = matriz[0][0];
    int fila_max = 0;
    int columna_max = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                fila_min = i;
                columna_min = j;
            }
            
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
                fila_max = i;
                columna_max = j;
            }
        }
    }
    
    printf("El valor mínimo de la matriz es: %d\n", minimo);
    printf("Se encuentra en la posición [%d][%d]\n", fila_min, columna_min);
    
    printf("El valor máximo de la matriz es: %d\n", maximo);
    printf("Se encuentra en la posición [%d][%d]\n", fila_max, columna_max);
}

void contar_tipos_numeros(int n, int m, int matriz[n][m]) {
    int negativos = 0;
    int ceros = 0;
    int positivos = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] < 0) {
                negativos++;
            } else if (matriz[i][j] == 0) {
                ceros++;
            } else {
                positivos++;
            }
        }
    }
    
    printf("Número de elementos negativos: %d\n", negativos);
    printf("Número de elementos iguales a cero: %d\n", ceros);
    printf("Número de elementos positivos: %d\n", positivos);
}

int main() {
    int n, m;
    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &n);
    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", &m);
    
    int matriz[n][m];
    
    cargarMatriz(n, m, matriz);
    cant_ceros(n, m, matriz);
    max_columnas(n, m, matriz);
    minimo_y_posiciones(n, m, matriz);
    promedio(n, m, matriz);
    promedio_columnas(n, m, matriz);
    promedio_filas(n, m, matriz);
    min_y_max(n, m, matriz);
    contar_tipos_numeros(n, m, matriz);
    
    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    3)  
*/
/*
#include <stdio.h>

int main(){
    
}
*/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    4)  
*/
/*
#include <stdio.h>

int main(){
    
}
*/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    5)  
*/
/*
#include <stdio.h>

int main(){
    
}
*/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    6)  
*/
/*
#include <stdio.h>

int main(){
    
}
*/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    7)  
*/
/*
#include <stdio.h>

int main(){
    
}
*/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*
    8)  
*/
/*
#include <stdio.h>

int main(){
    
}
*/
/*--------------------------------------------------------------------------------------------------------------------------------------------*/