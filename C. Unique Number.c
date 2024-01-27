#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int x;
        int i,j=0;
        scanf("%d",&x);
        if(x<=9)
        {
            printf("%d\n",x);
        }
        else if(x<=17)
        {
            printf("%d9\n",x-9);
        }
        else if(x<=24)
        {
             printf("%d89\n",x-17);
        }
         else if(x<=30)
        {
             printf("%d789\n",x-24);
        }
         else if(x<=35)
        {
             printf("%d6789\n",x-30);
        }
         else if(x<=39)
        {
             printf("%d589\n",x-35);
        }
         else if(x<=42)
        {
             printf("%d456789\n",x-39);
        }
         else if(x<=44)
        {
             printf("%d3456789\n",x-42);
        }
         else if(x<=45)
        {
             printf("%d23456789\n",x-44);
        }
        else
        {
            printf("-1\n");
        }


    }
    return 0;

}
