																				/* Figura 8.10: fig08_10.c
   Uso de strtol */
#include <stdio.h>
#include <stdlib.h>

int main()
{                                 
   const char *cadena = "-1234567abc"; /* inicializa el apuntador cadena */
   
   char *ptrResto; /* crea una apuntador char */
   long x;         /* variable para almacenar la secuencia convertida */
   
   x = strtol( cadena, &ptrResto, 0 );

   printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
           "La cadena original es ", cadena,
           "El valor convertido es ", x,
           "El resto de la cadena original es ", 
           ptrResto,
           "El valor convertido mas 567 es ", x + 567 );

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
