#include <stdio.h>

void promecal(int nota, int *notajus);

int main(){
int nota , notafinal;

printf("ingrese nota \n");
scanf ("%d", &nota);
printf ("variable nota antes %d\n", nota);

promecal(nota,&notafinal);
printf ("variable nota despues %d\n", nota);
printf ("Su nota ajustada es %d\n", notafinal);

return 0;
}

void promecal(int nota, int *notajus)
{
    int notaajustada;
    if (nota == 4)
        notaajustada = nota  + 1;
    else if (nota >= 8)
        notaajustada = 10;
    else notaajustada=nota;

    *notajus=notaajustada;
}

