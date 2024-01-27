#include<stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==1||b==1)
        {
            printf("%d %d\n",a,b);
        }
        else if(a==b)
        {
            printf("-1\n");
        }
        else
        {
           printf("%d 2\n",a>b?a-1:b-1);
        }
    }
    return 0;
}
