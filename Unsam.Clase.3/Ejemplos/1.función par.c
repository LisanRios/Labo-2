#include<stdio.h>

int par(int);
void saludo();

int main() {
int numero, resultado;

saludo();

    printf("Introduzca un número:\n");
    scanf("%d",&numero);

resultado = par(numero);

    if (resultado==1)
    printf("Es par.\n");
    else
    printf("Es impar.\n");
return 0;
}

void saludo(){
printf("Hola !!!");}

int par(int numero) {
    if((numero%2)==0)
        return 1;
    else
        return 0;
saludo();

}



