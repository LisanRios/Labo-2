/* Figura 8.4: fig08_04.c
  Uso de las funciones isspace, iscntrl, ispunct, isprint, isgraph */
#include <stdio.h>
#include <ctype.h>

int main()
{
   printf( "%s\n%s%s%s\n%s%s%s\n%s%s\n\n", 
       "De acuerdo con isspace:", 
       "Nueva linea", isspace( '\n' ) ? " es un " : " no es un ",
       "caracter espacio en blanco", "Tabulador horizontal",
       isspace( '\t' ) ? " es un " : " no es un ", 
       "caracter espacio en blanco",
       isspace( '%' ) ? "% es un " : "% no es un ",
       "caracter espacio en blanco" );

   printf( "%s\n%s%s%s\n%s%s\n\n", "De acuerdo con iscntrl:", 
       "Nueva linea", iscntrl( '\n' ) ? " es un " : " no es un ",
       "caracter de control", iscntrl( '$' ) ? "$ es un " : 
       "$ no es un ", "control character" );

   printf( "%s\n%s%s\n%s%s\n%s%s\n\n", 
       "De acuerdo con ispunct:",
       ispunct( ';' ) ? "; es un " : "; no es un ", 
       "punctuation character",
       ispunct( 'Y' ) ? "Y es un " : "Y no es un ",
       "punctuation character",
       ispunct( '#' ) ? "# es un " : "# no es un ",
       "punctuation character" );

   printf( "%s\n%s%s\n%s%s%s\n\n", "De acuerdo con isprint:",
       isprint( '$' ) ? "$ es un " : "$ no es un ", 
       "printing character", 
       "Alerta", isprint( '\a' ) ? " es un " : " no es un ",
       "caracter de impresion" );

   printf( "%s\n%s%s\n%s%s%s\n",  "De acuerdo con isgraph:",
       isgraph( 'Q' ) ? "Q es un " : "Q no es un ",
       "caracter de impresion diferente a un espacio",
       "Espacio", isgraph( ' ' ) ? " es un " : " no es un ",
       "caracter de impresion diferente a un espacio" );

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