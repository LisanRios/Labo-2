#include <stdio.h>

int main() {
int n;
int * p;
//int ** pp;

n=8;
p=&n;

printf(" \n p es %p\n", p);
printf(" \n *p es %d\n", *p);

//pp=&p;
//printf(" \n &pp es %p\n", &pp);
//printf(" \n pp es %p\n", pp);
//printf(" \n *pp es %p\n", *pp);
//printf(" \n **pp es %d\n", **pp);

getchar();
return 0;
}




/*
printf("La variable puntero p accede al valor de n\n");
printf("%d\n", *p);

printf("\nCompruebo con n\n");
printf("%d\n\n", n);

*/



/*
p++;
printf("p es %p\n", p);
printf("*p es %d\n", *p);
p++;
printf("p es %p\n", p);
printf("*p es %d\n", *p);
p++;
printf("p es %p\n", p);
printf("*p es %d\n", *p);
*/

/*

m = *p + 3;
printf("m: %d\n", m);

m = m - *p;
printf("m: %d\n", m);

m = *p / *p;
printf("m: %d\n", m);

*p = *p * *p;
printf("*p: %d\n", *p);

printf("\nCuanto vale n ahora?\n");
printf("...vale %d\n\n", n);

*/


//p++;
//printf(" \n\n despues de p++, p es %p\n\n", p);
//printf(" *p es %d\n\n", *p);
//
//(*p)++;
//printf(" \n despues de (*p)++, *p es %d\n\n", *p);
//
//*p++;
//printf(" \n despues de *p++, p es %p\n", p);
//printf(" \n despues de *p++, *p es %d\n\n", *p);
//
//n=8;
//p=&n;

//printf("La variable puntero p guarda la direccion de la variable n\n");
//printf("que es en hexa: %p\n", p);
//printf("que es en decimal: %d\n\n", p);
//
//printf("\nCompruebo la direccion con &n\n");
//printf("en hexa es: %p\n", &n);
//printf("en decimal es: %d\n\n", &n);
//
//printf(" \n\n p es %p\n\n", p);
//printf(" &n es %p\n\n", &n);
//printf(" n es %d\n\n", n);
//printf(" &p es %p\n\n", &p);
//printf(" *p es %d\n\n", *p);
