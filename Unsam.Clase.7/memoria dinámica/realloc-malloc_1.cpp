#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int  *numeros, i, cantidad;
    numeros = (int *)malloc(12); // 12 bytes = 3*sizeof(int)
    *numeros = 125;
    *(numeros+1) = 36;
    *(numeros+2) = 853;
    printf("--> %d, direcci%cn --> %d\n", *numeros, 162, (numeros + 0));
    printf("--> %d, direcci%cn --> %d\n", *(numeros+1), 162,(numeros+1));
    printf("--> %d, direcci%cn --> %d\n", *(numeros+2), 162, (numeros+2));
    getchar();
    printf("\nCu%cntos valores mas quiere guardar?\n",160);
    scanf("%d", &cantidad);
    numeros = (int *)realloc(numeros, (cantidad+3)*sizeof(int));
    getchar();
    printf("\nEl array se inicia en: %d", numeros);

    for(i=3; i<cantidad+3; i++)
    {
        printf("\n numeros[%d] = ", i);
        scanf("%d", (numeros+i));
    }
    getchar();
    printf(" | ");
    printf("\nEl array completo es:\n");
    for(i=0; i<cantidad+3; i++)
        printf("%d --> %d\n",  *(numeros+i), (numeros+i));
    getchar();
    free(numeros);
    return 0;
}
