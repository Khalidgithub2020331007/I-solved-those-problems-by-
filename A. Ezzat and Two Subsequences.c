#include<stdio.h>
int  main()
{
    int t,i,j,k,l,m,n;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        int a[n];
        scanf("%d",&a[0]);
        int max=a[0];
        double sum=a[0];

        for(i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
            if(max<a[i])
            {
                max=a[i];
            }
        }

       // printf("max-%d  sum-%f\n",max,sum);
        sum=sum-(double)max;
        //printf("sum-%f\n",sum);
        sum=(double)max+(sum/(n-1));
        printf("%f\n",sum);

    }
    return 0;
}
