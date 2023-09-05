/*
1) 
Analiza, prueba y comenta los dos programas (a y b) por separado, recuerda usar printf para visualizar los valores:
*/
/*
#include <stdio.h>
int main() {
    //a)
 
    int a, b;  
    int *pa;
    a = 5;  
    pa = &a;
    b = *pa;  
 
    //b) 
    int i, j, *p;  
    p = &i;  
    *p = 21;  
    p = &j;  
    *p = 1;

    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
2)  Construye el siguiente programa, paso a paso:  
+a.  Declara a, b y c variables enteras, y p, q y r variables puntero a entero. 
+b.  Declara m, n variables de tipo float y s y t variables puntero a float. 
+c.  Asigna a p la dirección de a y a q la dirección de b. 
+d.  Asigna  a  b  el  valor  40  usando  el  puntero  q.  Mostrar  el  valor  de  b,  la  dirección  de  b  ,
     el  valor  de  q,  la  dirección  de  q  y  el valor contenido en la dirección almacenada en q. 
+e.  Ingresar desde teclado el valor de a usando su dirección almacenada. Mostrar el valor de a, la dirección de a, el valor de p, 
     la dirección de p y el valor contenido en la dirección almacenada en p. 
+f.  Asigna a r la dirección de a. 
+g.  Asigna a la posición de memoria contenida en el puntero r el valor 200. Mostrar el valor de a, la dirección de a , el valor de 
     p,  la  dirección  de  p  y  el  valor  contenido  en  la  dirección  almacenada  en  p,  y  el  valor  de  r,  la  dirección  de 
     r y el valor contenido en la dirección almacenada en r. 
+h.  Emite un mensaje indicando si el valor del puntero p es igual al valor del puntero q 
+i.  Ídem g indicando si el valor del puntero p es igual al valor del puntero r. 
+j.  Emite  un  mensaje  indicando  si  el  contenido  de  la  posición  de  memoria  apuntada  por  p  es  igual  al  contenido  de  la 
     posición de memoria apuntada por q. 
+k.  Declara una variable de tipo puntero a entero y una variable entera.  Asígnale un valor a la variable entera. Guarda la 
     dirección. Luego lee el contenido de la variable puntero y muéstralo en hexadecimal.
*/
/*
#include <stdio.h>
int main() {
    int A, B, C;
    int *p, *q, *r;
    float m, n;
    float *s, *t;

    p = &A;
    q = &B;
    *q = 40;

    printf("B es %d\n", B);
    printf("La direccion de B es %p\n", &B);
    printf("El valor de q es %p\n", q);
    printf("La direccion de q es %p\n", &q);
    printf("El valor contenido en la direccion almacenada en q es %d\n", *q);

    r = &A;
    *r = 200;

    printf("A es %d\n", A);
    printf("La direccion de A es %p\n", &A);
    printf("El valor de p es %p\n", p);
    printf("La direccion de p es %p\n", &p);
    printf("El valor contenido en la direccion almacenada en p es %d\n", *p);
    printf("La direccion de r es %p\n", r);
    printf("El valor de r es %p\n", &r);
    printf("El valor contenido en la direccion almacenada en r es %d\n", *r);
    printf("El valor del puntero p es igual al valor del puntero q es %d\n", *p == *q);
    printf("El valor del puntero p es igual al valor del puntero r es %d\n", *p == *r);
    printf("El contenido de la posicion de memoria apuntada por p es igual al contenido de la posicion de memoria apuntada por q es %d\n", &p == &q);

    int entero = 10;
    int* puntero = &entero;
    
    printf("El contenido de la posicion de memoria apuntada por puntero en hexadecimal es %x\n", puntero);

    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    3)
    Por qué da error la segunda instrucción?  
    char c = 'A';
    double *p = &c;
    (( char cuando deberia estar como double ))
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    4) Un programa en C contiene las siguientes sentencias:
    float a = 0.001, b = 0.003; 
    float c, *pa, *pb; 
    pa = &a; 
    *pa = 2 * a; 
    pb = &b; 
    c = 3 * (*pb - *pa);
    --------------------
    a) ¿Qué valor tiene a al finalizar el programa? 
    b) ¿Qué valor tiene b al finalizar el programa?
    c) ¿Qué valor tiene c al finalizar el programa?
    d) ¿Qué valor tiene (*pa) al finalizar el programa?
    e) ¿Qué valor tiene (*pb) al finalizar el programa?
    a) El valor de a es 0.002000
    b) El valor de b es 0.003000
    c) El valor de c es 0.003000
    d) El valor de (*pa) es 0.002000
    e) El valor de (*pb) es 0.003000
*/
/*
#include <stdio.h>
int main() {
    float a = 0.001, b = 0.003; 
    float c, *pa, *pb; 
    pa = &a; 
    *pa = 2 * a; 
    pb = &b; 
    c = 3 * (*pb - *pa);
    
    printf("a) El valor de a es %f\n", a);
    printf("b) El valor de b es %f\n", b);
    printf("c) El valor de c es %f\n", c);
    printf("d) El valor de (*pa) es %f\n", *pa);
    printf("e) El valor de (*pb) es %f\n", *pb);
    
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    5)  El siguiente código contiene un error, cuál es?: 
    int main () { 
    int x = 5; 
    float y = 5;  
    int *xPtr = NULL;
    xPtr = &y;
    printf ("%d", *xPtr);
    return 0;
    } 
    (( int cuando deberia estar como float ))

*/
/*
#include <stdio.h>
int main() {
    int x = 5; 
    float y = 5;  
    int *xPtr = NULL;
    xPtr = &y;
    printf ("%d", *xPtr);

    return 0;
}*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    6) Cuál es el valor final de todas las variables en este programa?
    int main ( ) {  
    int   a, b, *p, *q, *r;
    char c, d, *m, *n;
    a = 5;   
    b = 7;  
    q = &a;  
    p = q;  
    *p = b;  
    printf("%d\n\n\n", *q);
    r = &b;
    *r = *q;
    printf("a = %d, b=%d, *p = %d, *q = %d, *r = %d\n\n\n", a, b, *p, *q, *r);
    c = 'A';
    d = 'B';
    m = &c;
    n=&d;
    *m = *n;
    return 0;
    ((777777777777777))
}
*/
/*
#include <stdio.h>
int main() {  
    int   a, b, *p, *q, *r;
    char c, d, *m, *n;
    a = 5;   
    b = 7;  
    q = &a;  
    p = q;  
    *p = b;  
    printf("%d\n\n\n", *q);
    r = &b;
    *r = *q;
    printf("a = %d, b=%d, *p = %d, *q = %d, *r = %d\n\n\n", a, b, *p, *q, *r);
    c = 'A';
    d = 'B';
    m = &c;
    n=&d;
    *m = *n;
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    7) Realiza la traza ( s e g u i m i e n t o ) del siguiente programa. Ejecutalo y comentar qué tarea realiza cada
    instrucción o línea del programa:
*/
/*
#include <stdio.h>
int main() {
    int *p;
    int a = 1, b = 2;
    int *s;
    p = &a;
    b = *p + 1 ;
    s = &p;
    printf( "p = %d, *p = %d, &p = %d\n", p, *p, &p);
    printf( "s = %d, *s = %d, &s = %d\n", s, *s, &s);
    *s = &b;
    printf("Se ejecutó* s = &b\n y ahora…\n ");
    printf("s = %d, *s = %d, &s =%d\n", s, *s, &s);
    **s = 79;
    printf("a = %d, &a = %d \n ", a, &a);
    printf("b = %d, &b = %d \n ", b, &b);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    8) Analiza el siguiente programa:
    ((este programa utiliza punteros para asignar valores a las variables a, b y c. Además, muestra cómo
     los punteros pueden apuntar a diferentes ubicaciones de memoria y cómo se pueden asignar valores a través de los punteros.))
*/
/*
#include <stdio.h>
int main() {
    int a, b, c;
    int *p1, *p2;
    p1 = &a;
    *p1 = 1;
    p2 = &b;
    *p2 = 2;
    p1 = p2;
    *p1 = 0;
    p2 = &c;
    *p2 = 3;
    return 0;
}*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    9) Completa el siguiente programa
*/
/*
#include <stdio.h>
int main() {
    int num, n;
    int *dir_n;
    num = 22;
    n = 7;
    dir_n = &n;
    
    printf("La variable num vale: %d\n", num);
    printf("La dirección de memoria donde está almacenada la variable num es: %p\n", &num);
    printf("La dirección de memoria almacenada en dir_n es: %p\n", dir_n);
    printf("El valor de la variable apuntada por dir_n es: %d\n", *dir_n);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    10) Qué emite el siguiente programa?
*/
/*
#include <stdio.h>
int main() {
    int u = 3, v;
    int *pu;
    int *pv;
    pu = &u;
    v = *pu;
    pv = &v;

    printf("\nu = %d &u = %p pu = %p *pu = %d", u, (void*)&u, (void*)pu, *pu);
    printf("\nv = %d &v = %p pv = %p *pv = %d", v, (void*)&v, (void*)pv, *pv);
    return 0;
}*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    11) Investiga qué emite por pantalla el siguiente programa:
*/
/*
#include <stdio.h>
int main() {
    int n = 8, *ptr;
    printf("ptr = %p\n", ptr);
    ptr = &n;
    printf("n = %d\n", n);
    printf("&n = %p\n", &n);
    printf("*ptr = %d\n", *ptr);
    printf("ptr = %p\n", ptr);
    n--;
    printf("n after n-- = %d\n", n);
    printf("&n = %p\n", &n);
    ptr++;
    printf("ptr after ptr++ = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    12) Considera las siguientes instrucciones
    -Luego de esas instrucciones, cuál de las siguientes cambia el valor de i a 75?
*/
/*
#include <stdio.h>
    int main() {
    int *p;
    int i;
    int k;

    i = 42;
    k = i;
    p = &i;

    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    13) Explica el funcionamiento del siguiente programa
    -12
*/
/*
#include <stdio.h>
int main() {
    int a, *p;
    a = 5;
    p = &a;
    *p += 7;
    printf("\nThe final value of a is: %d\n", a);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    14) Explica la salida del siguiente programa:
    Este programa en C utiliza un puntero para trabajar con una variable entera.
     Primero, asigna un valor a la variable y muestra información sobre el puntero.
      Luego, manipula la variable y el puntero, mostrando cómo cambian sus valores y direcciones en la memoria.
       Finalmente, muestra los resultados de estas operaciones.

*/
/*
#include <stdio.h>
int main() {
    int n;
    int *ptr;
    n = 8;
    printf("ptr antes: %p\n", ptr);
    ptr = &n;
    printf("n es: %d\n", n);
    printf("&n es: %p\n", &n);
    printf("*ptr es: %d\n", *ptr);
    printf("ptr después: %p\n", ptr);
    n--;
    printf("n después de n--: %d\n", n);
    printf("&n es: %p\n", &n);
    ptr++;
    printf("ptr después de ptr++: %p\n", ptr);
    printf("*ptr es: %d\n", *ptr);
    return 0;

}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    15)
    Casting  y  punteros  a  void:  Comenta  el  siguiente  programa  e  identifica (si los hay) los errores:
    i n t   * p ;
    d o u b l e   * q ;
    v o i d   * r ;
    p = q;
    p = (int *)q;
    p = r = q;
    // linea cuatro inesesaria
    // quiere castear un un puntero a void?
*/
/*
#include <stdio.h>
int main() {
    int   *p;
    double   *q;
    void   *r;
    p = q;
    p = (int *)q;
    p = r = q;
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    16)
*/
/*
#include <stdio.h>
int main() {
    void *generico;
    int *pint, x = 3;
    char *pchar = "Punteros a caracteres";
    
    pint = &x;
    printf("El valor apuntado por pint es %d (valor de x)\n", *pint);
    
    generico = pchar;
    printf("\n\ngenerico (tipo void) apunta a objeto char: %s", (char *)generico);
    
    printf("\n\nImprimo ahora generico como char:\n\n");
    puts((char *)generico);

    return 0;
}
*/
/*al igualar un void=tipo_de_dato lo combierte y no afecta al resultado*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    17)
    int a = 25;
    int *ptrl, **ptr2, ***ptr3, ****ptr4;

*/
/*
#include <stdio.h>
int main() {
    int a = 25;
    int *ptrl, **ptr2, ***ptr3, ****ptr4;
    printf("a = %d\n", a);
    ptrl = &a;
    ptr2 = &ptrl;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    printf("ptrl = %d\n", *ptrl);
    printf("*ptr2 = %d\n", **ptr2);
    printf("**ptr3 = %d\n", ***ptr3);
    printf("***ptr4 = %d\n", ****ptr4);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    18) Determina cuál es la salida del siguiente programa:

*/
/*
#include <stdio.h>
int main() {
    int x = 5;
    int y = 10;
    int *xPtr = NULL;
    int *yPtr = NULL;
    xPtr = &x;
    yPtr = &x;
    *xPtr = *xPtr + 1;
    (*yPtr)--;
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    19) Investiga qué valores emite por pantalla el siguiente programa:
    ptr es 0000000000000010
    n es 8
    &n es 000000e1961ffad4
    *ptr es 8
    ptr es 000000e1961ffad4
    n despues de n-- 7
    &n es 000000e1961ffad4
    ptr despues de ptr++ 000000e1961ffad8
    *ptr es -1776289064
*/
/*
#include <stdio.h>
    int main() {
    int n = 8, *ptr;
    printf("ptr es %p\n", ptr);
    ptr = &n;
    printf("n es %d\n", n);
    printf("&n es %p\n", &n);
    printf("*ptr es %d\n", *ptr);
    printf("ptr es %p\n", ptr);
    n--;
    printf("n despues de n-- %d\n", n);
    printf("&n es %p\n", &n);
    ptr++;
    printf("ptr despues de ptr++ %p\n", ptr);
    printf("*ptr es %d\n", *ptr);

    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
    20) Analiza el siguiente ejercicio:
    Qué valores emite en cada printf? Puede sobre tener alguna conclusión?
    //Muestra cómo los punteros pueden apuntar a diferentes variables y 
    cómo las operaciones en los punteros afectan a los valores de las variables a las que apuntan.
*/
/*
#include <stdio.h>
    int main() {
    int a, b, *pta, **ptb;
    pta = &a;
    ptb = &pta;
    *pta = 8;
    printf("ptb es: %d\n\n", ptb);
    printf("Contenidos de *ptb después de &pta es: %d\n\n", *ptb);
    printf("Contenidos de **ptb después de &pta es: %d\n\n", **ptb);

    **ptb = **ptb + 3;
    printf("Contenidos de **ptb es: %d\n\n", **ptb);
    printf("Contenidos de a es: %d\n\n", a);

    *ptb = NULL;
    printf("Contenidos de a después de *ptb = NULL, es: %d\n\n", a);
    printf("Contenidos de *ptb después de NULL es: %d\n\n", *ptb);

    b = 8;
    pta = &b;
    printf("Contenidos de *ptb después de pta = &b, es: %d\n\n", *ptb);
    printf("Contenidos de a es: %d\n\n", a);
    printf("Contenidos de b después de pta = &b, es: %d\n\n", b);
    printf("Contenidos de *pta después de pta = &b, es: %d\n\n", *pta);

    printf("Contenidos de **ptb después de pta = &b, es: %d\n\n", **ptb);
    printf("Contenidos de *ptb después de pta = &b, es: %d\n\n", *ptb);
    **ptb = a + 10;
    printf("Contenidos de **ptb después de **ptb = a + 10, es: %d\n\n", **ptb);
    printf("Contenidos de *pta después de **ptb = a + 10, es: %d\n\n", *pta);
    printf("Contenidos de a después de **ptb = a + 10, es: %d\n\n", a);
    printf("Contenidos de b después de **ptb = a + 10, es: %d\n\n", b);
    printf("La suma de los contenidos de pta + ptb es: %d\n\n", (*pta) + (**ptb));

    return 0;
}
*/
/*--------------------------------------------------CLASE DEL 14/8/23------------------------------------------------------------------*/
/*
#include <stdio.h>

int main(){

//FORMA CORRECTA:
int a=10;
int b=20;

//objeto variable y puntero constante
int * const p = &a;
*p = 15; // Correcto: El valor apuntado es variable.
//ERROR: p es constante.
//p=&b;
// es decir que puede cambiar el contenido pero no la dirección

//FORMA INCORRECTA:
const int aa=15;
int bb=25;
//objeto constante y puntero variable
const int * pp = &aa;
//*pp = 15; // ERROR: el valor apuntado por pp es constante.
pp=&bb; //Correcto: pp pasa a apuntar
pp=&bb; //Correcto: pp pasa a apuntar a un nuevo objeto.
//Un puntero-a-constante apunta a un objeto cuyo Rvalue no puede cambiar


getchar();
return 0;
}
*/















