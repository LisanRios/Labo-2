/* Figura 8.7: fig08_07.c
   Uso atoi */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i; /* variable para almacenar la cadena convertida */

   i = atoi( "2593" ); 

   printf( "%s%d\n%s%d\n",
           "La cadena \"2593\" convertida a int es ", i,
           "El valor convertido menos 593 es ", i - 593 );
   
   return 0; /* indica terminación exitosa  */

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