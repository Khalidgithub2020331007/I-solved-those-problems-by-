#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int n, m,t;
    scanf("%d %d",&n,&m);
    if(n<m)
    {
        t=n;
        n=m;
        m=t;
    }
    printf("%d",gcd(n,m));
}
    int gcd(int a,int b)
    {
        int temp;
        if(a%b==0)
        {
            return b;
        }
        else
        {
            temp=b;
            b=a%b;
            a=temp;
            return gcd(a,b);
            }

    }
