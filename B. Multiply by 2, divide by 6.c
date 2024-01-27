#include<stdio.h>
int main()
{
    int n,t,i,j,k,l;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        k=n;
        for(i=0;i<=(k);i++)
        {
            if(n==1)
            {
                printf("%d",i);
                break;

            }
            else if(n%6==0)
            {
                n=n/6;
            }
            else if(n%2==0&&n<6)
            {
                printf("-1");
                break;
            }

            else if(n%3==0)
            {
                n=n*2;
            }
            else if(n%4==0&&n%6!=0)
            {
                printf("-1");
                break;
            }
            else
            {
                printf("-1");
                break;
            }
         // printf("%d\n",n);


        }
        puts("");
    }
    return 0;
}
