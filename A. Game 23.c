#include<stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d %d",&n,&m);
    for(;;)
    {
        if(n>m||m%n!=0)
        {
            printf("-1\n");
            break;
        }
        else if(n==m)
        {
            printf("%d\n",c);
            break;
        }
        else if(m%3==0&&(m/3)%n==0)
        {
            m=m/3;
            c++;
        }
          else if(m%2==0)
        {
            m=m/2;
            c++;
        }
        else
        {
            printf("-1");
            break;
        }

    }
    return 0;
}
