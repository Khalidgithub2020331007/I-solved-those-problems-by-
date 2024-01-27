#include<stdio.h>
int main()
{
    int i,j,k,l,m,a,b,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if((a==b))
        {
            printf("0");

        }
        if((a>b&&(a-b)%2==0)||(a<b&&(b-a)%2==1))
        {
            printf("1");

        }
            if((a>b&&(a-b)%2==1)||(a<b&&(b-a)%2==0))
        {
            printf("2");
          }
          puts("");
    }
    return 0;
}
