/* Figura 8.31: fig08_31.c
   Uso de memcpy */
#include <stdio.h>
#include <string.h>

int main()
{ 
   char s1[ 17 ];                    /* crea el arreglo de carateres s1 */
   char s2[]  = "Copia esta cadena"; /* inicializa el arreglo de caracteres s2 */

   memcpy( s1, s2, 18 ); 
   printf( "%s\n%s\"%s\"\n", 
           "Despues de la copia de s2 en s1 con memcpy,",
           "s1 contiene ", s1 );

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
