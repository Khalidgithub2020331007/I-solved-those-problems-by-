#include<stdio.h>
int main()
{

    int t,i,j,k,l,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&m);
        if(m>3&&m%4==0)
        {
            printf("YES\n");

        }
        else
            {

            printf("NO\n");

            }
    }
    return 0;
}
