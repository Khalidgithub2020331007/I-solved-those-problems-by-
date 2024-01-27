#include<stdio.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(360%(180-a[i])==0)
        {
            printf("YES\n");
        }
      else
        {
            printf("NO\n");
        }
    }
    return 0;
}
