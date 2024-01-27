#include<stdio.h>
int main()
{
    int n,t,k,j,T,i,m,u,r;
    scanf("%d",&t);
    char s[12];
    for(j=0;j<t;j++)
    {
        T=0;
        i=0;
        m=0;u=0;
        r=0;

        scanf("%d",&n);
        scanf("%s",s);
        if(n==5)
        {
            for(k=0;k<5;k++)
            {
                if(s[k]=='T')
                {
                    T++;
                }
                else if(s[k]=='u')
                {
                    u++;
                }
                else if(s[k]=='m')
                {
                    m++;
                }
                else if(s[k]=='i')
                {
                    i++;
                }
                else if(s[k]=='r')
                {
                    r++;
                }
            }
            if(T==1&&i==1&&u==1&&m==1&&r==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
             printf("NO\n");;
        }
    }
    return 0;

}
