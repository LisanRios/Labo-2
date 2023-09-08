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
#include <string.h>

void contar_letras(char v[]) {
    int i = 0;
    int cont = 0;
    while (v[i] != '\0') {
        if (v[i] != ' ') {
            cont++;
        }
        i++;
    }
    printf("La cantidad de letras es: %d\n", cont-1);
}

int contar_palabras(char v[]) {
    int i = 0;
    int cont = 0;
    while (v[i] != '\0') {
        if (v[i] == ' ') {
            cont++;
        }
        i++;
    }
    return cont+1;
}

void mayor_vocal(char v[]) {
    int j = 0;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    while (v[j] != '\0') {
        if (v[j] == 'a' || v[j] == 'A') {
            a++;
        }
        if (v[j] == 'e' || v[j] == 'E') {
            e++;
        }
        if (v[j] == 'i' || v[j] == 'I') {
            i++;
        }
        if (v[j] == 'o' || v[j] == 'O') {
            o++;
        }
        if (v[j] == 'u' || v[j] == 'U') {
            u++;
        }
        j++;
    }
    if (a > e && a > i && a > o && a > u) {
        printf("La vocal más frecuente es: a\n");
    } else if (e > a && e > i && e > o && e > u) {
        printf("La vocal más frecuente es: e\n");
    } else if (i > a && i > e && i > o && i > u) {
        printf("La vocal más frecuente es: i\n");
    } else if (o > a && o > i && o > e && o > u) {
        printf("La vocal más frecuente es: o\n");
    } else if (u > a && u > i && u > o && u > e) {
        printf("La vocal más frecuente es: u\n");
    } else
    {
        printf("hay mas de una vocal mayor\n"); 
    }
}

int buscar_caracter(char cadena[], char caracter) {
    int longitud = strlen(cadena);

    for (int i = 0; i < longitud; i++) {
        if (cadena[i] == caracter) {
            return i; // Devolver la posición del caracter si se encuentra
        }
    }
    return -1; // Devolver -1 si el caracter no se encuentra en la cadena
}

void canti_letra_palabra_mas_larga(char v[]) {
    int cant_palabras = contar_palabras(v);
    int i = 0, j = 0, cont1 = 0, cont2 = 0;
    while (i != cant_palabras){
        while (v[j] != ' ' && v[j] != '\0') {
            cont1++;
            j++;
        }
        if (cont1 > cont2) {
            cont2 = cont1;
        }
        cont1 = 0;
        j += 1;
        i++;
    }
    printf("la palabra mas larga tiene %d letras\n", cont2);
}

void leer_letras(char v[], char letra1, char letra2) {
    int i = 0;
    int cont = 0;
    while (v[i] != '\0') {
        if (v[i] == letra1 && v[i+1] == letra2) {
            cont++;
        }
        i++; 
    }
    printf("La cantidad de veces que la primera letra precede a la segunda en el texto es: %d\n", cont);
}

int main() {
    char v[100];
    char letra, letra1, letra2;
    printf("Ingrese un texto: ");
    fgets(v, sizeof(v), stdin);
    printf("El texto ingresado es: %s\n", v);
    contar_letras(v);
    printf("La cantidad de palabras es: %d\n", contar_palabras(v));
    mayor_vocal(v);
    printf("Ingrese una letra a buscar: ");
    scanf(" %c", &letra);
    int posicion = buscar_caracter(v, letra);
    if (posicion != -1) {
        printf("El caracter '%c' se encuentra en la posición %d de la cadena.\n", letra, posicion);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", letra);
    }
    canti_letra_palabra_mas_larga(v);
    printf("Introdusca dos letras de la cadena: ");
    scanf(" %c %c", &letra1, &letra2);
    leer_letras(v, letra1, letra2);
    return 0;
}
*/
/*-------------------------------------------------------------------------------------------------------------------------------*/
/*
    4) Dado un texto de un telegrama que termina en punto:
a. Contar la cantidad de palabras que posean más de 10 letras
b. Informar la cantidad de veces que aparece cada vocal
c. Informar el porcentaje de espacios en blanco.
Nota: Las palabras están separadas por un espacio en blanco
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar_palabras_mas_de_10_letras(char v[]) {
    int i = 0;
    int cont = 0;
    int cont2 = 0;
    while (v[i] != '\0') {
        if (v[i] != ' ' && v[i] != '\n' && v[i] != '\r') {
            cont++;
        } else {
            if (cont > 10) {
                cont2 += 1;
            }
            cont = 0;
        }
        i++;
    }
    if (cont > 10) {
        cont2 += 1;
    }
    return cont2;
}

void contar_vocales(char v[]) {
    int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;
    int i = 0;
    while(v[i] != '\0') {
        switch (v[i]) {
            case 'a':
            case 'A':
                cont_a++;
                break;
            case 'e':
            case 'E':
                cont_e++;
                break;
            case 'i':
            case 'I':
                cont_i++;
                break;
            case 'o':
            case 'O':
                cont_o++;
                break;
            case 'u':
            case 'U':
                cont_u++;
                break;
        }
        i++;
    }

    printf("Cantidad de 'a': %d\n", cont_a);
    printf("Cantidad de 'e': %d\n", cont_e);
    printf("Cantidad de 'i': %d\n", cont_i);
    printf("Cantidad de 'o': %d\n", cont_o);
    printf("Cantidad de 'u': %d\n", cont_u);
}

double calcular_porcentaje_espacios(char v[]) {
    int total_caracteres = strlen(v);
    int espacios = 0;

    for (int i = 0; v[i] != '\0'; i++) {
        if (v[i] == ' ') {
            espacios++;
        }
    }

    return (double)espacios / total_caracteres * 100.0;
}

int main() {
    char v[100];
    printf("Ingrese un texto: ");
    fgets(v, sizeof(v), stdin);
    printf("El texto ingresado es: %s\n", v);
    
    int palabras_mas_de_10_letras = contar_palabras_mas_de_10_letras(v);
    printf("La cantidad de palabras que poseen más de 10 letras es: %d\n", palabras_mas_de_10_letras);
    
    printf("Cantidad de veces que aparece cada vocal:\n");
    contar_vocales(v);
    
    double porcentaje_espacios = calcular_porcentaje_espacios(v);
    printf("Porcentaje de espacios en blanco: %.2lf%%\n", porcentaje_espacios);

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