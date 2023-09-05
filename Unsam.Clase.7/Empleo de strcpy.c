#include <stdio.h>
#include <string.h>
int main()
{
    char cad_1[30] = "Me encantan las cadenas en C";
    char cad_2[30];

    printf( "Cadena 1: %s\n", cad_1 );
    printf( "Cadena 2: %s\n", cad_2 );

    strcpy( cad_2, cad_1 );

    printf( "Cadena 1: %s\n", cad_1 );
    printf( "Cadena 2: %s\n", cad_2 );

    printf("Tama%co de cadena 1: %d\n", 164,strlen(cad_1));
    printf("Tama%co de cadena 2: %d\n", 164, strlen(cad_2));

    return 0;
}
