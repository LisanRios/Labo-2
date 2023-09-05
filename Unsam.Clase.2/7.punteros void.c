#include <stdio.h>

int main() {
int x=5;
int * p;
void * q;

p=&x;
printf("El valor apuntado por p es %d\n", *p);

q=(void *)p;

printf("El valor de p es apunta a %p\n", *p);
printf("El valor de q es apunta a %p\n", *q);
printf("La dirección de x apuntada por q es %d\n",(int*) *q);

getchar();
return 0;
}
