#include<stdio.h>
int f(int n,int a)
{
    if(n%a==0)
    {
        return a;
    }
    else if(a>(n/2))
    {
        return n;
    }
    else return f(n,a+2);
}
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n,b;
        scanf("%d %d",&n,&b);
        for( int i=1;i<=b;i++)
        {
            if(n%2==0)
            {
                n=n+2*(b-i+1);
                break;
            }
            else
            {
                n=f(n,3)+n;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}



