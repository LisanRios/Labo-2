/* Figura 8.32: fig08_32.c
   Uso de memmove */
#include <stdio.h>
#include <string.h>

int main()
{ 
   char x[] = "Hogar Dulce Hogar"; /* inicializa el arreglo de caracteres x */
   
   printf( "%s%s\n", "La cadena en el arreglo x antes de memmove es: ", x ); 
   printf( "%s%s\n", "La cadena en el arreglo x despues de memmove es: ", 
           memmove( x, &x[ 6 ], 11 ) );

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
