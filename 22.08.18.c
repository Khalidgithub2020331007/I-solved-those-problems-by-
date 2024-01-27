#include<stdio.h>
int main()
{
   float a=0.001,b=.003;
   float c,*pa,*pb;
   pa=&a;
   *pa=2*a;
   pb=&b;
   c=3*(*pb-*pa);

    printf("&i=%d    &j=%d   pj=%d   *pj=%d  i=%d  pi=%d  *pi=%d  (pi+2)=%d (*pi+2)=%d  *(pi+2)=%d   ",&i,&j,pj,*pj,i,pi,*pi,(pi+2),(*pi+2),*(pi+2)  );
    return 0;
}
// F9C F9E F9E 30   35 F9C 38 F9E 35 30
