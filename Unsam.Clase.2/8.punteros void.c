#include <stdio.h>

int main(){
int * x;
float * y;
void * z;

int a;
float b;

x=&a;
y=&b;

*x=3;
*y=6.28;

z=(void*)x;
z=(void*)y;

printf ("%f\n",*((float*)z));
printf ("%d\n",y);
y++;
printf ("%d\n",y);
printf ("%d\n",z);
z++;
printf ("%d\n",z);

getchar();
return 0;
}
