#include<stdio.h>
#include<string.h>
int main()
{
    int l,flag,i,j,k,t,n;
    char s[100];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        scanf("%s",s);
        flag=1;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i]==s[j]&&s[j]!=s[j-1])
                {
                    printf("NO\n");
                    flag=0;
                    break;
                }

            }
              if(flag==0)
                {
                    break;
                }
        }
        if(flag!=0)
        {
            printf("YES\n");
        }
    }

    return 0;

}
