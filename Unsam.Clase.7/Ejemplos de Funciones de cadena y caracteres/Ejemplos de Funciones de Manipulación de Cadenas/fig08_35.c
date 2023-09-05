/* Figura 8.35: fig08_35.c
   Uso de memset */
#include <stdio.h>
#include <string.h>

int main()
{ 
   char cadena1[ 15 ] = "BBBBBBBBBBBBBB"; /* inicializa cadena1 */
   
   printf( "cadena1 = %s\n", cadena1 );
   printf( "cadena1 despues de memset = %s\n", memset( cadena1, 'b', 7 ) );

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
