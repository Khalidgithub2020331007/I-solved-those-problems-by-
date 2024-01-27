#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    if(n==1&m==10)
    {
        printf("-1");
    }
    else if(m==10)
    {
        printf("1");
        for(i=0;i<n-1;i++)
        {
            printf("0");
        }
        puts("");
    }
    else

    {
        for(i=0;i<n;i++)
        {
            printf("%d",m);
        }
    } return 0;
}
// 548 A
