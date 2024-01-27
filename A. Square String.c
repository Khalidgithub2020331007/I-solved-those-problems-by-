#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,l,m;
    scanf("%d",&t);
    char s[101];
    for(i=0;i<t;i++)
    {
        m=0;
        scanf("%s",&s);
        l=strlen(s);
        if(l%2==1)
        {
            printf("NO\n");
        }
         else if(l%2==0)
        {
            k=l/2;
            for(j=0;j<k;j++)
            {
                if(s[j]!=s[k+j])
                {
                    printf("NO\n");
                    m=1;
                    break;
                }
            }
            if(m==0)
            {
                printf("YES\n");
            }


        }

    }
    return 0;
}
