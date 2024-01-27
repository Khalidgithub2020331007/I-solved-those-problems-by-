#include<stdio.h>
#include<string.h>

int main()
{
    int i,l;
    char s[20];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='5')
        {
            printf("4");
        }
        else if(s[i]=='6')
        {
            printf("3");
        }
         else if(s[i]=='7')
        {
            printf("2");
        }
         else if(s[i]=='8')
        {
            printf("1");
        }
         else if(s[i]=='9'&&i!=0)
        {
            printf("0");
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}

