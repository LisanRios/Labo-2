//Utiliza una funci¢n suma que recibe dos par metros por valor.
//En fsum2 aparece la versi¢n puntero para los par metros (paso por referencia)

#include <stdio.h>

int main()
  {
     int suma(int t,int s), a, b;
     printf("\nValor de a:\n");
     scanf("%d", &a);
     puts("\nValor de b:\n");
     scanf("%d", &b);
   /*  res=suma(a, b);
     printf("resultado= %d",res);*/
     printf("\nResultado emitido desde main() = %d",suma(a,b));
    return 0;
  }

int suma(int a, int b)
   {
     int res;
     res=a+b;
     printf("\nEmitimos la suma desde la función: %d\n", res);

     return(res);
   }
