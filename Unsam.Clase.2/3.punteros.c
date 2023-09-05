#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, *p, *q, *r;
char c, d, *m, *n;
b=7;
a=5;
q=&a;
p=q;
*p=b;
printf("%d", *q);
r=&b;
*r=*q;
printf("a=%d, b=%d, *p=%d, *q=%d, *r\n", a,b,*p,*q,*r);
c='@';
d='B',
m=&c;
printf("m=%p\n", m);
n=&d;
printf("n=%p\n", n);
*m=*n;

//que valor desreferencian m y n?
//m y n apuntan a la misma direcci�n?

if (m==n) printf("m y n apuntan a la misma direccion?\n");
else printf("m y n apuntan a direcciones distintas?\n");
printf("*m=%c\n", *m);
printf("*n=%c\n", *n);
system("Pause");
return 0;
}
