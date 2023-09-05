#include <stdio.h>
#include <stdlib.h>

/*https://stackoverflow.com/questions/12973311/difference-between-stdlib-h-and-malloc-h*/
/*La función malloc reserva un bloque de memoria y devuelve un puntero
void al inicio de la misma. Tiene la siguiente definición:
void *malloc(size_t size);
donde el parámetro size especifica el número de bytes a reservar.
*/
/*La función calloc funciona de modo similar a malloc,
 pero además de reservar memoria, inicializa a 0 la memoria reservada.
 */

int  main()
{
    int  *numeros, i;
    numeros = (int *)malloc(12); // 12 bytes = 3*sizeof(int)
    *numeros = 125;
    *(numeros+1) = 36;
    *(numeros+2) = 853;
    printf("--> %d\n", *numeros);
    printf("--> %d\n", *(numeros+1));
    printf("--> %d\n", *(numeros+2));
    getchar();
    printf("\nEl array se inicia en: %d", numeros);
    getchar();
    printf("\nLa direcci%cn de la primera posici%cn es: %d", 162, 162,numeros + 0);
    getchar();
    printf("\nLa direcci%cn de la segunda posici%cn es: %d", 162, 162, numeros + 1);
    getchar();
    printf("\nLa direcci%cn de la tercera posici%cn es: %d", 162, 162, numeros + 2);
    getchar();

    printf("\n El array completo es:\n");
    printf(" | ");
    for(i=0; i< 3; i++)
        printf("%d | ",  numeros[i]);
    getchar();

    printf("\n El array completo con notaci%cn de punteros es:\n", 162);
    printf(" | ");
    for(i=0; i< 3; i++)
        printf("%d | ",  *(numeros+i));
    getchar();

    free (numeros);
    return 0;
}
