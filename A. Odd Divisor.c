#include<stdio.h>
int main()
{
    int t,n,j,k,l;
  signed long int m,i;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        l=0;
        scanf("%ld",&m);
        if(m%2==1)
        {
            printf("Yes\n");
        }
        else if(m%2==0)
        {
            for(i=3;i<=(m/2);i=i+2)
            {
                if(m%i==0)
                {
                    printf("Yes\n");
                    l=1;
                    break;
                }
            }
            if(l==0)
            {
                  printf("NO\n");
            }

        }
    }
    return 0;
}
