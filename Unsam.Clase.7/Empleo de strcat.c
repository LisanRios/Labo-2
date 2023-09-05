#include <stdio.h>
#include <string.h>

int main()
{
    char cad_1[ ] = "Me encantan ";
    char cad_2[ ] = "las cadenas en C";

    printf( "cad_1 = %s\n", cad_1 );
    printf( "cad_2 = %s\n", cad_2 );

    strcat( cad_1, cad_2 );

    printf( "cad_1 = %s\n", cad_1 );
    printf( "cad_2 = %s\n", cad_2 );


    return 0;
}
