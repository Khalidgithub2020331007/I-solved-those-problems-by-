#include<stdio.h>
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%3==0)
        {
            printf("%d %d %d",n/3,(n/3)+1,(n/3)-1);
        }
        else if (n%3==1)
        {
            printf("%d %d %d",n/3,(n/3)+2,(n/3)-1);
        }
        else

        {
             printf("%d %d %d",(n/3)+1,(n/3)+2,(n/3)-1);
        }
        puts("");
    }
    return 0;
}
