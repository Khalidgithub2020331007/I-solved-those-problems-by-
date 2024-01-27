#include<stdio.h>
#include<string.h>
int main()
{

        int t,k,i,j,m,n,min,a,b,c;
    scanf("%d",&t);
    char s[200010];
    for(k=0;k<t;k++)
    {
        scanf("%s",s);
        int l=strlen(s);
        min=2000000;
        m=-1,n=-1,j=-1,c=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                m=i;
            }
            if(s[i]=='3')
            {
                n=i;
            }
            if(n!=-1&&m!=-1)
            {
                printf("m-%d n-%d\n",m,n);
                if(m>n)
                {
                    m=m^n;
                    n=m^n;
                    m=m^n;
                }  printf("m-%d n-%d\n",m,n);
                for(a=m+1;a<n;a++)
                {
                    printf("s[%d]-%c ",a+1,s[a]);
                    if(s[a]!='2')
                    {
                        c=1;
                        break;
                    }
                }

                if(c==0)
                {
                    j=abs(m-n)+1;
                if(j<=min)
                    {
                        min=j;
                    }
                }
                    printf("c-%d  j-%d  min=%d\n",c,j,min);
                m=-1,n=-1;
                i--;

            }

        }
        if(j==-1)
            {
                min=0;
            }
            printf("%d\n",min);
    }
    return 0;
}
