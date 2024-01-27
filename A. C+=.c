#include<stdio.h>
int main()
{
    int t ,j,i, a,b, n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&n);
        j=0;
        for(;;)
        {
            if(a>n||b>n)
            {
                printf("%d\n",j);
                  break;
            }
            else
            {
                a<b?(a=a+b):(b=a+b);
                j++;

            }
        }
    }
    return 0;
}
