#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int  *numeros=NULL,*tmp1=NULL,*tmp2=NULL;
    int i, cantidad, menos;

    numeros = (int *)malloc(12); // 12 bytes = 3*sizeof(int)

    if (numeros != NULL)
    {
        printf("Bloque Asignado\n");
        *numeros = 125;
        *(numeros+1) = 36;
        *(numeros+2) = 853;
        printf("--> %d, direcci%cn --> %d\n", *numeros, 162, (numeros + 0));
        printf("--> %d, direcci%cn --> %d\n", *(numeros+1), 162,(numeros+1));
        printf("--> %d, direcci%cn --> %d\n", *(numeros+2), 162, (numeros+2));
        getchar();

        printf("\nCu%cntos valores m%cs quiere guardar?\n",160,160);
        scanf("%d", &cantidad);
        tmp1 = (int *)realloc(numeros,(cantidad+3)*sizeof(int));

        if (tmp1 != NULL)
        {
            printf("Bloque reasignado\n");
            printf("\nEl nuevo array se inicia en: %d", tmp1);

            for(i=3; i<cantidad+3; i++)
            {
                printf("\n numeros[%d] = ", i);
                scanf("%d", (tmp1+i));
            }

            getchar();

            printf(" | ");
            printf("\nEl array completo es:\n");
            for(i=0; i<cantidad+3; i++)
                printf("%d --> %d\n",  *(tmp1+i), (tmp1+i));
            getchar();
        }
        else
        {
            printf("La reasignación no ha sido posible\n");

        }
        /*
        Cuando se redimensiona la memoria con realloc, si el nuevo tamaño (parámetro size)
        es mayor que el anterior, se conservan todos los valores originales, quedando
        los bytes restantes sin inicializar. Si el nuevo tamaño es menor,
        se conservan los valores de los primeros size bytes. Los restantes también
        se dejan intactos, pero no son parte del bloque regresado por la función.
        */

        printf("\nCu%cntos valores quiere quitar\n",160);
        scanf("%d", &menos);
        while (menos > (cantidad+3))
        {
            printf("Se excedi%c de la dimensi%cn permitida\n", 162,162);
            printf("Reingrese otro valor\n");
            scanf("%d", &menos);
        }

        if (menos == (cantidad+3))
        {
            free(tmp1);
            printf("Memoria liberada\n");
        }

        if (menos < cantidad)
        {
            tmp2 = (int *)realloc(tmp1, ((cantidad+3) - menos)*sizeof(int));
            if (tmp2 != NULL)
            {
                printf("Bloque reasignado\n");

                printf(" | ");
                printf("\nEl array completo es:\n");
                for(i=0; i<((cantidad+3)-menos); i++)
                    printf("%d --> %d\n", *(tmp2+i), (tmp2+i));
                getchar();
            }
            else
            {
                printf("La reasignación no ha sido posible\n");

            }
            }

            printf("\nSigue ah%c?\n", 161);
            printf("\n\n%d --> %d\n", *(tmp2+ ((cantidad+3)-menos)), (tmp2+((cantidad+3)-menos)));

            /*Al usar realloc, se debería usar un puntero temporal. De lo contrario, podríamos
             tener una fuga de memoria, si es que ocurriera un error en realloc.*/

            free(numeros);
            free(tmp1);
            free(tmp2);
        }
        else
        {
            printf("La asignación no ha sido posible\n");
        }

        return 0;
    }
