#include<stdio.h>
#include<math.h>
int main()
{
    int x,m;
    double n;
    long long int a;
    scanf("%d %lf %d",&x,&n,&m);
    a=pow(x,n);
    a=a%m;
    printf("%lld",a);

}
