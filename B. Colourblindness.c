#include<stdio.h>
int main()
{
    int t,n,i,j,l,m;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        char s[101],s2[101];
        scanf("%s",s);
        scanf("%s",s2);
        l=0;
        m=0;

         for(i=0;i<n;i++)
        {
           if((s[i]=='R'||s2[i]=='R')&&s[i]!=s2[i])
           {
               printf("NO\n");
               l=1;
               break;
           }
        }
        if(l!=1)
        {
            printf("YES\n");
        }

    }
    return 0;
}
