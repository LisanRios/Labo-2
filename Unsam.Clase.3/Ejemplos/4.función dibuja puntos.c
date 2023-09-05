#include<stdio.h>

void DibujarPuntos( int numPuntos ) {
int i; // i de la función DibujarPuntos
for ( i = 1; i <= numPuntos; i++ )
printf(".");
numPuntos = numPuntos + 2;
printf("%i",numPuntos);
}

int main() {
int i; // i del programa principal
for ( i = 1; i <= 5; i++ ) {
DibujarPuntos( i );
printf("%i-\n",i);
}
return 0;
}
