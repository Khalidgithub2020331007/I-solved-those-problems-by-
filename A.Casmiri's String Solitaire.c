#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l,t,a,b,c;
    scanf("%d",&t);
    char s[51];
    for(i=0;i<t;i++)
    {


        scanf("%s",s);
        l=strlen(s);
         a=0;
        b=0;
        c=0;
        for(j=0;j<l;j++)
        {
            if(s[j]=='A')
                a++;
                 if(s[j]=='B')
                b++;
                 if(s[j]=='C')
                c++;
        }
        if((b==a+c))
        {
            printf("YES\n");
        }
        else
        {

            printf("NO\n");
        }
    }
    return 0;
}
