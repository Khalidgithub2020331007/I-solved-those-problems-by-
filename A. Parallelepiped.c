#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f;
    double ab,bc,ca;
    scanf("%lf %lf %lf",&ab,&bc,&ca);
    c=sqrt(ca*bc/ab);
    b=bc/c;
    a=ab/b;
    printf("%d",4*(a+b+c));
    return 0;
}
