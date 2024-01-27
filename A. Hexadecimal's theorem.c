#include<stdio.h>
int main()
{
     long long int a[50];
    int i,j,k,l,m,n;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<=46;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<=46;i++)
    {
       printf("%d-%lld\n",i,a[i]);
    }
    for(i=0;i<47;i++)
    {
        for(j=i;j<47;j++)
        {
            for(k=j;j<47;j++)
            {
               if(a[i]+a[j]+a[k]==n)
               {
                  printf("%lld %lld %lld",a[i],a[j],a[k]);
                  l=1;
                  break;
               }
               else if(a[i]+a[j]+a[k]>n)
               {
                   printf("I'm too stupid to solve this problem");
                   l=1;
                  break;
               }
            }
            if(l==1) break;
        }
         if(l==1) break;
    }
    return 0;
}
