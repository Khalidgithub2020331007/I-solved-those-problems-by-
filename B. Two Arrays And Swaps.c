#include<stdio.h>
int main()
{
    int t,n,i,j,k,l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
        scanf("%d %d",&n,&k);
        int a[2*n];

        for(i=0;i<2*n;i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=n;i<2*n-1;i++)
        {
            for(j=i+1;j<2*n;j++)
            {
                if(a[i]<a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }

            }

        }

        for(i=0;i<n+k-1;i++)
        {
            for(j=i+1;j<n+k;j++)
            {
                if(a[i]<a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }

            }

        }
        int sum=0;
         for(i=0;i<n;i++)
         {
             sum=sum+a[i];
         }
         printf("%d\n",sum);
   }
   return 0;
}
