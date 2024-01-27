#include<stdio.h>
int main()
{
    int t,n,i,j,k,l,a[200000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);

        }
        l=0;
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
           {

              if(a[k]-a[j]==k-j)
              {
                  l++;
              }
           }

        }
        printf("%d\n",l);

    }
    return 0;
}
