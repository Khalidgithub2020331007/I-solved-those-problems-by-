#include<stdio.h>
int f(auto int n);
int main()

{
    auto int n;
    printf("\nn=");
    scanf("%d",&n);
    printf("\nn!=%d",f(n));
    return 0;
}int f(auto int n)
{
    if(n==1)
        return 1;
    else

        return n*f(n-1);
}
