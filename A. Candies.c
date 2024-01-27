#include<stdio.h>
int main()
{
    int n, i,t;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
              printf("2");
        }
        else
            printf("1");

        puts("");

    }


}

