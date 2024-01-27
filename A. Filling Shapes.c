#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t%2==0)
    {
        t=ceil(pow((double)2,(double)(t/2)));
        printf("%d\n",t);
    }

    else
    {
        printf("0\n");
    }
}
