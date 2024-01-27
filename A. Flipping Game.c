#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int l=1,a[t],m=0,n=0,p=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(l==1&&a[i]==0)
        {
           n=i+1;
           l=0;
        }
        if(a[i]==0)
        {
            m=i+1;
        }
        if(a[i]==1)
        {
            p++;
        }
    }
    //printf("n-%d  m-%d\n",n,m);

    for(int i=n-1;i<=m-1;i++)
    {
        a[i]=1-a[i];
    }
    int o=0;
     for(int i=0;i<=t;i++)
    {
        if(a[i]==1)
        {
            o++;
        }
    }

    if(m==0&&n==0)
    {
        printf("%d\n",t-1);
    }
    else
    printf("%d\n",o>p?o:p);
    return 0;
}
