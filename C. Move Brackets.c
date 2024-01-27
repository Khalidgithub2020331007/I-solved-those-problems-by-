#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,j,max,l,m;
    char s[60];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        scanf("%s",s);
        m=0;
        max=0;
        l=0;
       // printf("%s\n",s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                m++;
            }
            else
            {
                m--;
            }

            if(m<max)
            {
                l++;
                max=m;
            }
          //  printf(" s[%d]-%c m-%d  max-%d \n",i+1,s[i],m,max);
        }
        printf("%d\n",l);
    }
    return 0;
}
