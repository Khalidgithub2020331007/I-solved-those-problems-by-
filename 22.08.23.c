#include<stdio.h>
int main()
{
    int t,n,k,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        for(j=1;j<k;j++)
        {
            n=n-1;
        }
        if(n%2==0)
        {
            printf("NO");

        }
        else
        {

            printf("YES");
        }
        puts("");
    }
}
