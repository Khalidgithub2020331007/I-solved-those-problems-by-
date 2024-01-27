#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,j,k,m,n,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[110];
        scanf("%s",s);
         l=strlen(s);

        m=0,n=0,a=0,b=0;
        for(j=0;j<l;j++)
        {
              if(s[j]=='1')
            {


                m++;
            }
         }
           for(j=0;j<l;j++)
        {
            if(a==m)
            {
                break;

            }
              else if(s[j]=='1')
            {


                a++;
            }
            else if(a!=0&s[j]=='0')
            {
                n++;
            }
         }
        printf("%d\n",n);
    }
    return 0;
}
