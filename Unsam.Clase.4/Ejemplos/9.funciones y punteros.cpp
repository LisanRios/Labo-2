//Muestra el uso de funciones. Emplea cinco funciones además de main()
//main(/) llama a una de ellas y esta a otra, enviando un parametro que se
//altera localmente y se envía a la siguiente función.
//Finaliza emitiendo el valor devuelto por la ultima función, en main();
//con notación de punteros

#include <stdio.h>

int *f1(int *a);
int *f2(int *b);
int *f3(int *c);
int *f4(int *a);
int *f5(int bx);  //parametro pasado  por valor

int main()
 {
   int x = 33, *res;
   printf("En main() x = %d\n\n", x);
   printf("\nSaliendo de main:\n\n");
   res = f1(&x);
   printf("\n\nVolviendo a main() res = %d", *res);
   return 0;
 }
int * f1(int *n)
 {
   int *res;
   puts("\nEn f1():");
   printf("\n\tAl entrar: %d", *n);
   *n += *n;
   res = f2(n);
   return res;   //devuelve una dirección de memoria
  }
int *f2(int *ppp)
 {
   int *res;
   puts("\nEn f2():");
   printf("\n\tAl entrar: %d", *ppp);
   *ppp += *ppp;
   res = f3(ppp);
   return res;   //devuelve una dirección de memoria
  }
int * f3(int *asd)
 {
   int *res;
   puts("\nEn f3():");
   printf("\n\tAl entrar: %d", *asd);
   *asd += *asd;
   res = f4(asd);
   return res;   //devuelve una dirección de memoria
  }
int * f4(int *valor)
 {
   int *res;
   puts("\nEn f4():");
   printf("\n\tAl entrar: %d", *valor);
   *valor  += *valor;
   res = f5(*valor);
   return res;    //devuelve una dirección de memoria
  }
int *f5(int ggg) //ggg no es puntero
 {
   puts("\nEn f5():");
   printf("\n\tAl entrar: %d", ggg);
   ggg += ggg;
   return &ggg; //devuelve una dirección de memoria: la de ggg
  }
