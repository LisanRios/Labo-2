/* Figura 8.29: fig08_29.c
   Uso de strtok */
#include <stdio.h>
#include <string.h>

int main()
{ 
   /* inicializa el arreglo de cadena */
   char cadena[] = "Este es un enunciado con 7 tokens";
   char *ptrToken; /* crea un apuntador char */
   
   printf( "%s\n%s\n\n%s\n",
      "La cadena a dividir en tokens es:", cadena, 
      "Los tokens son:" );
          
   ptrToken = strtok( cadena, " " ); /* comienza la división en tokens del enunciado */

   /* continua la división en tokens hasta que ptrToken se hace NULL */
   while ( ptrToken != NULL ) { 
      printf( "%s\n", ptrToken );
      ptrToken = strtok( NULL, " " ); /* obtiene el siguiente token */
   } /* fin de while */

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
