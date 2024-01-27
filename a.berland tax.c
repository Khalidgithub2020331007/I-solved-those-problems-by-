#include<stdio.h>
int main()
{
    int n,i,j,max=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
        if(max<a[i])
        {
            max=a[i];

        }
    }
    printf("%d\n",-(sum-max*n));
    return 0;
}
