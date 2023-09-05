#include<stdio.h>
int  main(){
int *p, n=5;
double *q;
void *r;

printf("p: %p\n", p );
printf("q: %p\n", q );
printf("r: %p\n\n", r );
r=&n;
//p=q;
//printf("*p: %d\n", *p );
//printf("p: %p\n", p );
//printf("q: %p\n", q );
//printf("r: %p\n\n", r );
//printf("*(int*)r: %d\n\n");
printf("r: %d\n\n", *((int*)r ));
p=(int*)q;

q=p=r;

printf("p: %p\n", p );
printf("q: %p\n", q );
printf("r: %p\n\n", r );

//p=r=q;
//
//printf("p: %p\n", p );
//printf("q: %p\n", q );
//printf("r: %p\n\n", r );

printf("*p: %d\n", *p );
printf("*q: %d\n", *q );
printf("*r: %d\n", *((int*)r ) );
//printf("r: %p\n\n", *r );
return 0;

}

