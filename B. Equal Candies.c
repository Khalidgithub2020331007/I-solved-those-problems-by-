#include<stdio.h>
int main()
{
    int t,n,min, i,j,a[10000000],sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum =0;
        min=10000000;
        scanf("%d",&n);
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
            if(a[i]<min)
            {
                min=a[i];
            }
        }

        printf("%d\n",sum-n*min);

    }
    return 0;
}
