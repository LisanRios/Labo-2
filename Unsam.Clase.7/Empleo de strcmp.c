#include <stdio.h>
#include <string.h>

int main()
{
    char cad_1[ ] = "Abeja";
    char cad_2[ ] = "Abejita";
    int valor;

    printf( "cad_1 = %s\n", cad_1 );
    printf( "cad_2 = %s\n", cad_2 );

    valor = strcmp( cad_1, cad_2 );

    printf( "\nPrestar atenci%cn a este valor devuelto por strcmp: %d\n ", 162,valor);

    if( valor < 0 )
        printf( " %s es menor que %s\n", cad_1, cad_2 );
    else if( valor > 0 )
        printf( " %s es mayor que %s\n", cad_1, cad_2 );
    else
        printf( "Son iguales\n" );

    return 0;
}
