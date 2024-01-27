#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        a= ceil((double)((double)sqrt((double)a)));
        printf("%d\n",a);
    }
    return 0;

}
