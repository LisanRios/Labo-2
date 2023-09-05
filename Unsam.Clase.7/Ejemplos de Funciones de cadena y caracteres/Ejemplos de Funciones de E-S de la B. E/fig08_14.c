/* Figura 8.14: fig08_14.c
   Uso de getchar y puts */
#include <stdio.h>

int main()
{ 
   char c;               /* variable para almacenar los caracteres introducidos por el usuario */
   char enunciado[ 80 ]; /* crea un arreglo de caracteres */
   int i = 0;            /* inicializa el contador i */

   /* indica al usuario que introduzca una línea de texto */
   puts( "Introduzca una linea de texto:" ); 

   /* utiliza getchar para leer cada caracter */
   while ( ( c = getchar() ) != '\n') {
      enunciado[ i++ ] = c; 
   } /* fin de while */

   enunciado[ i ] = '\0'; /* termina la cadena */
   
   /* utiliza puts para desplegar el enunciado */
   puts( "\nLa linea introducida es :" ); 
   puts( enunciado );
   
   return 0; /* indica terminación exitosa */

} /* fin de main */


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
