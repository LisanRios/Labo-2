/* Figura 8.38: fig08_38.c
   Uso de strlen */
#include <stdio.h>
#include <string.h>

int main()
{
   /* inicializa los 3 apuntadores a char */
   const char *cadena1 = "abcdefghijklmnopqrstuvwxyz";
   const char *cadena2 = "cuatro";
   const char *cadena3 = "Mexico";
   
   printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
      "La longitud de ", cadena1, " es ", (unsigned long) strlen( cadena1 ),
      "La longitud de ", cadena2, " es ", (unsigned long) strlen( cadena2 ),
      "La longitud de ", cadena3, " es ", (unsigned long) strlen( cadena3 ) );

   return 0; /* indica terminación exitosa */

} /* end main */


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
