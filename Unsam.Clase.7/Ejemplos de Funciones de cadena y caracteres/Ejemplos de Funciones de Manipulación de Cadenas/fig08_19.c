/* Figura 8.19: fig08_19.c
   Uso de strcat y strncat */
#include <stdio.h>
#include <string.h>

int main()
{ 
   char s1[ 20 ] = "Feliz ";   /* inicializa el arreglo de caracteres s1 */
   char s2[] = "Anio Nuevo ";  /* inicializa el arreglo de caracteres s2 */
   char s3[ 40 ] = "";         /* inicializa a vacío el arreglo de caracteres s3 */
   
   printf( "s1 = %s\ns2 = %s\n", s1, s2 );

   /* concatena s2 y s1 */
   printf( "strcat( s1, s2 ) = %s\n", strcat( s1, s2 ) );

   /* concatena los primeros 6 caracteres de s1 a s3. Coloque '\0'
      después del último caracter */
   printf( "strncat( s3, s1, 6 ) = %s\n", strncat( s3, s1, 6 ) );

   /* concatena s1 a s3 */
   printf( "strcat( s3, s1 ) = %s\n", strcat( s3, s1 ) );

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
