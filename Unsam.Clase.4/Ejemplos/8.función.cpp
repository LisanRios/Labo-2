#include <stdio.h>

void leer (int*,int*);
int tramposa (int*,int*);
void resultado(int*,int*,int );

int main()
{
    int a,b,c;
    leer (&a,&b);
    resultado(&a,&b,c);

    return 0;
}

void leer (int*a,int*b)
{
    printf ("Ingrese 2 valores\n");
    scanf("%d",a);
    scanf("%d",b);
}

void resultado(int*a,int*b,int c)
{
    printf("El resultado es %d\n", tramposa(a,b));
    printf("Los valores de las variables son: a=%d,b=%d,c=%d\n",*a,*b,c);
}

int tramposa (int *a,int *b)
{
    int c;
    c=(*a)%(*b)+1;
    *a=0;
    *b=0;
    printf("a = %d, b = %d\n", *a,*b);
    return c;
}
