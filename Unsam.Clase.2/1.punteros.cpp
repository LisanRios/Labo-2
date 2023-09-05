
#include <stdio.h>
int main()
{
int n;
int * ptr;

n=8;
ptr=&n;
printf("ptr es %p\n", ptr);
printf("*ptr es %d\n", *ptr);
ptr++;
printf("ptr es %p\n", ptr);
printf("*ptr es %d\n", *ptr);
ptr++;
printf("ptr es %p\n", ptr);
printf("*ptr es %d\n", *ptr);
ptr++;
printf("ptr es %p\n", ptr);
printf("*ptr es %d\n", *ptr);

getchar();
return 0;
}
