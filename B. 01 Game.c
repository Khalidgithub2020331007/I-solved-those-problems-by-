#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[101];
        scanf("%s",s);
        int l=strlen(s);
        int m=0,n=0,o,p,j;
        for(j=0;j<l;j++)
        {
            if(s[j]=='1')
            {
                m++;
            }
            else
            {
                n++;
            }
        }
        o=m>n?n:m;
       //printf("1-m-%d  0-n-%d  o-%d\n",m,n,o);
        if((o)%2==0)
        {
            printf("NET\n");
        }
        else
        {
            printf("DA\n");
        }

    }
    return 0;
}
