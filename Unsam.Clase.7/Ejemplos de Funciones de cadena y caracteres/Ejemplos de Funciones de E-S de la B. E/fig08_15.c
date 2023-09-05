/* Figura 8.15: fig08_15.c
   Uso de sprintf */
#include <stdio.h>

int main()
{ 
   char s[ 80 ]; /* crea un arreglo de caracteres */
   int x;        /* x valor a introducir */
   double y;     /* y valor a introducir */

   printf( "Introduzca un entero y un double:\n" );
   scanf( "%d%lf", &x, &y );

   sprintf( s, "entero:%6d\ndouble:%8.2f", x, y );
   
   printf( "%s\n%s\n", 
           "La salida formateada, almacenada en el arreglo es s es:", s );

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
