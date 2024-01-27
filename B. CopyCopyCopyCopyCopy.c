#include<stdio.h>
int main()
{
    int n,t,i,j,k,l,m,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
            l=0;
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
           {
               if(a[j]==a[k])
               {
                  l++;
                  break;
               }


           }
        }





        printf("%d\n",n-l);
    }
    return 0;
}
