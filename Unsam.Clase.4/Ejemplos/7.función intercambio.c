#include<stdio.h>

void f_intercambio(int * a, int * b){
int aux;

aux = *a;
*a = *b;
*b = aux;

}

int main(){
int a, b, suma;

   printf("Ingrese dos n%cmeros enteros\n", 163);
   scanf("%d%d",&a,&b);

   printf("Antes de la funci%cn a:%d y b:%d\n", 162, a, b);

   f_intercambio( &a, &b );

   printf("Despu%cs de la funci%cn a:%d y b:%d\n",130,162, a, b);

return 0;
}
