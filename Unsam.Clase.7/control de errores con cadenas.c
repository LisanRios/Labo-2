/*Un array de cadenas puede servirnos para agrupar una serie de mensajes. Por ejemplo,
todos los mensajes de error de un programa. Luego, para acceder a cada mensaje, basta
con usar su número.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int error( int num_err )
{
	char *errores[] = {
		"No se ha producido ningún error",
		"No hay suficiente memoria",
		"No hay espacio en disco",
		"Me he cansado de trabajar hoy"
		};

	printf( "Error n%cmero %i: %s.\n", 163,num_err, errores[num_err] );
	exit( -1 );
}

int main()
{
	error( 3 );
	return 0;
}
