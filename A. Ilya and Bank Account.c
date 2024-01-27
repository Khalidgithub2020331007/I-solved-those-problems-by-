#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,l;
    char s[20];
    scanf("%s",s);
    l=strlen(s);
    if(s[0]=='-')
    {
        if(l==2)
        {
            printf("-0");

        }
        else if(l==3&&s[2]=='0')
        {
            printf("0");
        }
        else
        {
            if(s[l-2]>s[l-1])
            {
                s[l-2]=s[l-1];
                for(i=0;i<l-1;i++)
                {
                    printf("%c",s[i]);
                }
            }
            else
            {
                for(i=0;i<l-1;i++)
                {
                    printf("%c",s[i]);
                }
            }

        }
    }

    else
    {
        printf("%s",s);
    }
    return 0;

}
