#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j;
        scanf("%d",&n);
        if(n==3||n==1)
        {
            printf("-1\n");
        }
        else
        {
            if(n%2==0)
            {
                for(j=n;j>0;j--)
                {
                    printf("%d ",j);
                }
            }
            else
            {
                for(j=n;j>n-2;j--)
                {
                    printf("%d ",j);
                }
                for(j=1;j<=n-2;j++)
                {
                    printf("%d ",j);
                }
            }
            puts("");
        }
    }
    return 0;

}
