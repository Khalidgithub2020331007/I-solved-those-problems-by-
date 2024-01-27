#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l,m,n,d,e,f,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        d=(b/c)+(b%c);
        e=0;
        if(((b/c)-1)*c+c-1>=a)
        {
           e=((b/c)-1)*c+c-1;
            e=(e/c)+(e%c);
        }
        d=d>e?d:e;
        printf("%d\n",d);

    }
    return 0;
}
