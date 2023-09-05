	/* Figura 8.24: fig08_24.c
   Uso de strcspn */
#include <stdio.h>
#include <string.h>

int main()
{ 
   /* inicializa do apuntadores a char */
   const char *cadena1 = "El valor es 3.14159";
   const char *cadena2 = "1234567890";
   
   printf( "%s%s\n%s%s\n\n%s\n%s%u",
      "cadena1 = ", cadena1, "cadena2 = ", cadena2,
      "La longitud del segmento inicial de cadena1",
      "que no contiene caracteres de cadena2 = ",
      strcspn( cadena1, cadena2 ) );
   
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
