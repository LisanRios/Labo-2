#include<stdio.h>

int main(){
const float pi=3.1416;
float rad, area;
const float * ppi=&pi;
float * prad=&rad;
float * parea=&area;

printf("Ingrese el radio\n");
scanf("%f",prad);
*parea=*ppi*(*prad * *prad);
printf("El area es %.2f\n", *parea);

getchar();
return 0;
}
