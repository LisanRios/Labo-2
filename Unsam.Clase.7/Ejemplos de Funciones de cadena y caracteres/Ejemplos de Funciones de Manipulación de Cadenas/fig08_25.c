/* Figura 8.25: fig08_25.c
   Uso de strpbrk */
#include <stdio.h>
#include <string.h>

int main()
{ 
   const char *cadena1 = "esta es una prueba"; /* inicializa el apuntador a char */
   const char *cadena2 = "precaucion";         /* inicializa el apuntador a char */
   
   printf( "%s\"%s\"\n'%c'%s\n\"%s\"\n", 
      "De los caracteres en ", cadena2,
      *strpbrk( cadena1, cadena2 ),
      " aparece primero en ", cadena1 );

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
