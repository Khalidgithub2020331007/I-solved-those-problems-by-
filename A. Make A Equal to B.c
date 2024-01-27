#include<stdio.h>
#include<math.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int i,n,l=0,m;
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                l++;
            }
        }
        m=ceil((double)l/2);
        printf("%d\n",m);

    }
    return 0;
}
