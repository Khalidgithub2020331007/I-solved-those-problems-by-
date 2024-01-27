#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,k,l,temp;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        //printf("%d - ",k+1);
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        l=0;
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
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(a[j]-a[i])==1||a[j]==a[i])
                {
                    l++;
                    break;
                }
            }
        }
        if(n-l==1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
