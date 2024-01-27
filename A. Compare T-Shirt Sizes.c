#include<stdio.h>
#include<string.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int l,n;
        char s1[100],s2[100];
        scanf("%s %s",s1,s2);
        l=strlen(s1);
        n=strlen(s2);
        if(s1[l-1]!=s2[n-1])
        {
            if(s1[l-1]=='S'&&s2[n-1]=='L')
            {
                printf("<\n");
            }
            if(s1[l-1]=='S'&&s2[n-1]=='M')
                 {
                printf("<\n");
            }
            if(s1[l-1]=='M'&&s2[n-1]=='L')
             {
                printf("<\n");
            }
            if(s1[l-1]=='M'&&s2[n-1]=='S')
             {
                printf(">\n");
            }
            if(s1[l-1]=='L'&&s2[n-1]=='M')
             {
                printf(">\n");
            }
            if(s1[l-1]=='L'&&s2[n-1]=='S')
             {
                printf(">\n");
            }
        }
        else
        {
            if(s1[l-1]=='S')
            {
                if(l>n)
                {
                    printf("<\n");
                }
                else if(l<n)
                {
                    printf(">\n");
                }
                else
                {
                    printf("=\n");

                }
            }
            else if(s1[l-1]=='M')

            {
                printf("=\n");
            }
            else
            {
                if(l>n)
                {
                    printf(">\n");
                }
                else if(l<n)
                {
                    printf("<\n");
                }
                else
                {
                    printf("=\n");

                }
            }

        }


    }
    return 0;
}

