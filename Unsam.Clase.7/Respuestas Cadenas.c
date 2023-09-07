/*
    1) Escribe un programa que busque un carácter determinado en una cadena ingresada por teclado. Debe emitir un número
con la posición de la cadena en que fue encontrado el carácter (la primera posición es la cero), si no se encontró mostrará
-1. Los datos de entrada serán la cadena y el carácter a buscar. 
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscar_caracter(char cadena[], char caracter) {
    int longitud = strlen(cadena);

    for (int i = 0; i < longitud; i++) {
        if (cadena[i] == caracter) {
            return i; // Devolver la posición del caracter si se encuentra
        }
    }

    return -1; // Devolver -1 si el caracter no se encuentra en la cadena
}

int main() {
    char caracter;
    char cadena[100];

    printf("Ingrese la cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Ingrese un caracter a buscar: ");
    scanf(" %c", &caracter);

    int posicion = buscar_caracter(cadena, caracter);
    if (posicion != -1) {
        printf("El caracter '%c' se encuentra en la posición %d de la cadena.\n", caracter, posicion);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    2) El acrónimo de un nombre consiste en una cadena formada por las letras iniciales mayúsculas de cada palabra que
aparece en dicho nombre. Se pide escribir un programa que, a partir de un nombre introducido por el usuario, construya
una nueva cadena con su acrónimo y la muestre por pantalla. Por ejemplo, para el nombre “Informática Básica” se emitirá
la cadena “IB”, mientras que para el nombre “Fundamentos de Informática” se emitirá “FI”.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void acronimo(char nombre[], char acro[]) {
    int i = 0;
    int j = 0;
    while (nombre[i] != '\0') {
        if (nombre[i] >= 65 && nombre[i] <= 90) {
            acro[j] = nombre[i];
            j++;
        } 
        i++;
    }
    acro[j] = '\0';
    printf("El acrónimo es: %s\n", acro);

}

int main() {
    char nombre[50];
    char acro[10];
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    acronimo(nombre, acro);
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    3) Construye un programa que permita ingresar un texto y resuelve:
a. Contar la cantidad de letras de un texto que termina en punto (los textos se leen letra por letra).
b. Contar la cantidad de palabras, separadas por uno o más espacios, de un texto que termina en punto.
c. Dado un texto terminado en punto, determinar cuál es la vocal que aparece con mayor frecuencia.
d. Dado un texto se pide determinar cuántas veces aparece determinada letra, leída de teclado.
e. Dado un texto averiguar qué cantidad de letras tiene la palabra más larga.
f. Leer dos letras de teclado y luego un texto. Se pide determinar la cantidad de veces que la primera letra
precede a la segunda en el texto
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    4)    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    5)    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    6)    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    7)    
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/