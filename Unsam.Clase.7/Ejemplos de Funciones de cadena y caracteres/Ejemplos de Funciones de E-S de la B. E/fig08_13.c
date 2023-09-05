/* Figura 8.13: fig08_13.c
   Uso de gets y putchar */
#include <stdio.h>

void inversa( const char * const ptrS ); /* prototipo */
   
int main()
{  
   char enunciado[ 80 ]; /* crea una arreglo de caracteres */

   printf( "Introduzca una linea de texto:\n" );

   /* utiliza gets para leer una línea de texto */
   gets( enunciado ); 

   printf( "\nLa linea impresa al reves es:\n" );
   inversa( enunciado );

   return 0; /* indica terminación exitosa */

} /* fin de main */

/* imprime recursivamente los caracteres de una cadena en orden inverso */
void inversa( const char * const ptrS )
{  
   /* si es el final de la cadena */
   if ( ptrS[ 0 ] == '\0' ) { /* caso base */
      return; 
   } /* fin de if */ 
   else { /* si no es el fin de la cadena */ 
      inversa( &ptrS[ 1 ] ); /* paso recursivo */

      putchar( ptrS[ 0 ] ); /* utiliza putchar para desplegar los caracteres */
   } /* end else */

} /* fin de la función inversa */



/**************************************************************************
 * (C) Copyright 1992-2004 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
