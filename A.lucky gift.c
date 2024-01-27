#include<stdio.h>

int main()
{
    int t,i,j,k,l,n,m;
    char s[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        n=0;
        m=0;
        scanf("%s",s);
        for(j=0;j<3;j++)
        {
            n=n+s[j]-48;
        }
         for(j=3;j<6;j++)
        {
            m=m+s[j]-48;
        }

        if(n==m)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
