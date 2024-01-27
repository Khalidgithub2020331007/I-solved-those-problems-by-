#include<stdio.h>
#include<string.h>
int main()
{
    int j,n,l,i,m;
    char s[50];
    char ch;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        m=0;
        scanf("%s",s);

        scanf(" %c",&ch);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]==ch&&i%2==0)
            {
                printf("YES\n");
                m=1;
                break;
            }



        }
        if(m==0)
         {
                printf("NO\n");
            }
    }
    return 0;
}
