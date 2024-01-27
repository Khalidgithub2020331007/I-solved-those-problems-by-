#include<stdio.h>
int main()
{
    int i,a,b,n,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);

        if(a==0&&b!=0)
        {
            printf("1\n");
        }
        else
        {
            printf("%d\n",2*b+a+1);
        }


    }
    return 0;
}
