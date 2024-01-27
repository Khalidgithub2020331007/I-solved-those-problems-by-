#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    b=1+b;
    c=a-c;
    b=c>b?c:b;
        printf("%d",b);
        return 0;
}
