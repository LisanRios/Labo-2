/* Dadas la base y el exponente, calcular la potencia. Utilizar
	 una funci¢n para el cálculo */

#include<stdio.h>


float calcpotencia(float, int);

int main()
{
	float base, pot;
	int exp;
	printf("Ingrese la base: ");
	scanf("%f", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &exp);
	pot = calcpotencia(base, exp);
	printf("La potencia es %.2f", pot);
	return 0;
}

float calcpotencia(float base, int exp)
{
	int ciclo;
	float pot;
	pot = base;
	if (exp == 0)
		pot = 1;
	else
		for(ciclo=1;ciclo<exp;ciclo++)
			pot = pot * base;
	return pot;
}

