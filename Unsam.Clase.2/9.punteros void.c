#include <stdio.h>

int main() {              // =============
  int *ptInt;
  float *ptFloat;
  int var1 = 7, var2 = 27;
  float x = 1.2345, y = 32.14;
  void *general;

  ptInt = &var1;
  *ptInt += var2;
  printf("var1 --> tiene ahora el valor: %d \n",*ptInt);
  general = ptInt;

  ptFloat = &x;
  y += 5 * (*ptFloat);
  printf("y  --> tiene ahora el valor: %.2f \n", y);
  general = ptFloat;
  printf("general --> tiene ahora el valor: %.2f \n", general);
getchar();
return 0;
}
/*
La salida de este programa es:

var1 tiene ahora el valor      34
y tiene ahora el valor         38.3125
general tiene ahora el valor         38.3125
*/
