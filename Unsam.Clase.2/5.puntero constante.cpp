#include <stdio.h>

int main(){

//FORMA CORRECTA:
int a=10;
int b=20;

//objeto variable y puntero constante
int * const p = &a;
*p = 15; // Correcto: El valor apuntado es variable.
//ERROR: p es constante.
//p=&b;



//FORMA INCORRECTA:
int aa=15;
int bb=25;
//objeto constante y puntero variable
const int * p = &aa;
*p = 15; // ERROR: el valor apuntado por p es constante.
p=&bb; //Correcto: p pasa a apuntar a un nuevo objeto.


getchar();
return 0;
}
