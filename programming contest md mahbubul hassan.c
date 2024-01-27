#include<stdio.h>
int main()
{
    int i,j,n,b;
    scanf("%d",&n);
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        a[i]=0;
    }
    for(i=1;i<=n;i++)
    {
       scanf("%d",&b);
       a[b]=a[b]+1;
    }
//    for(i=1;i<=n;i++)
//    {
//       printf("%d-%d\n",i,a[i]);
//    }
     for(i=1;i<=n;i++)
    {
      for(j=0;j<a[i];j++)
      {
          printf("%d ",i);
      }
    }

}
