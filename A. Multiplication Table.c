#include<stdio.h>

int main()
{
    int n,m,i,l=0;
    scanf("%d %d",&n,&m);
    if(n>=m)
    {
        for(i=1;i<=m;i++)
       {
            if(m%i==0)
            {
                l++;

            }
       }
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            if(m%i==0&&(m/i)<=n)
            {
                l++;
               // printf("i-%d  \n",i);
            }
        }
    }
    printf("%d\n",l);
    return 0;
}
