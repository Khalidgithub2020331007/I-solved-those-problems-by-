#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[150];
    scanf("%s",s);
    int i,j,l=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                printf("%c%c\n",s[i],s[i+1]);
                l=1;
                break;

            }
        }
        if(l==1)
        {
            break;
        }

    }
     if(l==0)
        {
            printf("%c%c\n",s[0],s[1]);
        }
    return 0;

}
