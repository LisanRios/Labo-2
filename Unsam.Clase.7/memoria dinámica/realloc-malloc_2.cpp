#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int  *numeros, i, cantidad, menos;
    numeros = (int *)malloc(12); // 12 bytes = 3*sizeof(int)
    *numeros = 125;
    *(numeros+1) = 36;
    *(numeros+2) = 853;
    printf("--> %d, direcci%cn --> %d\n", *numeros, 162, (numeros + 0));
    printf("--> %d, direcci%cn --> %d\n", *(numeros+1), 162,(numeros+1));
    printf("--> %d, direcci%cn --> %d\n", *(numeros+2), 162, (numeros+2));
    getchar();

    printf("Cu%cntos valores mas quiere guardar?\n",160);
    scanf("%d", &cantidad);
    numeros = (int *)realloc(numeros, (cantidad+3)*sizeof(int));
    getchar();

    printf("\nEl array se inicia en: %d\n", numeros);

    for(i=3; i<cantidad+3; i++)
    {
        printf("numeros[%d]=", i);
        scanf("%d", (numeros+i));
    }
    getchar();

    printf(" | ");
    printf("\nEl array completo es:\n");
    for(i=0; i<cantidad+3; i++)
        printf("%d --> %d\n",  *(numeros+i), (numeros+i));
    getchar();

    /*
    Cuando se redimensiona la memoria con realloc, si el nuevo tamaño (parámetro size)
    es mayor que el anterior, se conservan todos los valores originales, quedando
    los bytes restantes sin inicializar. Si el nuevo tamaño es menor,
    se conservan los valores de los primeros size bytes. Los restantes también
    se dejan intactos, pero no son parte del bloque regresado por la función.
    */

    printf("Cu%cntos valores quiere quitar\n",160);
    scanf("%d", &menos);
    while (menos > (cantidad+3)) {
        printf("Se excedi%c de la dimensi%cn permitida\n", 162,162);
        printf("Reingrese otro valor\n");
        scanf("%d", &menos);
    }

    if (menos == (cantidad+3)) {
        free(numeros);
        printf("Memoria liberada\n");
    }

    if (menos < cantidad) {
    numeros = (int *)realloc(numeros, ((cantidad+3) - menos)*sizeof(int));
    }

    printf(" | ");
    printf("\nEl array completo es:\n");
    for(i=0; i<((cantidad+3)-menos); i++)
        printf("%d --> %d\n", *(numeros+i), (numeros+i));
    getchar();

    printf("Sigue ah%c?\n", 161);
    printf("%d --> %d\n", *(numeros+ ((cantidad+3)-menos)), (numeros+((cantidad+3)-menos)));
    getchar();
    free(numeros+((cantidad+3)-menos));
    printf("%d\n", (numeros+ ((cantidad+3)-menos)));
    getchar();

/*Al usar realloc, se debería usar un puntero temporal. De lo contrario, podríamos
 tener una fuga de memoria, si es que ocurriera un error en realloc.*/

    free(numeros);
    printf("\nEl bloque ha sido liberado\n");
    numeros=NULL;
    return 0;
}
