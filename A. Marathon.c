#include<stdio.h>
int main ()
{
    int i, k,j,t,a[4],m;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        m=0;
        for(i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<4;i++)
        {
            if(a[i]>a[0])
            {
                m++;
            }
        }
        printf("%d\n",m);

    }
}
