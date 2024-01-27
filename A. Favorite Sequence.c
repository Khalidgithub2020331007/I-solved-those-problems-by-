#include<stdio.h>
int main()
{
    int t,i,j,k,l,m,a[300],n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        m=n%2;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0,j=n-1;i<(n/2);i++,j--)
        {
            printf("%d %d ",a[i],a[j]);
        }
        if(m!=0)
        {
            printf("%d",a[(n/2)]);
        }
        puts("");
    }
}
