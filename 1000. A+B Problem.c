#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,t,j;
        int sum=0;
        scanf("%d",&t);
        for(j=0;j<t;j++)
        {
            scanf("%d",&a);
            sum=sum+a;

        }
        int r=(int)ceil((double) sum/t);
        printf("%d\n",r);

    }


    return 0;
}
