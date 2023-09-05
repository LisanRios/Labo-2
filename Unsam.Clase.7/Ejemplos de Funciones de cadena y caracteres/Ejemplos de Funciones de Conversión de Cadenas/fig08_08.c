/* Figura 8.8: fig08_08.c
   Uso de atol */
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   long l; /* variable para almacenar la cadena converitida */

   l = atol( "1000000" ); 
   
   printf( "%s%ld\n%s%ld\n",
           "La cadena \"1000000\" convertida a long int es ", l,
           "El valor convertido, dividido entre 2 es ", l / 2 );
   
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
