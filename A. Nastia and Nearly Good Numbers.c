#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        long long int c,d,e;
       c=(long long int)a;
       d=(long long int)a*(b);
       e=(long long int)a*(b+1);
        if(b==1)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES \n%lld %lld %lld\n",c,d,e);
        }
    }
    return 0;
}
