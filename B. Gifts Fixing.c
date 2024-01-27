#include<stdio.h>
int main()
{
    int t,n,k,i,l,m,a[50],b[50];
    double j;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        int mina=2147483647,minb=2147483647;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(mina>a[i])
            {
                mina=a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
             if(minb>b[i])
            {
                minb=b[i];
            }
        }
        j=0;
        for(i=0;i<n;i++)
        {
           l=a[i]-mina;
           m=b[i]-minb;
           j=j+(m>l?m:l);
        }
        printf("%.0f\n",j);


    }
    return 0;
}
