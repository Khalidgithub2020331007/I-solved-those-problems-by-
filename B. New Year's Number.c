#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        l=a[i];
        for(j=0;j<l;j++)
        {
            if(a[i]%2020==0||a[i]%2021==0)
            {
                printf("YES\n");

                break;
            }
            else if(a[i]<2020)
            {
                   printf("NO\n");
                   break;
            }
            else
            {
                a[i]=a[i]-2020;
            }

        }
    }
    return 0;


}
