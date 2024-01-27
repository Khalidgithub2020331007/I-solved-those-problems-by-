#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,l;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        l=0;
           for(i=1;i<n;i++)
        {
           if(a[i-1]-a[i]<=0||a[i]==0)
           {
               a[i]=a[i]+a[i-1];
           }
           else
           {

               l=1;
               break;
           }
        }
        if(l!=1)
        {
            for(i=0;i<n;i++)
            {
               printf("%d ",a[i]);
            }
        }
        else
        {
            printf("-1");
        }
        puts("");
    }
    return 0;
}
