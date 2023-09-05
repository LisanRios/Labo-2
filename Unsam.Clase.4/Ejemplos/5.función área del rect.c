#include<stdio.h>

int arearect(int, int);

int main()
{
	int suprect, mayor, menor;
	printf("Ingrese en centimetros el lado mayor: ");
	scanf("%d", &mayor);
	printf("Ingrese en centimetros el lado menor: ");
	scanf("%d", &menor);
	suprect = arearect(mayor, menor); // llamada a la funci¢n
	printf("El area del rectangulo es: %d cm2", suprect);
	return 0;
}

int arearect(int a, int b)
{
	int suprect;
	suprect = a * b;
	return suprect;
}
