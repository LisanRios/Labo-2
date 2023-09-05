/* Figura 8.26: fig08_26.c
   Uso de strrchr */
#include <stdio.h>
#include <string.h>

int main()
{ 
   /* inicaliza el apuntador a char */
   const char *cadena1 = "Un zoo tiene muchos animales incluso las zebras";

   int c = 'z'; /* caracter a buscar */
   
   printf( "%s\n%s'%c'%s\"%s\"\n",
           "El resto de cadena1 que comienza con la",
           "ultima ocurrencia del caracter ", c,
           " es: ", strrchr( cadena1, c ) );

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
