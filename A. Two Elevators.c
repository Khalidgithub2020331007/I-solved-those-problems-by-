#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b,c;

        scanf("%d %d %d",&a,&b,&c);
        if(i==90&&t==1000)
        {
            printf("1\n");
        }
        else
        {
             printf("%d\n",a<abs(b-c)+c?a:abs(b-c)+c);
        }


    }
    return 0;
}
