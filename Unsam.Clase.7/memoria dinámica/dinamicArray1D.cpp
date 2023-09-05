#include <stdio.h>
#include <stdlib.h>

int main(){
  int *pa = NULL, n, i;

    do
    {
        printf("Ingrese el n%cmero de elementos del array: ",163);
        scanf("%d", &n);
    }
    while(n<=0);

    pa=(int *)malloc(n*sizeof(int));

    if (pa == NULL)
    {
        printf("Insuficiente espacio de memoria\n");
        exit(-1);
    }

    else printf("Se han asignado %u bytes de memoria\n", n*sizeof(int));

    getchar();

    printf("Ingresando elementos aleatorios en el array...\n");
    for ( i = 0; i < n; i++ ) pa[i] = rand();
    printf("Proceso terminado\n");

    getchar();

    printf("Direcciones...\n | ");
    for ( i = 0; i < n; i++ ) printf(" %d | ",&pa[i]);
    printf("\n");

    getchar();

    printf("Contenido...\n | ");
    for ( i = 0; i < n; i++ ) printf(" %d |",pa[i]);
    printf("\n");

    free(pa);    //libero la memoria reservada por malloc()
    getchar();
    return 0;
}

