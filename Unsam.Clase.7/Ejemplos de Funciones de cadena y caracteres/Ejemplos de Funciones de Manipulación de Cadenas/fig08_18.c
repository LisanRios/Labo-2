/* Figura 8.18: fig08_18.c
   Uso de strcpy y strncpy */
#include <stdio.h>
#include <string.h>

int main()
{ 
   char x[] = "Feliz cumpleanios a ti"; /* inicializa el arreglo de caracteres x */
   char y[ 25 ]; /* crea el arreglo de caracteres y */
   char z[ 15 ]; /* crea el arreglo de caracteres z */
   
   /* contenido de la copia de x dentro de y */
   printf( "%s%s\n%s%s\n", 
      "La cadena en el arreglo x es: ", x,
      "La cadena en el arreglo y es: ", strcpy( y, x ) );

   /* copia los primeros 17 caracteres de x dentro z. No copian el 
      caracter nulo */
   strncpy( z, x, 17 ); 

   z[ 17 ] = '\0'; /* termina la cadena z */
   printf( "La cadena en el arreglo z es: %s\n", z );

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