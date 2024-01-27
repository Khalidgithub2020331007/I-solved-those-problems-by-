#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,h,l,k,temp,j;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
           for(j=i+1;j<n;j++)
          {
               if(a[i]>a[j])
               {
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
               }
          }
    }
    l=0;
    for(i=0;i<m;i++)
    {
        if(a[i]>0)
        {
            break;
        }
        l=l-(a[i]);

    }
    printf("%d",l);
    return 0;
}
