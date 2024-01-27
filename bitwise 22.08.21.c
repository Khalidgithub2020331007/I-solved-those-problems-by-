#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int i,sum=0,j;
    for(i=l-1,j=0;i>=0;i--,j++)
    {
        if(s[i]=='0')
        {
            continue;
        }
         if(s[i]=='1')
         {
             sum=sum+ceil(pow(2,j));
         }

    }
    printf("%d",sum);
}
