#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
1.	Declare un puntero a char llamado B y otro llamado C
2.	Asígnele memoria a B para 30 caracteres
3.	Copie en B una palabra cualquiera
4.	Usando aritmética de punteros, modifique todos los caracteres
    de la cadena para que pase de minúscula a mayúscula.
5.	Usando aritmética de punteros C debe apuntar al carácter de la mitad de la cadena B.
6.	Imprima C, que sale en pantalla?
*/

int main (){
    char B[30]= "universidad de san martin", *C;
    int i, dif = 32;
    printf("Cadena original: %s\n", B);

    printf("\nConvertir a may%cscula con aritm%ctica de punteros:\n",163,130);
    i=0;
    while ((*B != '\0') && (i < strlen(B))){
            printf ("%c",*(B + i) - dif);
            i++;
    }

    printf("\nConvertir a may%cscula con toupper:\n",163);
    for (i=0; i<strlen(B); i++)
    {
        B[i]=toupper(B[i]);
        printf("%c", B[i]);
    }

 printf("\nConvertir a may%cscula con toupper:\n",163);
    i=0;
    while ((*B != '\0') && (i < strlen(B))){
        *B=toupper(*(B+i));
        printf("%c",*B);
        i++;
    }

    getchar();
    return 0;
}
