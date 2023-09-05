/*strlen, longitud de cadena */
#include <stdio.h>
#include <stdlib.h>

int strlen(char *);
int strlen2(char *s);
int strlen3(char *s);

int main(){
  char arr[] = "Esta cadena tiene largo 26";
  char *p_arr = arr;

  printf("\n\nLongitudes de cadenas.\n");

  printf("strlen.por pasaje de la cadena, largo: ");
  printf("%d\n", strlen("Esta cadena tiene largo 26"));

  printf("strlen.por pasaje de arreglo, largo: ");
  printf("%d\n", strlen(arr));

  printf("strlen.por pasaje de puntero, largo: ");
  printf("%d\n", strlen(p_arr));

  printf("strlen2.por pasaje de la cadena, largo: ");
  printf("%d\n", strlen2("Esta cadena tiene largo 26"));

  printf("\n\nLongitud de cadenas; usa resta de punteros.\n");
  printf("por pasaje de la cadena, largo: ");
  printf("%d\n", strlen3("Esta cadena tiene largo 26"));


  printf("\n");

   getchar();
    return 0;
}

/* strlen: devuelve la longitud de una cadena de caracteres */
int strlen(char *s)
{
  int n;
  for (n = 0; *s != '\0'; s++)
    n++;
  return n;
}

int strlen2(char *s)
{
  char *p = s;          /* s puntero al principio */
  while (*p != '\0')    /* p puntero al final */
    p++;
  return p - s;		/* la resta de punteros es el largo */
}

int strlen3(char *s)
{
  char *p = s;          /* s puntero al principio */
  while (*p != '\0')    /* p puntero al final */
    p++;
  return p - s;		/* la resta de punteros es el largo */
}
