
#include<stdio.h>
int main()
{
    int t,i,j,b,c;
    scanf("%d",&t);
    int a[t+5],d[t];
    for(i=1;i<=t;i++)
    {
        a[i]=0;
    }
    j=0;
    for(i=1;i<=t*t;i++)
    {
        scanf("%d %d",&b,&c);
        if(a[b]==0&&a[c]==0)
        {
            d[j]=i;
            j++;

            a[b]=b;
            a[c]=c;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d ",d[i]);
    }
    return 0;
}
