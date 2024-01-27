#include<stdio.h>
#include<string.h>
int main()
{
    int l=0;
    char s[11];
    scanf("%s",s);
    int m=strlen(s);
    int i=0;



        for(i=0;i<m;)
    {
        printf("i-%d ,s[i]-%c.s[i+1]=%c,s[i+2]=%c\n",i+1,s[i],s[i+1],s[i+2]);

        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
        {
           i=i+3;

        }
        else  if(s[i]=='1'&&s[i+1]=='4')
        {
           i=i+2;

        }
                else  if(s[i]=='1')
        {
           i=i+1;

        }
        else
        {
            printf("NO");
            l=1;
            break;
        }
    }


    if(l==0)
    {
        printf("YES");
    }

    return 0;
}
