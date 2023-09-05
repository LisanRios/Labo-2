/* Determina la cantidad de palabras de un texto.*/
#include<stdio.h>
#include<string.h>

int separation(char* txt, char* p)
{
	int k=0;
	p=strtok(txt," ");
	while (p!=NULL)
	{
		p=strtok(NULL, " ");
		k++;
	}
	return k;
}
int main()
{
	int k;
	char txt[1024];
	char p;
	printf("Ingrese una cadena de caracteres y presione Enter\n");
	gets(txt);

	printf("\nLa cantidad de palabras es: %d",separation(txt,&p));

	getchar();
	return 0;
}
