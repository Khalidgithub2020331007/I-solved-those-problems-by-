#include<stdio.h>
int gcd(int a1,int b1)
{
     int t;
    if(a1%b1==0)
    {
        return b1;
    }

    else
    {
        t=b1;
        b1=a1%b1;
        a1=t;
        return gcd(a1,b1);
    }

}
int main()
{
    int a,b,temp;

      scanf("%d %d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }

       int n=gcd(a,b);
       printf("%d/%d",b/n,a/n);
    return 0;
}
