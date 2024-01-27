#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int x,n,m,flag;
        flag=0;
        scanf("%d %d %d",&x,&n,&m);
        for(;n>0||m>0;)
        {
            if(x<1)
            {
                printf("YES\n");
                flag=1;
                break;

            }
            else if(x>20&&n>0)
            {
                x=(x/2)+10;
                n--;
            }
            else if(m>0)
            {
                x=x-10;
                m--;
            }
           // printf("x-%d,n-%d,m-%d\n",x,n,m);
        }
        if(flag!=1&&x==0)
        {
            printf("YES\n");
        }

        if (flag!=1&&x!=0)
        {
            printf("NO\n");
        }


    }
    return 0;
}
