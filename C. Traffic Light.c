#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n,m,o;
        char c,d;
        scanf("%d %ch",&n,&c);
        char s[400050],s1[400050];
        scanf("%s",s);
        printf("%s\n",s);
        int i;
        strcpy(s1,s);
        strcat(s1,s);
        printf("%s\n",s1);
        for(i=n-1;i>0;i--)
        {
            if(s[i]=='g')
            {
                m=i;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='g')
            {
                o=i;
                break;
            }
        }
        printf("first-%d last %d\n",o+1,m+1);
        for(i=0;i<(2*n);i++)
        {

        }

    }
    return 0;

}
