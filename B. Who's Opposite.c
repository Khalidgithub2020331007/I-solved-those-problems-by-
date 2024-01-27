#include<stdio.h>
#include<math.h>

int main()
{
    int t, i,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>2*abs(a-b)||b>2*abs(a-b)||c>2*abs(a-b))
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",c+abs(a-b)>2*abs(a-b)?c-abs(a-b):c+abs(a-b));
        }

    }


}

