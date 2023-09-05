/* Figura 8.6: fig08_06.c
   Uso de atof */
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   double d; /* variable para almacenar la cadena convertida */

   d = atof( "99.0" ); 

   printf( "%s%.3f\n%s%.3f\n",
           "La cadena \"99.0\" convertida a double es ", d,
           "El valor convertido dividido entre 2 es ", 
           d / 2.0 );

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
