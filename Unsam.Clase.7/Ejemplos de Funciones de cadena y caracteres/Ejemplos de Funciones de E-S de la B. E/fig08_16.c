/* Figura 8.16: fig08_16.c
   Uso de sscanf */
#include <stdio.h>

int main()
{ 
   char s[] = "31298 87.375"; /* inicializa el arreglo s */
   int x;    /* x valor a introducir */
   double y; /* y valor a introducir */

   sscanf( s, "%d%lf", &x, &y ); 
   
   printf( "%s\n%s%6d\n%s%8.3f\n",
           "Los valores almacenados en el arreglo de caracteres s son:",
           "entero:", x, "double:", y );
   
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
