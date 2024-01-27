#include<stdio.h>
int main()
{
    int t , a,b,n,s,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&n,&s);
        printf("%d %d %d %d\n",a,b,n,s);
        if(s%n<=b)
        {
            long long int c=(long long int)a*n+b;
            if(c>=s)

            {
                printf("YES\n");
            }
            else

            {
                printf("1-NO\n");
            }
        }
        else

        {
            printf("2-NO\n");
        }
    }
    return 0;
}
