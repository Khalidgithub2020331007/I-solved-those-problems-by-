#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,i,j,k;
    char  s[150];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {



                printf("%c",s[i]);
                i++;

        }
       printf("%c\n",s[l-1]);
    }
    return 0;

}
