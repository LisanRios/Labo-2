/* Figura 8.28: fig08_28.c
   Uso de strstr */
#include <stdio.h>
#include <string.h>

int main()
{ 
   const char *cadena1 = "abcdefabcdef"; /* cadena de búsqueda */
   const char *cadena2 = "def"; /* cadena a buscar */

   printf( "%s%s\n%s%s\n\n%s\n%s%s\n",
      "cadena1 = ", cadena1, "cadena2 = ", cadena2,
      "El resto de cadena1 que comienza con",
      "la primera ocurrencia de cadena2 es: ", 
      strstr( cadena1, cadena2 ) );

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
